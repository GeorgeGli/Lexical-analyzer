/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ptucc_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 75 "ptucc_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ptucc_parser.tab.h".  */
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
#line 11 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 176 "ptucc_parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "ptucc_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,     2,     2,    60,     2,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    58,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    94,    94,   107,   112,   113,   115,   116,   119,   120,
     121,   128,   129,   131,   132,   134,   135,   138,   139,   142,
     143,   145,   146,   149,   150,   151,   152,   162,   163,   165,
     166,   168,   169,   173,   174,   176,   177,   185,   187,   188,
     190,   191,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   207,   208,   211,   213,   214,   216,
     217,   219,   220,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   236,   237,   238,   239,   240,
     242,   243,   244,   245,   246,   247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "REAL", "STRING",
  "BOOLEAN", "KW_DIV", "KW_FUNCTION", "KW_MOD", "KW_PROCEDURE",
  "KW_RESULT", "KW_ARRAY", "KW_DO", "KW_GOTO", "KW_NOT", "KW_RETURN",
  "KW_BOOLEAN", "KW_ELSE", "KW_IF", "KW_OF", "KW_REAL", "KW_THEN",
  "KW_CHAR", "KW_FOR", "KW_INTEGER", "KW_OR", "KW_REPEAT", "KW_UNTIL",
  "KW_END", "KW_VAR", "KW_WHILE", "KW_TO", "KW_DOWNTO", "KW_TYPE",
  "KW_PROGRAM", "KW_BEGIN", "arith_mul", "arith_division", "arith_div",
  "arith_mod", "comp_eq", "comp2", "comp3", "comp4", "comp5", "comp6",
  "ASSIGNMENT", "log_and", "log_or", "log_not", "log_noteq", "plus",
  "minus", "para", "pard", "'.'", "';'", "':'", "','", "'('", "')'",
  "$accept", "program", "program_decl", "type", "typelist", "typedef",
  "vars", "vars2", "vars3", "size", "varlist", "type4", "vartype",
  "subprogram", "subprogram2", "subprogram3", "parameters", "parameters2",
  "body", "statements", "statement_list", "statement", "case", "proc_call",
  "arguments", "arglist", "expression", "telesths", "operation", "number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    46,    59,    58,
      44,    40,    41
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    32,    38,     6,    -9,   -70,    50,    34,   -70,    30,
      50,   -70,    70,    19,   209,   -70,   -70,    70,   -70,    -4,
      76,    80,    47,    19,   -70,   -70,     2,   -70,   -70,   -70,
     -70,    33,   -70,   -70,    83,    87,    31,    36,   168,    41,
     -70,    63,   108,     5,   -70,    45,    52,   -70,    70,    70,
     -34,    66,   112,   -70,     3,   116,    96,     3,    92,    65,
     -70,   -70,   -70,    69,    74,    56,   134,    12,   -70,    11,
     -45,   -70,   -42,     3,    96,     3,     3,   -70,    88,   -70,
     -70,   -70,   -70,   -70,     0,     3,   -70,   123,   -70,   -70,
      93,   -70,   -70,   125,    -2,   -70,   168,   -70,   -70,    99,
     105,    56,   212,    70,   104,   120,   222,   -70,   117,   114,
     222,   222,   -70,     3,   145,    96,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     3,     3,
       3,    96,   -70,   -70,   -70,   124,   160,   -70,   -70,    56,
     -70,   -70,     3,   164,   -70,   147,   -70,   206,   222,   -70,
     -70,    56,   143,   222,   -70,    96,     3,     3,   -70,   -70,
     -70,    90,   106,    96,    96,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     1,     0,    11,     3,     0,
       5,     6,     0,    27,     0,     7,    19,    12,    13,     0,
       0,     0,     0,    28,    29,    22,     0,    24,    26,    25,
      23,     0,    21,    14,     0,     0,     0,     0,    38,     0,
      30,     0,     0,     0,     8,     0,     0,    20,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,    39,
      40,    42,     2,     0,     0,     0,     0,     0,    15,     0,
       0,    33,     0,     0,     0,    57,     0,    48,    80,    81,
      82,    79,    83,    85,     0,     0,    84,     0,    62,    75,
       0,    55,    54,     0,     0,    37,     0,     9,    17,     0,
       0,     0,     0,     0,     0,     0,    43,    53,     0,    58,
      59,    44,    76,     0,     0,     0,    66,    67,    65,    70,
      71,    72,    73,    68,    69,    74,    63,    64,     0,     0,
       0,     0,    41,    10,    18,     0,     0,    35,    34,     0,
      31,    56,     0,     0,    77,    45,    61,     0,    47,    52,
      16,     0,     0,    60,    78,     0,     0,     0,    36,    32,
      46,     0,     0,     0,     0,    50,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,   192,   -70,   -70,   187,   174,
      17,   -39,   -33,   -70,   -70,   197,   172,   121,   201,   -70,
     -70,   -27,   -69,   -38,   -70,   -70,   -54,   -70,   100,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    10,    11,    13,    17,    18,    43,
      69,    31,    32,    22,    23,    24,    70,    71,    91,    58,
      59,    92,    93,    86,   108,   109,    87,   128,    88,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    46,    63,    94,   112,   107,    78,    79,    80,    81,
      82,    60,   131,   103,    73,    83,   103,   104,    61,   106,
     105,   110,   111,    41,     1,    74,    65,    75,    20,    19,
      21,   114,    99,   101,    19,     4,    61,   116,     5,   117,
     118,     6,   119,   120,   121,   122,   145,   123,   124,     8,
     125,   126,   127,     9,    84,    34,    35,    42,    61,   143,
      66,   113,   149,   137,    85,    12,    25,    66,   135,   132,
     102,    35,    14,    16,    27,   147,   148,    61,    28,    36,
      29,    27,    30,    37,    38,    28,   160,    29,   153,    30,
      47,    44,    48,    61,   165,   166,    45,    49,    62,    50,
      42,    27,   161,   162,   163,    28,   152,    29,    51,    30,
      68,    52,    64,    53,    76,    77,    54,    61,   158,    90,
     164,    55,    95,    96,    56,    61,    61,    97,    57,   116,
      98,   117,   118,    38,   119,   120,   121,   122,   100,   123,
     124,   129,   125,   126,   127,   116,   115,   117,   118,    75,
     119,   120,   121,   122,   130,   123,   124,   133,   125,   126,
     127,   134,   116,   139,   117,   118,   155,   119,   120,   121,
     122,    50,   123,   124,   142,   125,   126,   127,   140,   141,
      51,   151,   150,    52,   116,    53,   117,   118,    54,   119,
     120,   121,   122,    55,   123,   124,    56,   125,   126,   127,
      57,   159,    15,   116,    33,   117,   118,   144,   119,   120,
     121,   122,    25,   123,   124,    25,   125,   126,   127,    67,
      40,    72,    26,    39,   138,   136,   154,    27,   146,     0,
      27,    28,     0,    29,    28,    30,    29,     0,    30,   156,
     157,     0,     0,     0,     0,   116,     0,   117,   118,     0,
     119,   120,   121,   122,     0,   123,   124,     0,   125,   126,
     127,   116,     0,   117,   118,     0,   119,   120,   121,   122,
       0,   123,   124,     0,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      38,    34,    41,    57,     4,    74,     3,     4,     5,     6,
       7,    38,    14,    58,    48,    12,    58,    62,    56,    73,
      62,    75,    76,    21,    36,    59,    21,    61,     9,    12,
      11,    85,    65,    21,    17,     3,    74,    39,     0,    41,
      42,    35,    44,    45,    46,    47,   115,    49,    50,    58,
      52,    53,    54,     3,    51,    59,    60,    55,    96,   113,
      55,    61,   131,   102,    61,    31,     3,    55,   101,    96,
      59,    60,    42,     3,    18,   129,   130,   115,    22,     3,
      24,    18,    26,     3,    37,    22,   155,    24,   142,    26,
       3,    58,    61,   131,   163,   164,    13,    61,    57,     3,
      55,    18,   156,   157,    14,    22,   139,    24,    12,    26,
      58,    15,     4,    17,    48,     3,    20,   155,   151,     3,
      14,    25,    30,    58,    28,   163,   164,    58,    32,    39,
      56,    41,    42,    37,    44,    45,    46,    47,     4,    49,
      50,    48,    52,    53,    54,    39,    23,    41,    42,    61,
      44,    45,    46,    47,    29,    49,    50,    58,    52,    53,
      54,    56,    39,    59,    41,    42,    19,    44,    45,    46,
      47,     3,    49,    50,    60,    52,    53,    54,    58,    62,
      12,    21,    58,    15,    39,    17,    41,    42,    20,    44,
      45,    46,    47,    25,    49,    50,    28,    52,    53,    54,
      32,    58,    10,    39,    17,    41,    42,    62,    44,    45,
      46,    47,     3,    49,    50,     3,    52,    53,    54,    45,
      23,    49,    13,    22,   103,    13,    62,    18,   128,    -1,
      18,    22,    -1,    24,    22,    26,    24,    -1,    26,    33,
      34,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    -1,    49,    50,    -1,    52,    53,
      54,    39,    -1,    41,    42,    -1,    44,    45,    46,    47,
      -1,    49,    50,    -1,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    64,    65,     3,     0,    35,    66,    58,     3,
      67,    68,    31,    69,    42,    68,     3,    70,    71,    73,
       9,    11,    76,    77,    78,     3,    13,    18,    22,    24,
      26,    74,    75,    71,    59,    60,     3,     3,    37,    81,
      78,    21,    55,    72,    58,    13,    75,     3,    61,    61,
       3,    12,    15,    17,    20,    25,    28,    32,    82,    83,
      84,    86,    57,    74,     4,    21,    55,    72,    58,    73,
      79,    80,    79,    48,    59,    61,    48,     3,     3,     4,
       5,     6,     7,    12,    51,    61,    86,    89,    91,    92,
       3,    81,    84,    85,    89,    30,    58,    58,    56,    75,
       4,    21,    59,    58,    62,    62,    89,    85,    87,    88,
      89,    89,     4,    61,    89,    23,    39,    41,    42,    44,
      45,    46,    47,    49,    50,    52,    53,    54,    90,    48,
      29,    14,    84,    58,    56,    75,    13,    74,    80,    59,
      58,    62,    60,    89,    62,    85,    91,    89,    89,    85,
      58,    21,    75,    89,    62,    19,    33,    34,    75,    58,
      85,    89,    89,    14,    14,    85,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     0,     2,     1,     2,     4,     6,
       7,     0,     2,     1,     2,     4,     7,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     6,     8,     1,     3,     3,     5,     3,     0,     1,
       1,     3,     1,     3,     3,     4,     6,     4,     2,     1,
       8,     8,     4,     3,     1,     1,     4,     0,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     4,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 95 "ptucc_parser.y" /* yacc.c:1646  */
    { 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", (yyvsp[-5].crepr));
		printf("%s\n\n%s\n\n%s\n\nint main() %s \n", (yyvsp[-4].crepr),(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));
	}
}
#line 1420 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1426 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 112 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1432 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1438 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1444 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1450 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 119 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));  }
#line 1456 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 120 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s* %s;\n", (yyvsp[-1].crepr), (yyvsp[-5].crepr));  }
#line 1462 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s* %s %s;\n", (yyvsp[-1].crepr), (yyvsp[-6].crepr),(yyvsp[-3].crepr));  }
#line 1468 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1474 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1480 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 132 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1486 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n", (yyvsp[-1].crepr), (yyvsp[-3].crepr));  }
#line 1492 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 135 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s\n",(yyvsp[-6].crepr),(yyvsp[-3].crepr),(yyvsp[-1].crepr));  }
#line 1498 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s",  (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1504 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s %s", (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1510 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1516 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1522 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1528 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1534 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; }
#line 1540 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1546 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1552 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1558 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1564 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s){}\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr));  }
#line 1570 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 169 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s)\n{}", (yyvsp[-1].crepr),(yyvsp[-6].crepr), (yyvsp[-4].crepr));  }
#line 1576 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1582 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));  }
#line 1588 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s* %s", (yyvsp[0].crepr), (yyvsp[-4].crepr));  }
#line 1594 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 185 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{\n %s \n }\n", (yyvsp[-1].crepr)); }
#line 1600 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1606 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1612 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 191 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1618 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n", (yyvsp[0].crepr)); }
#line 1624 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1630 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1636 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s (%s)\n{\n %s}\n", (yyvsp[-3].crepr), (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1642 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s (%s)\n{\n %s}\n%s\n{%s}\n", (yyvsp[-5].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr),(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1648 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("\ndo {%s}\n while (%s)\n",(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1654 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s %s;\n",(yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1660 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 201 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "return ;"; }
#line 1666 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 202 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s(%s=%s; %s<%s; %s++)\n{%s}\n",(yyvsp[-7].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr));}
#line 1672 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s(%s=%s; %s<%s; %s--)\n{%s}\n",(yyvsp[-7].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr));}
#line 1678 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s (%s)\n {%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr)); }
#line 1684 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s: %s\n", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1690 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 207 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1696 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1702 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1708 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1714 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1720 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1726 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1732 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s", (yyvsp[-2].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1738 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1744 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1750 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 223 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1756 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "==";  }
#line 1762 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "/";  }
#line 1768 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 226 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "%";  }
#line 1774 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "&&";  }
#line 1780 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "||";  }
#line 1786 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "<";  }
#line 1792 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 230 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "<=";  }
#line 1798 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ">";  }
#line 1804 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ">=";  }
#line 1810 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "!=";  }
#line 1816 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1822 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s( %s )", (yyvsp[-1].crepr), (yyvsp[0].crepr));  }
#line 1828 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("( %s )", (yyvsp[-1].crepr));  }
#line 1834 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s( %s )", (yyvsp[-3].crepr), (yyvsp[-1].crepr));  }
#line 1840 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 240 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1846 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 242 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1852 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 243 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1858 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1864 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 245 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1870 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1876 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr));  }
#line 1882 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1886 "ptucc_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 250 "ptucc_parser.y" /* yacc.c:1906  */


