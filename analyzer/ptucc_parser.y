%{
#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}

%union
{
	char* crepr;
}


%token <crepr> IDENT
%token <crepr> POSINT 
%token <crepr> REAL 
%token <crepr> STRING
%token <crepr> BOOLEAN

%token <crepr> KW_DIV
%token <crepr> KW_FUNCTION
%token <crepr> KW_MOD
%token <crepr> KW_PROCEDURE
%token <crepr> KW_RESULT
%token <crepr> KW_ARRAY
%token <crepr> KW_DO
%token <crepr> KW_GOTO
%token <crepr> KW_NOT
%token <crepr> KW_RETURN
%token <crepr> KW_BOOLEAN
%token <crepr> KW_ELSE
%token <crepr> KW_IF
%token <crepr> KW_OF
%token <crepr> KW_REAL
%token <crepr> KW_THEN
%token <crepr> KW_CHAR
%token <crepr> KW_FOR
%token <crepr> KW_INTEGER
%token <crepr> KW_OR
%token <crepr> KW_REPEAT
%token <crepr> KW_UNTIL
%token <crepr> KW_END
%token <crepr> KW_VAR
%token <crepr> KW_WHILE
%token <crepr> KW_TO
%token <crepr> KW_DOWNTO
%token <crepr> KW_TYPE
%token <crepr> KW_PROGRAM 
%token <crepr> KW_BEGIN 

						
%token <crepr> arith_mul
%token <crepr> arith_division
%token <crepr> arith_div
%token <crepr> arith_mod
				
%token <crepr> comp_eq
%token <crepr> comp2
%token <crepr> comp3				
%token <crepr> comp4
%token <crepr> comp5 
%token <crepr> comp6
%token <crepr> ASSIGNMENT
									
%token <crepr> log_and			
%token <crepr> log_or
%token <crepr> log_not

%token <crepr> log_noteq

%token <crepr> plus
%token <crepr> minus
%token <crepr> para
%token <crepr> pard
%right KW_THEN 
%right KW_ELSE

%start program

%type <crepr> program_decl body statements statement_list
%type <crepr> statement proc_call arguments
%type <crepr> arglist expression
%type <crepr> vars vars2 vars3 varlist
%type <crepr> type typelist typedef vartype size type4
%type <crepr> case
%type <crepr> operation telesths number
%type <crepr> subprogram subprogram2 subprogram3 parameters parameters2


%%

program:  program_decl type vars subprogram body  '.'  		
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf("%s\n\n%s\n\n%s\n\nint main() %s \n", $2,$3,$4,$5);
	}
};


program_decl : KW_PROGRAM IDENT ';' 				{ $$ = $2; };




type:						{ $$ = ""; };
    | KW_TYPE typelist				{ $$ = template("%s", $2); };

typelist: typedef				{ $$ = template("%s", $1);  };
         | typelist typedef 			{ $$ = template("%s%s", $1, $2);  };


typedef: IDENT comp_eq type4 ';'			  { $$ = template("typedef %s %s;\n", $3, $1);  };
       | IDENT comp_eq KW_ARRAY KW_OF type4 ';'		  { $$ = template("typedef %s* %s;\n", $5, $1);  };
       | IDENT comp_eq KW_ARRAY size KW_OF vartype ';'    { $$ = template("typedef %s* %s %s;\n", $6, $1,$4);  };






vars: 								{ $$ = ""; }; 
    | KW_VAR vars2						{ $$ = template("%s", $2); };

vars2: vars3
     | vars2 vars3					{ $$ = template("%s%s", $1, $2); };

vars3: varlist ':' vartype ';'			        { $$ = template("%s %s;\n", $3, $1);  };		
     | varlist ':' KW_ARRAY size KW_OF vartype ';'      { $$ = template("%s %s %s\n",$1,$4,$6);  };


size: para POSINT pard		 			{ $$ = template("%s %s %s",  $1, $2, $3);  };
     | size para POSINT pard           		        { $$ = template("%s %s %s %s", $1, $2, $3, $4);  };


varlist: IDENT 					 
       | varlist ',' IDENT		{ $$ = template("%s,%s", $1, $3);  };

type4: vartype 					        
     | IDENT				{ $$ = template("%s", $1);  };


vartype: KW_INTEGER 			{ $$ = "int"; };
	| KW_BOOLEAN 			{ $$ = "int"; };
	| KW_CHAR 			{ $$ = "char"; };
	| KW_REAL 			{ $$ = "double"; };









subprogram:						{ $$ = ""; };
	  | subprogram2 				{ $$ = template("%s", $1);  };

subprogram2: subprogram3 
	   | subprogram2  subprogram3			{ $$ = template("%s%s", $1, $2);  };

subprogram3: KW_PROCEDURE IDENT '(' parameters ')' ';'             { $$ = template("void %s (%s){}\n", $2, $4);  };
           | KW_FUNCTION IDENT '(' parameters ')' ':' vartype ';'  { $$ = template("%s %s (%s)\n{}", $7,$2, $4);  };



parameters: parameters2						 
	  | parameters ';' parameters2 		                { $$ = template("%s,%s", $1, $3);  };   

parameters2: varlist ':' type4					{ $$ = template("%s %s", $3, $1);  };
           | varlist ':' KW_ARRAY KW_OF vartype 		{ $$ = template("%s* %s", $5, $1);  };







body : KW_BEGIN statements KW_END   				{ $$ = template("{\n %s \n }\n", $2); };

statements: 				          	        { $$ = ""; };
           | statement_list		   		        { $$ = $1; };

statement_list: statement                     
              | statement_list ';' statement                    { $$ = template("%s%s", $1, $3); }; 


statement: proc_call  						{ $$ = template("%s;\n", $1); };
         | IDENT ASSIGNMENT expression				{ $$ = template("%s = %s;\n", $1, $3); };
	 | KW_RESULT ASSIGNMENT expression			{ $$ = template("%s = %s;\n", $1, $3); };          
	 | KW_IF expression KW_THEN case			{ $$ = template("\n%s (%s)\n{\n %s}\n", $1, $2, $4); };
	 | KW_IF expression KW_THEN case KW_ELSE case          { $$ = template("\n%s (%s)\n{\n %s}\n%s\n{%s}\n", $1, $2, $4,$5,$6); }; 
         | KW_REPEAT case KW_UNTIL expression                     {$$ = template("\ndo {%s}\n while (%s)\n",$2,$4); }
         | KW_GOTO IDENT		                        { $$ = template("\n%s %s;\n",$1,$2); };
         | KW_RETURN			                        { $$ = "return ;"; };
         | KW_FOR IDENT ASSIGNMENT expression KW_TO expression KW_DO case { $$ = template("\n%s(%s=%s; %s<%s; %s++)\n{%s}\n",$1,$2,$4,$2,$6,$2,$8);};
         | KW_FOR IDENT ASSIGNMENT expression KW_DOWNTO expression KW_DO case { $$ = template("\n%s(%s=%s; %s<%s; %s--)\n{%s}\n",$1,$2,$4,$2,$6,$2,$8);};
         | KW_WHILE expression KW_DO case       { $$ = template("\n%s (%s)\n {%s}\n",$1,$2,$4); };
         | IDENT ':' case                       { $$ = template("\n%s: %s\n", $1, $3); };

case: statement			{ $$ = $1; }
    | body			{ $$ = $1; }


proc_call: IDENT '(' arguments ')' 			        { $$ = template("%s(%s)", $1, $3); };

arguments :							{ $$ = ""; }
	  | arglist 						{ $$ = $1; };

arglist: expression						{ $$ = $1; }
       | arglist ',' expression 				{ $$ = template("%s,%s", $1, $3);  };

expression: expression telesths operation 			{ $$ = template("%s %s %s", $1, $2, $3);  };
	  | operation 					        { $$ = $1; };

telesths: plus                                          { $$ = template("%s", $1);  };
        | minus                                         { $$ = template("%s", $1);  };
        | comp_eq				        { $$ = "==";  };
        | arith_division 				{ $$ = "/";  };
	| arith_mod 					{ $$ = "%";  };
	| log_and 					{ $$ = "&&";  };
	| log_or					{ $$ = "||";  }; 
        | comp3                                         { $$ = "<";  };
        | comp4                                         { $$ = "<=";  };
	| comp5                                         { $$ = ">";  };
        | comp6                                         { $$ = ">=";  };
	| log_noteq					{ $$ = "!=";  };


operation: number 				{ $$ = template("%s", $1);  };
	| log_not POSINT 			{ $$ = template("%s( %s )", $1, $2);  };
	| '(' expression ')'		        { $$ = template("( %s )", $2);  };
	| log_not '(' expression ')'	        { $$ = template("%s( %s )", $1, $3);  };
	| STRING 				{ $$ = string_ptuc2c($1); };

number: IDENT 					{ $$ = template("%s", $1);  };
	| POSINT 				{ $$ = template("%s", $1);  };
	| REAL					{ $$ = template("%s", $1);  };
	| BOOLEAN				{ $$ = template("%s", $1);  };
	| proc_call				{ $$ = template("%s", $1);  };	
	| KW_RESULT				{ $$ = template("%s", $1);  };
       		

%%

