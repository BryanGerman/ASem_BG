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
#line 1 "AnalizadorS.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
void buscar(char *);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern char* yycopy;
extern int contador;

#line 80 "AnalizadorS.tab.c" /* yacc.c:339  */

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
   by #include "AnalizadorS.tab.h".  */
#ifndef YY_YY_ANALIZADORS_TAB_H_INCLUDED
# define YY_YY_ANALIZADORS_TAB_H_INCLUDED
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
    Lit_int = 258,
    IGUAL = 259,
    Palabra_reservada = 260,
    Identificador = 261,
    Operador = 262,
    Opcompuesto = 263,
    OpControl = 264,
    OP = 265,
    OPLog = 266,
    OpLogControl = 267,
    TipoDato = 268,
    Lit_float = 269,
    ENTERO = 270,
    ENTERO_NEG = 271,
    Lit_bool = 272,
    Lit_char = 273,
    Lit_String = 274,
    ASIGNACION = 275,
    PUNTOCOM = 276,
    SEPARADOR = 277,
    AGRPAR_AB = 278,
    AGRPAR_CE = 279,
    AGRCOR_AB = 280,
    AGRCOR_CE = 281,
    AGRLLAV_AB = 282,
    AGRLLAV_CE = 283,
    IF = 284,
    THEN = 285,
    ELSE = 286,
    WHILE = 287,
    DO = 288,
    INPUT = 289,
    OUTPUT = 290,
    RETURN = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 49 "AnalizadorS.y" /* yacc.c:355  */

int entero;
char* tipo;
char* identificador;

#line 163 "AnalizadorS.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADORS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "AnalizadorS.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    64,    67,    68,    69,    71,
      72,    75,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    93,    94,    95,    96,    97,   101,
     102,   103,   104,   105,   106,   107,   108,   112,   113,   114,
     115,   116,   120,   121,   127,   130,   133,   136,   137,   142,
     145,   148,   151,   152,   157,   160,   163,   166,   167,   172,
     175,   178,   183,   184,   185,   186,   187,   188,   189,   190,
     194,   197,   200,   203,   208,   211,   214,   220,   221,   224,
     225,   226,   230,   231,   232,   233,   234,   237,   238,   239,
     240,   241,   245,   246,   250,   253,   254,   255,   258,   259,
     260,   264,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Lit_int", "IGUAL", "Palabra_reservada",
  "Identificador", "Operador", "Opcompuesto", "OpControl", "OP", "OPLog",
  "OpLogControl", "TipoDato", "Lit_float", "ENTERO", "ENTERO_NEG",
  "Lit_bool", "Lit_char", "Lit_String", "ASIGNACION", "PUNTOCOM",
  "SEPARADOR", "AGRPAR_AB", "AGRPAR_CE", "AGRCOR_AB", "AGRCOR_CE",
  "AGRLLAV_AB", "AGRLLAV_CE", "IF", "THEN", "ELSE", "WHILE", "DO", "INPUT",
  "OUTPUT", "RETURN", "$accept", "prog", "asignacionglobal", "funcion",
  "tamaVector", "bloqueComandosFunciones", "if", "bloqueComandosIF",
  "while", "stackOpLogControl", "bloqueComandosWhile", "atribucion",
  "stackAsig", "stackOp", "OperacionArit", "OperacionLog", "lista",
  "asignacionLocal", "valorNumerico", "valorCaracter", "input", "output", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -95,    58,   -95,    31,   -95,   -95,   -18,    -2,    -9,    16,
      91,   -95,     7,   121,   -10,    46,    26,    39,   -95,   100,
      28,    74,   134,    37,    84,   217,    99,    90,   217,   -95,
     209,   -95,     4,   110,    29,    29,    61,   119,   133,   135,
     217,   217,   217,   217,   217,   -95,   -95,    39,   217,   136,
     155,   140,   280,   154,   172,   176,    29,   151,   157,   167,
     320,   -95,   159,   163,   320,   320,   -95,   -95,   173,   180,
     201,   -95,   -95,   -95,   -95,   -95,   181,   202,   188,   213,
     149,   -95,   -95,   -95,   -95,   -95,   -95,   104,   -95,   -95,
     -95,   153,   -95,   195,   203,   249,   205,   248,    61,   227,
     -95,   211,    29,    29,   -95,   -95,   223,   226,   225,   251,
     230,   -95,   231,   125,   221,   149,   236,   153,   321,   336,
     258,   -95,   191,   116,   278,   296,   305,   287,   -95,   238,
     -95,   287,   287,   -95,   -95,   -95,   -95,   203,   -95,   -95,
     -95,   -95,   270,   -95,   250,   -95,   -95,   269,   -95,   275,
     276,   -95,   281,   -95,   269,   -95,   275,   276,   -95,   281,
     355,    29,   -95,    29,   -95,    29,   -95,    29,   -95,    29,
     -95,   287,   261,   273,   287,   -95,   -95,   282,   -95,   279,
     -95,   -95,   320,   320,   320,   320,   320,   284,   -95,   -95,
     -95,   295,   -95,   -95,   -95,   -95,   -95,   297,   302,   287,
     -95,   301,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,     0,     2,     3,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,    78,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    18,    17,    19,    22,    23,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,    41,     0,     0,    63,    64,    68,    69,     0,     0,
       0,    15,    16,    13,    12,    14,     0,     0,     0,     0,
      73,    97,    96,    95,    99,    98,   100,     0,    70,    80,
      81,    71,    72,     0,    92,     0,     0,     0,     0,     0,
      67,     0,     0,     0,    65,    66,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    43,    46,    44,    45,    42,     0,    41,    25,
      34,    30,    31,    35,    36,    38,    37,     0,    62,    40,
      39,   101,     0,     6,     0,    10,     7,    84,    85,    82,
      89,    90,    87,    79,     0,    86,    83,     0,    91,    88,
       0,     0,    53,     0,    56,     0,    54,     0,    55,     0,
      52,     0,     0,     0,     0,    32,    33,     0,     9,     0,
      74,    75,    48,    51,    49,    50,    47,    27,    29,    26,
     102,     0,    58,    61,    59,    60,    57,     0,     0,     0,
      76,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   -95,   316,   -25,   -90,    -6,    33,
      88,   -16,   160,   254,   -75,   -57,   312,     6,   -74,   -94,
      35,    57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     5,     9,    39,   100,   173,    41,    57,
      63,    64,    43,    88,    89,    90,    17,    65,    91,    92,
      66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,   125,    10,    40,    11,    40,    12,   129,    52,    42,
      21,    61,    42,   117,    42,    40,    40,    40,    40,    40,
     123,   124,    13,    40,    42,    42,    42,    42,    42,    53,
      62,    44,    42,    18,    44,    55,    44,     6,   148,   149,
     152,   175,   176,   155,   156,   159,    44,    44,    44,    44,
      44,     7,    56,    25,    44,    28,     8,   151,     2,    14,
      45,    26,   158,    45,    30,    45,   181,    32,    58,    22,
      23,     3,   128,    61,    59,    45,    45,    45,    45,    45,
      29,   131,    46,    45,   189,    46,   180,    46,    60,    96,
      34,   130,   135,    35,    36,    37,    38,    46,    46,    46,
      46,    46,   172,   132,    14,    46,   128,   128,    31,   201,
     115,   131,    14,    14,    15,   131,   131,    48,    81,    82,
      83,   130,    32,    22,    27,   130,   130,    87,   163,    59,
      54,   147,   133,   132,    14,   139,   140,   132,   132,    81,
      82,    83,    68,    60,    19,    34,   128,    14,   101,   128,
      37,    38,   104,   105,   134,   131,    69,    22,   131,   113,
     114,    78,   133,   118,   119,   130,   133,   133,   130,    93,
      16,    70,    77,    20,   128,    24,    79,   132,    94,    24,
     132,    97,    24,   131,   134,    95,   136,    99,   134,   134,
      98,   102,   106,   130,   182,   103,   183,    32,   184,   107,
     185,   113,   186,   161,    59,   132,   133,   108,   110,   133,
     162,   164,   166,   168,   170,    32,   111,   109,    60,   112,
      34,   120,    33,    32,   121,    37,    38,   150,   134,   126,
      33,   134,    22,   137,   133,    81,    82,    83,    34,   138,
      22,    35,    36,    37,    38,    50,    34,   141,   142,    35,
      36,    37,    38,   143,    32,   122,   134,   144,   145,   146,
     153,    59,   160,    81,    82,    83,    84,    85,    86,   174,
     192,   193,   194,   195,   196,   127,   177,    34,   178,   113,
      35,    36,    37,    38,    32,   118,    80,   114,   118,   187,
     165,    59,   119,    32,    81,    82,    83,    84,    85,    86,
      59,   188,    32,    87,   191,    60,   190,    34,   167,    59,
     198,    32,    37,    38,   171,   197,    34,   169,    59,    35,
      36,    37,    38,    60,   199,    34,    32,   154,   200,   202,
      37,    38,    60,    59,    34,    81,    82,    83,    47,    37,
      38,   116,   157,     0,    49,     0,    51,    60,     0,    34,
      81,    82,    83,     0,    37,    38,    71,    72,    73,    74,
      75,   179,     0,     0,    76,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
      25,    95,    20,    28,     6,    30,    15,    97,     4,    25,
      20,    36,    28,    87,    30,    40,    41,    42,    43,    44,
      95,    95,     6,    48,    40,    41,    42,    43,    44,    25,
      36,    25,    48,    26,    28,     6,    30,     6,   113,   113,
     114,   131,   132,   118,   118,   119,    40,    41,    42,    43,
      44,    20,    23,    27,    48,    27,    25,   114,     0,    13,
      25,    22,   119,    28,    27,    30,   160,     6,    35,    23,
      24,    13,    97,    98,    13,    40,    41,    42,    43,    44,
       6,    97,    25,    48,   174,    28,   160,    30,    27,    56,
      29,    97,    98,    32,    33,    34,    35,    40,    41,    42,
      43,    44,   127,    97,    13,    48,   131,   132,    24,   199,
       6,   127,    13,    13,    23,   131,   132,    27,    14,    15,
      16,   127,     6,    23,    24,   131,   132,    23,    12,    13,
      20,     6,    97,   127,    13,   102,   103,   131,   132,    14,
      15,    16,    23,    27,    23,    29,   171,    13,    60,   174,
      34,    35,    64,    65,    97,   171,    23,    23,   174,    10,
      11,     6,   127,    10,    11,   171,   131,   132,   174,    15,
      10,    36,    36,    13,   199,    15,    36,   171,     6,    19,
     174,    30,    22,   199,   127,     9,    98,    20,   131,   132,
      33,    32,    19,   199,   161,    32,   163,     6,   165,    19,
     167,    10,   169,    12,    13,   199,   171,     6,     6,   174,
     122,   123,   124,   125,   126,     6,    28,    36,    27,     6,
      29,    26,    13,     6,    21,    34,    35,     6,   171,    24,
      13,   174,    23,     6,   199,    14,    15,    16,    29,    28,
      23,    32,    33,    34,    35,    36,    29,    24,    22,    32,
      33,    34,    35,    28,     6,     6,   199,     6,    28,    28,
      24,    13,     4,    14,    15,    16,    17,    18,    19,    31,
     182,   183,   184,   185,   186,    27,     6,    29,    28,    10,
      32,    33,    34,    35,     6,    10,     6,    11,    10,    28,
      12,    13,    11,     6,    14,    15,    16,    17,    18,    19,
      13,    28,     6,    23,    25,    27,    24,    29,    12,    13,
      15,     6,    34,    35,    27,    31,    29,    12,    13,    32,
      33,    34,    35,    27,    27,    29,     6,     6,    26,    28,
      34,    35,    27,    13,    29,    14,    15,    16,    26,    34,
      35,    87,     6,    -1,    28,    -1,    30,    27,    -1,    29,
      14,    15,    16,    -1,    34,    35,    40,    41,    42,    43,
      44,     6,    -1,    -1,    48,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,     0,    13,    39,    40,     6,    20,    25,    41,
      20,     6,    15,     6,    13,    23,    49,    53,    26,    23,
      49,    20,    23,    24,    49,    27,    22,    24,    27,     6,
      27,    24,     6,    13,    29,    32,    33,    34,    35,    42,
      43,    45,    48,    49,    54,    57,    58,    53,    27,    42,
      36,    42,     4,    25,    20,     6,    23,    46,    46,    13,
      27,    43,    45,    47,    48,    54,    57,    58,    23,    23,
      36,    42,    42,    42,    42,    42,    42,    36,     6,    36,
       6,    14,    15,    16,    17,    18,    19,    23,    50,    51,
      52,    55,    56,    15,     6,     9,    46,    30,    33,    20,
      43,    47,    32,    32,    47,    47,    19,    19,     6,    36,
       6,    28,     6,    10,    11,     6,    50,    55,    10,    11,
      26,    21,     6,    51,    55,    56,    24,    27,    43,    44,
      45,    48,    54,    57,    58,    45,    47,     6,    28,    46,
      46,    24,    22,    28,     6,    28,    28,     6,    51,    55,
       6,    52,    55,    24,     6,    51,    55,     6,    52,    55,
       4,    12,    47,    12,    47,    12,    47,    12,    47,    12,
      47,    27,    43,    44,    31,    44,    44,     6,    28,     6,
      55,    56,    46,    46,    46,    46,    46,    28,    28,    44,
      24,    25,    47,    47,    47,    47,    47,    31,    15,    27,
      26,    44,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    38,    39,    40,    40,    40,    40,
      40,    41,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    43,    43,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    49,    49,    50,
      50,    50,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    53,    53,    54,    55,    55,    55,    56,    56,
      56,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     9,    10,     9,    10,
       9,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     6,     6,    10,     3,
       1,     1,     2,     2,     1,     1,     1,     4,     4,     4,
       4,     1,     3,     3,     3,     3,     3,     5,     5,     5,
       5,     5,     4,     4,     4,     4,     4,     6,     6,     6,
       6,     6,     3,     1,     1,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     6,     6,     9,     3,     1,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     1,     1,     1,     1,     1,
       1,     4,     6
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
        case 5:
#line 64 "AnalizadorS.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s,%s,Asignacion Global,\n",(yyvsp[0].identificador),(yyvsp[-2].tipo));}
#line 1427 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 68 "AnalizadorS.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s,%s,Funcion,\n",(yyvsp[-8].identificador),(yyvsp[-9].tipo));}
#line 1433 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "AnalizadorS.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s,%s,Funcion,\n",(yyvsp[-7].identificador),(yyvsp[-8].tipo));}
#line 1439 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra, *palabra2;
								palabra = (yyvsp[-2].identificador);
								palabra = (yyvsp[0].identificador);
								buscar(palabra);
								buscar(palabra2);}
#line 1449 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 127 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1457 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 130 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1465 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1473 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 137 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra, *palabra2;
											palabra = (yyvsp[-4].identificador);
											palabra = (yyvsp[-2].identificador);
											buscar(palabra);
											buscar(palabra2);}
#line 1483 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 142 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1491 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 145 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1499 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1507 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 152 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra, *palabra2;
											palabra = (yyvsp[-3].identificador);
											palabra = (yyvsp[-1].identificador);
											buscar(palabra);
											buscar(palabra2);}
#line 1517 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 157 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1525 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1533 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1541 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 167 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra, *palabra2;
														palabra = (yyvsp[-5].identificador);
														palabra = (yyvsp[-3].identificador);
														buscar(palabra);
														buscar(palabra2);}
#line 1551 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 172 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1559 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 175 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1567 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 178 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1575 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 194 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1583 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 197 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1591 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 200 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1599 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 203 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra,*palabra2;
								palabra = (yyvsp[-2].identificador);
								palabra2 = (yyvsp[0].identificador);
								buscar(palabra);
								buscar(palabra2);}
#line 1609 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 208 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-5].identificador);
											buscar(palabra);}
#line 1617 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 211 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-5].identificador);
											buscar(palabra);}
#line 1625 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 214 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
											palabra = (yyvsp[-8].identificador);
											buscar(palabra);}
#line 1633 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 250 "AnalizadorS.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s,%s,Asignacion Local,\n",(yyvsp[-1].identificador),(yyvsp[-3].tipo));}
#line 1639 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;


#line 1643 "AnalizadorS.tab.c" /* yacc.c:1646  */
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
#line 272 "AnalizadorS.y" /* yacc.c:1906  */

void buscar(char *palabra)
{
FILE *archivo;
 	 int  encontrado = 0;
    	 char cadena[256], nombre[25];
    	 char *a,*buscar;
	archivo = fopen("output.csv","r");
	 if (archivo != NULL)
    	{ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (!feof(archivo))
		{
        		contador++;
        		fgets(cadena,256,archivo);
                	a = strtok(cadena,",.- ");
                	while (a != NULL)
                	{
				if (!strcmp(buscar, a))
				{
					encontrado++;
					if (encontrado == 1)
					{
					 
					break;
					}
				}
				a = strtok (NULL, " ");
			}
		}   
            	if (encontrado <= 0){
			printf("\nLa variable %s no fue declarada\n",palabra);
			printf("\n Linea en que se encontro: %d\n", contador);
				}
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(archivo);
	}
   
}

void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w");
        yyparse();
      	fclose(yyout);
}