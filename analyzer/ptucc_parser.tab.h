/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    BOOLEAN = 262,
    KW_DIV = 263,
    KW_FUNCTION = 264,
    KW_MOD = 265,
    KW_PROCEDURE = 266,
    KW_RESULT = 267,
    KW_ARRAY = 268,
    KW_DO = 269,
    KW_GOTO = 270,
    KW_NOT = 271,
    KW_RETURN = 272,
    KW_BOOLEAN = 273,
    KW_ELSE = 274,
    KW_IF = 275,
    KW_OF = 276,
    KW_REAL = 277,
    KW_THEN = 278,
    KW_CHAR = 279,
    KW_FOR = 280,
    KW_INTEGER = 281,
    KW_OR = 282,
    KW_REPEAT = 283,
    KW_UNTIL = 284,
    KW_END = 285,
    KW_VAR = 286,
    KW_WHILE = 287,
    KW_TO = 288,
    KW_DOWNTO = 289,
    KW_TYPE = 290,
    KW_PROGRAM = 291,
    KW_BEGIN = 292,
    arith_mul = 293,
    arith_division = 294,
    arith_div = 295,
    arith_mod = 296,
    comp_eq = 297,
    comp2 = 298,
    comp3 = 299,
    comp4 = 300,
    comp5 = 301,
    comp6 = 302,
    ASSIGNMENT = 303,
    log_and = 304,
    log_or = 305,
    log_not = 306,
    log_noteq = 307,
    plus = 308,
    minus = 309,
    para = 310,
    pard = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "ptucc_parser.y" /* yacc.c:1909  */

	char* crepr;

#line 115 "ptucc_parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */
