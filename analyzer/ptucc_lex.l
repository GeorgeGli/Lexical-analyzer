%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ptucc_parser.tab.h"
#include "cgen.h"

int line_num = 1;

/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  '[^'\n]*'
BOOLEAN (TRUE|FALSE)



%x comment
%x macro

%%

@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID}             {
							/* Store macro name */
							char* name = strdup(yytext);
							char* def = NULL;
							size_t deflen = 0;
							char c;

							FILE* deff = open_memstream(&def, &deflen);

							while((c=input())!='\n')
							   fputc(c, deff);
							fclose(deff);

							if(!set_macro(name, def))
								yyerror("lexer error: failed to define macro '%s'\n", name);
							BEGIN(INITIAL);
						};

program					{ yylval.crepr = strdup(yytext); return KW_PROGRAM; }
begin 					{ yylval.crepr = strdup(yytext); return KW_BEGIN;  }
end				       { yylval.crepr = strdup(yytext);  return KW_END; }
div                                    { yylval.crepr = strdup(yytext);  return KW_DIV; }
function                               { yylval.crepr = strdup(yytext);  return KW_FUNCTION; }
mod                                    { yylval.crepr = strdup(yytext);  return KW_MOD; }
procedure                               { yylval.crepr = strdup(yytext); return KW_PROCEDURE; }
result                                  { yylval.crepr = strdup(yytext); return KW_RESULT; }
array                                  { yylval.crepr = strdup(yytext);  return KW_ARRAY; }
do                                     { yylval.crepr = strdup(yytext);  return KW_DO; }
goto                                   { yylval.crepr = strdup(yytext);  return KW_GOTO; }
not                                    { yylval.crepr = strdup(yytext);  return KW_NOT; }
return                                 { yylval.crepr = strdup(yytext);  return KW_RETURN; }
boolean                                { yylval.crepr = strdup(yytext);  return KW_BOOLEAN; }
else                                   { yylval.crepr = strdup(yytext);  return KW_ELSE; }
if                                     { yylval.crepr = strdup(yytext);  return KW_IF; }
of        				{ yylval.crepr = strdup(yytext); return KW_OF; }
real					{ yylval.crepr = strdup(yytext); return KW_REAL; }
then					{ yylval.crepr = strdup(yytext); return KW_THEN; }
char					{ yylval.crepr = strdup(yytext); return KW_CHAR; }
for					{ yylval.crepr = strdup(yytext); return KW_FOR; }
integer					{ yylval.crepr = strdup(yytext); return KW_INTEGER; }
or					{ yylval.crepr = strdup(yytext); return KW_OR; }
repeat					{ yylval.crepr = strdup(yytext); return KW_REPEAT; }
until					{ yylval.crepr = strdup(yytext); return KW_UNTIL; }
begin					{ yylval.crepr = strdup(yytext); return KW_BEGIN; }
end					{ yylval.crepr = strdup(yytext); return KW_END; }
var					{ yylval.crepr = strdup(yytext); return KW_VAR; }
while					{ yylval.crepr = strdup(yytext); return KW_WHILE; }
to					{ yylval.crepr = strdup(yytext); return KW_TO; }
downto					{ yylval.crepr = strdup(yytext); return KW_DOWNTO; }
type					{ yylval.crepr = strdup(yytext); return KW_TYPE; }

{ID}  					{
						   char* def = get_macro(yytext);
						   if(def==NULL) {
						   		yylval.crepr = strdup(yytext);
						   		return IDENT;
						   	}
						   for(int i=strlen(def); i>0; i--) {
						   	  unput(def[i-1]);
						   }
						} 						
{NUMBER}				{ yylval.crepr = strdup(yytext); return POSINT; }
{REAL}					{ yylval.crepr = strdup(yytext); return REAL; }
{STRING}				{ yylval.crepr = strdup(yytext); return STRING; }
{BOOLEAN}				{ yylval.crepr = strdup(yytext); return BOOLEAN; }

 							
"*"					{ yylval.crepr = strdup(yytext);return arith_mul; }
"/"					{ yylval.crepr = strdup(yytext);return arith_division; }
"div"					{ yylval.crepr = strdup(yytext);return arith_div; }
"mod"					{ yylval.crepr = strdup(yytext);return arith_mod; }

				
"="					{ yylval.crepr = strdup(yytext);return comp_eq; }
"<>"					{ yylval.crepr = strdup(yytext);return comp2; }
"<"			        	{ yylval.crepr = strdup(yytext);return comp3; }				
"<="					{ yylval.crepr = strdup(yytext);return comp4; }
">"					{ yylval.crepr = strdup(yytext);return comp5; } 
">="					{ yylval.crepr = strdup(yytext);return comp6; }

											
"and"|"&&"		                { yylval.crepr = strdup(yytext);return log_and; }			
"or" | "||"		        	{ yylval.crepr = strdup(yytext);return log_or; }
"not"					{ yylval.crepr = strdup(yytext);return log_not; }
					
					
"!"					{ yylval.crepr = strdup(yytext);return log_noteq; }

"+"					{ yylval.crepr = strdup(yytext);return plus; }
"-"					{ yylval.crepr = strdup(yytext);return minus; }

":="					{ yylval.crepr = strdup(yytext);return ASSIGNMENT; }

";"						return ';';
"."						return '.';
"("						return '(';
")"						return ')';
","						return ',';
":"						return ':';
"["						{ yylval.crepr = strdup(yytext);return para;}
"]"						{ yylval.crepr = strdup(yytext);return pard;}

"array"					{yylval.crepr = strdup(yytext);		return KW_ARRAY;}

"(*"			BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);


[ \r\t]					/* skip whitespace */
\n 					++line_num;
<<EOF>> 				return EOF;

.        { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }


%%

int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}
	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}


