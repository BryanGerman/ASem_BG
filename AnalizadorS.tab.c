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
char* buscarTipo(char *);
char* buscar(char *,FILE*);
char* buscarVariable(char *,FILE*,char*);
char *buscarInduccion(int);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern FILE* yyout2;
extern FILE* yyout3;
extern char* yycopy;
extern int contador;
char *palabra,*palabra2;

#line 86 "AnalizadorS.tab.c" /* yacc.c:339  */

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
    ASIGNACION = 268,
    Lit_float = 269,
    ENTERO = 270,
    ENTERO_NEG = 271,
    Lit_bool = 272,
    Lit_char = 273,
    Lit_String = 274,
    TipoDato = 275,
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
#line 62 "AnalizadorS.y" /* yacc.c:355  */

int entero;
char* string;
int enteroNeg;
float flotante;

#line 170 "AnalizadorS.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADORS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "AnalizadorS.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

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
       2,     2,    38,    37,     2,     2,     2,    39,     2,     2,
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
       0,    73,    73,    74,    75,    76,    77,    81,    91,   100,
     110,   120,   129,   140,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   157,   158,   163,   164,
     165,   166,   170,   171,   172,   173,   174,   175,   176,   177,
     181,   182,   183,   184,   185,   189,   190,   213,   234,   255,
     256,   279,   301,   325,   326,   327,   328,   329,   330,   331,
     332,   336,   340,   362,   385,   405,   424,   451,   463,   464,
     465,   469,   488,   509,   530,   551,   573,   593,   617,   618,
     619,   620,   621,   625,   626,   629,   636,   641,   644
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Lit_int", "IGUAL", "Palabra_reservada",
  "Identificador", "Operador", "Opcompuesto", "OpControl", "OP", "OPLog",
  "OpLogControl", "ASIGNACION", "Lit_float", "ENTERO", "ENTERO_NEG",
  "Lit_bool", "Lit_char", "Lit_String", "TipoDato", "PUNTOCOM",
  "SEPARADOR", "AGRPAR_AB", "AGRPAR_CE", "AGRCOR_AB", "AGRCOR_CE",
  "AGRLLAV_AB", "AGRLLAV_CE", "IF", "THEN", "ELSE", "WHILE", "DO", "INPUT",
  "OUTPUT", "RETURN", "'+'", "'*'", "'/'", "$accept", "prog",
  "asignacionglobal", "funcion", "tamVector", "bloqueComandosFunciones",
  "stackAsig", "if", "bloqueComandosIF", "while", "stackOpLogControl",
  "bloqueComandosWhile", "atribucion", "asignacionLocal", "stackOp",
  "OperacionArit", "OperacionLog", "lista", "num_entero", "valorNumerico",
  "input", "output", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    43,    42,    47
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,    66,    69,   -91,   -91,    -6,    12,     5,    57,   -91,
     -91,   -91,   106,   -91,   -91,    54,   144,    80,   122,    79,
     117,   -91,   142,   125,   157,   149,   147,   104,   148,   165,
     159,   148,   -91,    41,   -91,    11,   174,    -2,    -2,   164,
     166,   167,   152,   148,   148,   148,   148,   148,   -91,   -91,
     117,   148,   173,   189,   175,   108,     5,   194,   192,    -2,
     172,   177,   205,   229,   -91,   188,   190,   229,   229,   -91,
     -91,   202,   204,   219,   -91,   -91,   -91,   -91,   -91,   191,
     222,   206,   230,   137,   -91,   121,   -91,   -91,   -91,    14,
     226,   212,   218,    56,   217,   197,   164,   237,   -91,   216,
      -2,    -2,   -91,   -91,   227,   228,   224,   247,   232,   -91,
     234,     8,     0,   137,   233,   -91,    14,    95,     5,     5,
       5,    72,   250,   -91,   163,   254,     7,   255,   213,   -91,
     238,   -91,   213,   213,   -91,   -91,   -91,   -91,   218,   -91,
     -91,   -91,   -91,   264,   -91,   244,   -91,   -91,   -91,   -91,
     -91,   260,   -91,   226,   -91,   263,   -91,   -91,   -91,   -91,
     260,   -91,   226,   101,    -2,    -2,    -2,    -2,   213,   246,
     248,   213,   -91,   -91,   251,   -91,   252,   -91,   -91,   -91,
     -91,   -91,   249,   -91,   -91,   -91,     5,   256,   253,   213,
     -91,   257,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     4,     5,     0,     0,     0,     0,     1,
       2,     3,     0,     7,    85,     0,     0,     0,     0,     0,
      27,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    22,    23,    20,    21,    24,    25,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    54,    55,    59,
      60,     0,     0,     0,    14,    17,    18,    15,    16,     0,
       0,     0,     0,    63,    86,     0,    61,    66,    70,    62,
       0,     0,    83,     0,     0,     0,     0,     0,    58,     0,
       0,     0,    56,    57,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,    67,    46,    48,    47,    45,     0,    44,
      28,    37,    33,    34,    38,    39,    41,    40,     0,    53,
      43,    42,    87,     0,     8,     0,    12,     9,    76,    72,
      71,    80,    81,    78,    68,     0,    77,    73,    74,    75,
       0,    82,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,    11,     0,    64,    50,    52,
      51,    49,    30,    32,    29,    88,     0,     0,     0,     0,
      65,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   276,   279,   -91,   161,   243,   -38,   -90,   -11,
      49,   -55,   -36,   -30,   199,   -83,    -3,   258,    -7,    13,
     -28,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    42,    43,    44,   170,    45,
      60,    66,    46,    47,    86,    87,    88,    20,   116,    90,
      48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    64,   115,    67,    58,   130,   151,    12,    99,    68,
     125,    69,   102,   103,   148,    55,    84,   117,    13,   166,
      14,    59,   149,   150,   117,    98,    70,    67,    65,    98,
      98,    67,    67,    68,   156,    69,    56,    68,    68,    69,
      69,   137,   172,   173,   118,   119,   120,    35,    89,    91,
      70,   118,   119,   120,    70,    70,     1,   129,    64,   132,
      67,    36,   124,    16,    25,   133,    68,   134,    69,     9,
      37,    14,     5,    38,    39,    40,    41,    53,   160,     6,
      21,   184,   135,    70,   131,   136,   126,    61,    84,     1,
     169,     7,   132,    24,   129,   129,   132,   132,   133,   191,
     134,   155,   133,   133,   134,   134,    28,   176,    94,   152,
      14,   157,   158,   159,    83,   135,    14,   131,   161,   135,
     135,   131,   131,    14,    84,   153,    17,   113,    34,    18,
     129,    85,   132,   129,   162,   132,    14,    84,   133,    29,
     134,   133,    17,   134,    85,    25,    26,   111,   112,   140,
     141,   129,    31,   132,    35,   135,   177,   131,   135,   133,
     131,   134,    17,    32,    17,    25,    30,    22,    36,    17,
      35,    25,    25,   111,    33,   164,   135,    37,   131,   188,
      38,    39,    40,    41,    62,    17,    51,    57,    73,    71,
      72,    63,    52,    37,    54,    81,    38,    39,    40,    41,
      92,    93,    95,    35,    74,    75,    76,    77,    78,    80,
      96,    82,    79,   178,   179,   180,   181,    62,    97,    35,
     100,   104,   101,   105,   128,   106,    37,   107,   108,    38,
      39,    40,    41,    62,   109,    35,   110,   121,   122,   123,
     168,   127,    37,   138,   139,    38,    39,    40,    41,    62,
     143,   142,   144,   145,   163,    19,    63,   154,    37,    23,
     146,    27,   147,    40,    41,    27,   165,   167,    27,   171,
     174,   112,   175,   111,   182,   185,   183,   186,    10,   190,
     187,    11,     0,   189,   114,   192,     0,    50
};

static const yytype_int16 yycheck[] =
{
       7,    39,    85,    39,     6,    95,     6,    13,    63,    39,
      93,    39,    67,    68,     6,     4,    16,    10,     6,    12,
      15,    23,    14,    15,    10,    63,    39,    63,    39,    67,
      68,    67,    68,    63,   117,    63,    25,    67,    68,    67,
      68,    96,   132,   133,    37,    38,    39,     6,    55,    56,
      63,    37,    38,    39,    67,    68,    20,    95,    96,    95,
      96,    20,     6,     6,    23,    95,    96,    95,    96,     0,
      29,    15,     6,    32,    33,    34,    35,    36,     6,    13,
      26,   171,    95,    96,    95,    96,    93,    38,    16,    20,
     128,    25,   128,    13,   132,   133,   132,   133,   128,   189,
     128,     6,   132,   133,   132,   133,    27,     6,    59,   112,
      15,   118,   119,   120,     6,   128,    15,   128,   121,   132,
     133,   132,   133,    15,    16,   112,    20,     6,    24,    23,
     168,    23,   168,   171,   121,   171,    15,    16,   168,    22,
     168,   171,    20,   171,    23,    23,    24,    10,    11,   100,
     101,   189,    27,   189,     6,   168,   163,   168,   171,   189,
     171,   189,    20,     6,    20,    23,    24,    23,    20,    20,
       6,    23,    23,    10,    27,    12,   189,    29,   189,   186,
      32,    33,    34,    35,    20,    20,    27,    13,    36,    23,
      23,    27,    31,    29,    33,     6,    32,    33,    34,    35,
       6,     9,    30,     6,    43,    44,    45,    46,    47,    36,
      33,    36,    51,   164,   165,   166,   167,    20,    13,     6,
      32,    19,    32,    19,    27,     6,    29,    36,     6,    32,
      33,    34,    35,    20,    28,     6,     6,    11,    26,    21,
      27,    24,    29,     6,    28,    32,    33,    34,    35,    20,
      22,    24,    28,     6,     4,    12,    27,    24,    29,    16,
      28,    18,    28,    34,    35,    22,    12,    12,    25,    31,
       6,    11,    28,    10,    28,    24,    28,    25,     2,    26,
      31,     2,    -1,    27,    85,    28,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    41,    42,    43,     6,    13,    25,    44,     0,
      42,    43,    13,     6,    15,    58,     6,    20,    23,    46,
      57,    26,    23,    46,    13,    23,    24,    46,    27,    22,
      24,    27,     6,    27,    24,     6,    20,    29,    32,    33,
      34,    35,    45,    46,    47,    49,    52,    53,    60,    61,
      57,    27,    45,    36,    45,     4,    25,    13,     6,    23,
      50,    50,    20,    27,    47,    49,    51,    52,    53,    60,
      61,    23,    23,    36,    45,    45,    45,    45,    45,    45,
      36,     6,    36,     6,    16,    23,    54,    55,    56,    58,
      59,    58,     6,     9,    50,    30,    33,    13,    47,    51,
      32,    32,    51,    51,    19,    19,     6,    36,     6,    28,
       6,    10,    11,     6,    54,    55,    58,    10,    37,    38,
      39,    11,    26,    21,     6,    55,    58,    24,    27,    47,
      48,    49,    52,    53,    60,    61,    49,    51,     6,    28,
      50,    50,    24,    22,    28,     6,    28,    28,     6,    14,
      15,     6,    56,    59,    24,     6,    55,    58,    58,    58,
       6,    56,    59,     4,    12,    12,    12,    12,    27,    47,
      48,    31,    48,    48,     6,    28,     6,    58,    50,    50,
      50,    50,    28,    28,    48,    24,    25,    31,    58,    27,
      26,    48,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    41,    41,    41,    42,    43,    43,
      43,    43,    43,    44,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    47,    47,
      47,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    52,    53,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    57,    57,    58,    59,    60,    61
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     0,     3,     9,    10,
       9,    10,     9,     3,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     4,     6,
       6,    10,     3,     1,     1,     2,     2,     1,     1,     1,
       4,     4,     4,     4,     1,     3,     3,     3,     3,     5,
       5,     5,     5,     3,     1,     1,     2,     2,     1,     1,
       1,     3,     3,     3,     6,     9,     3,     4,     3,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     6
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
        case 7:
#line 81 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char *alcance;
							palabra = (yyvsp[0].string);
							if(buscarVariable(palabra,yyout,"AG")==NULL){	
									fprintf(yyout,"%s %s AG, \n",(yyvsp[0].string),(yyvsp[-2].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1415 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char* alcance;
							palabra = (yyvsp[-7].string);
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",(yyvsp[-7].string),(yyvsp[-8].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1429 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char* alcance;
							palabra = (yyvsp[-8].string);
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",(yyvsp[-8].string),(yyvsp[-9].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1443 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char* alcance;
							palabra = (yyvsp[-7].string);
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU, \n",(yyvsp[-7].string),(yyvsp[-8].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1457 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char* alcance;
							palabra = (yyvsp[-7].string);
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU[], \n",(yyvsp[-7].string),(yyvsp[-9].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1471 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char* alcance;
							palabra = (yyvsp[-6].string);
							alcance = "FU";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s FU[], \n",(yyvsp[-6].string),(yyvsp[-8].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1485 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "AnalizadorS.y" /* yacc.c:1646  */
    { 	palabra = (yyvsp[-2].string);
														palabra2 = (yyvsp[0].string);
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1512 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 213 "AnalizadorS.y" /* yacc.c:1646  */
    { 			palabra = (yyvsp[-2].string);
														int numero;
														numero = (yyvsp[0].entero);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1538 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 234 "AnalizadorS.y" /* yacc.c:1646  */
    {		palabra = (yyvsp[-2].string);
														int numero;
														numero = (yyvsp[0].entero);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1564 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 256 "AnalizadorS.y" /* yacc.c:1646  */
    { 	
														palabra = (yyvsp[-4].string);
														palabra2 = (yyvsp[-2].string);
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1592 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 279 "AnalizadorS.y" /* yacc.c:1646  */
    {		
														palabra = (yyvsp[-4].string);
														int numero;
														numero = (yyvsp[-2].entero);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1619 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 301 "AnalizadorS.y" /* yacc.c:1646  */
    {		
														palabra = (yyvsp[-4].string);
														int numero;
														numero = (yyvsp[-2].entero);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscarInduccion(numero);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1646 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 336 "AnalizadorS.y" /* yacc.c:1646  */
    { 
							palabra = (yyvsp[-2].string);
							buscar(palabra,yyout);
							}
#line 1655 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 340 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											palabra = (yyvsp[-2].string);
											fprintf(yyout3,"%s, %d,",(yyvsp[-2].string),(yyvsp[0].entero));
											char *busca1;
											char *busca2;
											busca1 = buscar(palabra,yyout);
											busca2 = buscar(palabra2,yyout);
											if(busca1!=NULL){ 
												if(busca2!=NULL){
													if(strcmp(busca1,busca2)==0){
														fprintf(stderr,"\nLas variables son compatibles\n");
														 fprintf(yyout3,"%s %d,\n",(yyvsp[-2].string), (yyvsp[0].entero));
													}
													else{
														fprintf(stderr,"Las variables no son compatibles");
													}
												}	
											}						
											else {
												fprintf(stderr,"variable %s no declarada",palabra);
											}
										}
#line 1682 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 362 "AnalizadorS.y" /* yacc.c:1646  */
    { 	
														palabra = (yyvsp[-2].string);
														palabra2 = (yyvsp[0].string);
														buscar(palabra,yyout);
														buscar(palabra2,yyout);
														char *busca1;
														char *busca2;
														busca1 = buscar(palabra,yyout);
														busca2 = buscar(palabra2,yyout);
														if(busca1!=NULL){ 
															if(busca2!=NULL){
																if(strcmp(busca1,busca2)==0){
																		fprintf(stderr,"\nLas variables son compatibles\n");
																}
															else{
																		fprintf(stderr,"Las variables no son compatibles");
																} 
															} 
														}
														else {
															fprintf(stderr,"variable %s no declarada",palabra);
														}
													}
#line 1710 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 385 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											
								palabra = (yyvsp[-5].string);
								int numero;
								numero = (yyvsp[0].entero);
								buscar(palabra,yyout);
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscarInduccion(numero);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");
									 fprintf(yyout3,"%s %d,\n",(yyvsp[-5].string), (yyvsp[0].entero));				}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}
#line 1735 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 405 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											
								palabra = (yyvsp[-8].string);
								palabra2 = (yyvsp[-3].string);
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscar(palabra2,yyout);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");
									 fprintf(yyout3,"%s %d,\n",(yyvsp[-8].string), (yyvsp[-1].entero));}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}
#line 1758 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 424 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											palabra = (yyvsp[-2].string);
											fprintf(yyout3,"%s, %d,",(yyvsp[-2].string),(yyvsp[0].entero));
											char *busca1;
											char *busca2;
											busca1 = buscar(palabra,yyout);
											busca2 = buscar(palabra2,yyout);
											if(busca1!=NULL){ 
												if(busca2!=NULL){
													if(strcmp(busca1,busca2)==0){
														fprintf(stderr,"\nLas variables son compatibles\n");
														 fprintf(yyout3,"%s %d,\n",(yyvsp[-2].string), (yyvsp[0].entero));
													}
													else{
														fprintf(stderr,"Las variables no son compatibles");
													}
												}	
											}						
											else {
												fprintf(stderr,"variable %s no declarada",palabra);
											}
										}
#line 1785 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 451 "AnalizadorS.y" /* yacc.c:1646  */
    {
							char *alcance;
							palabra = (yyvsp[-1].string);
							alcance = "AL";
							if(buscarVariable(palabra,yyout,alcance)==NULL){	
									fprintf(yyout,"%s %s AL, \n",(yyvsp[-1].string),(yyvsp[-3].string));
							} 
							else {fprintf(stderr,"La variable ya fue declarada");}
							}
#line 1799 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 469 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							palabra = (yyvsp[-2].string);
							int numero = (yyvsp[0].entero);
							fprintf(yyout2,"%d int,",numero);
							char *busca1;
							char *busca2;
							busca1 = buscar(palabra,yyout);
							busca2 = buscarInduccion(numero);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
								
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"Las variables son compatibles");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1823 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 488 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							palabra = (yyvsp[-2].string);
							float numero = (yyvsp[0].flotante);
							fprintf(yyout2,"%f float",(yyvsp[0].flotante));
							char *busca1;
							char *busca2;
							busca1 = buscar(palabra,yyout);
							busca2 = buscarInduccion(numero);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"Las variables son compatibles");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} 
								}
								
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1848 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 509 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							
							int numero = (yyvsp[-2].entero);
							int numero2 = (yyvsp[0].entero);
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									(yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1874 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 530 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							
							int numero = (yyvsp[-2].entero);
							int numero2 = (yyvsp[0].entero);
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									(yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1900 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 551 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							
							int numero = (yyvsp[-2].entero);
							int numero2 = (yyvsp[0].entero);
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									(yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1926 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 573 "AnalizadorS.y" /* yacc.c:1646  */
    {	palabra = (yyvsp[-2].string);
								palabra2 = (yyvsp[0].string);
								buscar(palabra,yyout);
								buscar(palabra2,yyout);
								palabra = (yyvsp[-2].string);
								char *busca1;
								char *busca2;
								busca1 = buscar(palabra,yyout);
								busca2 = buscar(palabra2,yyout);
								if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{fprintf(stderr,"\nLas variables son compatibles\n");}
									else
									{fprintf(stderr,"Las variables no son compatibles");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}}
#line 1949 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 594 "AnalizadorS.y" /* yacc.c:1646  */
    {	
							
							int numero = (yyvsp[-2].entero);
							int numero2 = (yyvsp[0].entero);
							char *busca1;
							char *busca2;	
							fprintf(yyout2,"%d int,",numero);
							busca1 = buscarInduccion(numero);
							fprintf(yyout2,"%d int,",numero2);
							busca2 = buscarInduccion(numero2);
							if(busca1!=NULL){ 
								if(busca2!=NULL)
								{
									if(strcmp(busca1,busca2)==0)
									{
									(yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);}
									else
									{fprintf(stderr,"\nLas variables no son compatibles\n");} } 
							}
							else {fprintf(stderr,"variable %s no declarada",palabra);}
								}
#line 1975 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 629 "AnalizadorS.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 1981 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;


#line 1985 "AnalizadorS.tab.c" /* yacc.c:1646  */
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
#line 649 "AnalizadorS.y" /* yacc.c:1906  */


char* buscarVariable(char *palabra,FILE* archivo,char* alcance){
 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (archivo != NULL){ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (feof(archivo)==0){
        		fgets(cadena,256,archivo);
			char *token = strtok(cadena,",");
			while (token){
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			a=0;
			while(a<3){
				j=0;
				char *token2 = strtok(nombre[a]," ");
				while (token2){
					nombre2[a][j] = token2;
			
						
					if (strcmp(buscar, nombre2[0][j])==0 && strcmp(alcance, nombre2[a][j])==0){
						encontrado++;
						if(encontrado ==1){
							b =a;
							c = j;
							tipo ="Encontrada";		
							}
					
					}
					token2 = strtok (NULL, " ");
					tipo = nombre2[b][1];
						
					j++;
					
					
				}
				a++;
			}
		}
		if (encontrado <= 0){
			tipo = NULL;
		}   
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}

char* buscar(char *palabra,FILE* archivo){
 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (archivo != NULL){ 
		buscar = palabra;
            	rewind(archivo);
 	      	encontrado = 0;
 		while (feof(archivo)==0){
        		fgets(cadena,256,archivo);
			char *token = strtok(cadena,",");
			while (token){
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			a=0;
			while(a<=3){
				j=0;
				char *token2 = strtok(nombre[a]," ");
				while (token2){
					nombre2[a][j] = token2;
					if (strcmp(buscar, nombre2[a][j])==0){
						encontrado++;
						if(encontrado ==1){
							b =a;
							c = j;
							tipo ="Encontrada";		
							}
					}
					token2 = strtok (NULL, " ");
					tipo = nombre2[b][1];
					j++;
				}
				a++;
			}
		}
		if (encontrado <= 0){
			tipo = NULL;
		}   
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}

char* buscarInduccion(int numero)
{

 	 	int  encontrado = 0;
   		char cadena[300],cadena2[300];
    	char *nombre3[50],*nombre4[3][50],*tipo=NULL;
		int buscar;
		buscar = numero;
		int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 	if (yyout2 != NULL){ 
			rewind(yyout2);
 	      	encontrado = 0;
 				while (feof(yyout2)==0){
	        		fgets(cadena,256,yyout2);
					char *token = strtok(cadena,",");
					while (token){
						nombre3[i] = token;
						token = strtok (NULL, ",");
						i++;
					}
					a=0;
					while(a<1)	{
						j=0;
						char *token2 = strtok(nombre3[a]," ");
						while (token2){				
							nombre4[a][j] = token2;
							int convertir = atoi(nombre4[a][0]);
							if (buscar == convertir){						
								encontrado++;
								if(encontrado ==1){
									b =a;
									c = j;
									tipo ="Encontrada";
								}
							}
							token2 = strtok (NULL, " ");
							tipo = nombre4[b][1];
							j++;
						}
						a++;
					}	
				}	
		}
  	  	else{
			printf("\nHubo un error en la apertura del archivo\n");
			fclose(yyout2);
		}
			return tipo;
   
}

void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w+");
	yyout2 = fopen("tablaSimbolos.txt","w+");
	yyout3= fopen("tablaSimbolos.csv","w+");
 yyparse();
   return 0;
	fclose(yyin);
      	fclose(yyout);
	fclose(yyout2);
	fclose(yyout3);  
}
