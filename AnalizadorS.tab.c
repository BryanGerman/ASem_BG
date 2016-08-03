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
char* buscarPrueba(char *);
int buscar(char *);
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern char* yycopy;
extern int contador;
char *palabra,*palabra2;

#line 83 "AnalizadorS.tab.c" /* yacc.c:339  */

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
#line 58 "AnalizadorS.y" /* yacc.c:355  */

int entero;
char* tipo;
char* identificador;
int enteroNeg;
float flotante;

#line 168 "AnalizadorS.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADORS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 183 "AnalizadorS.tab.c" /* yacc.c:358  */

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
#define YYLAST   384

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
       0,    70,    70,    71,    72,    76,    83,    88,    94,   101,
     106,   113,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   130,   131,   136,   137,   138,   139,
     140,   144,   145,   146,   147,   148,   149,   150,   151,   155,
     156,   157,   158,   159,   163,   164,   170,   173,   176,   179,
     180,   185,   188,   191,   194,   195,   200,   203,   206,   209,
     210,   215,   218,   221,   226,   227,   228,   229,   230,   231,
     232,   233,   237,   240,   243,   246,   251,   254,   257,   262,
     270,   271,   272,   276,   283,   284,   285,   286,   289,   290,
     291,   292,   293,   297,   298,   303,   304,   305,   308,   309,
     310,   314,   317
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
  "OUTPUT", "RETURN", "$accept", "prog", "asignacionglobal", "funcion",
  "tamaVector", "bloqueComandosFunciones", "stackAsig", "if",
  "bloqueComandosIF", "while", "stackOpLogControl", "bloqueComandosWhile",
  "atribucion", "asignacionLocal", "stackOp", "OperacionArit",
  "OperacionLog", "lista", "valorNumerico", "valorCaracter", "input",
  "output", YY_NULLPTR
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
     -95,     2,   -95,    45,   -95,   -95,    -9,     0,    -5,    27,
      39,   -95,    11,    44,    40,    70,    28,    47,   -95,   152,
      30,    74,    51,    61,    80,   217,    97,    81,   217,   -95,
     209,   -95,     4,   115,    29,    29,   233,   107,   111,   109,
     217,   217,   217,   217,   217,   -95,   -95,    47,   217,   121,
     138,   127,   202,   154,   164,   172,    29,   155,   149,   174,
     329,   -95,   158,   159,   329,   329,   -95,   -95,   180,   184,
     201,   -95,   -95,   -95,   -95,   -95,   186,   218,   198,   221,
      85,   -95,   -95,   -95,   -95,   -95,   -95,   108,   -95,   -95,
     -95,   102,   -95,   204,   212,   351,   211,   249,   233,   230,
     -95,   219,    29,    29,   -95,   -95,   224,   232,   229,   252,
     231,   -95,   235,   104,   145,    85,   237,   102,   281,   325,
     260,   -95,   279,   144,   282,   316,   326,   292,   -95,   244,
     -95,   292,   292,   -95,   -95,   -95,   -95,   212,   -95,   -95,
     -95,   -95,   271,   -95,   251,   -95,   -95,   270,   -95,   276,
     289,   -95,   290,   -95,   270,   -95,   276,   289,   -95,   290,
     365,    29,   -95,    29,   -95,    29,   -95,    29,   -95,    29,
     -95,   292,   262,   265,   292,   -95,   -95,   280,   -95,   278,
     -95,   -95,   329,   329,   329,   329,   329,   274,   -95,   -95,
     -95,   295,   -95,   -95,   -95,   -95,   -95,   288,   294,   292,
     -95,   301,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,     0,     2,     3,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,    25,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    20,    21,    18,    19,    22,    23,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    43,     0,     0,    65,    66,    70,    71,     0,     0,
       0,    12,    15,    16,    13,    14,     0,     0,     0,     0,
      75,    97,    96,    95,    99,    98,   100,     0,    72,    81,
      82,    73,    74,     0,    93,     0,     0,     0,     0,     0,
      69,     0,     0,     0,    67,    68,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    45,    48,    46,    47,    44,     0,    43,    27,
      36,    32,    33,    37,    38,    40,    39,     0,    64,    42,
      41,   101,     0,     6,     0,    10,     7,    85,    86,    83,
      90,    91,    88,    80,     0,    87,    84,     0,    92,    89,
       0,     0,    55,     0,    58,     0,    56,     0,    57,     0,
      54,     0,     0,     0,     0,    34,    35,     0,     9,     0,
      76,    77,    50,    53,    51,    52,    49,    29,    31,    28,
     102,     0,    60,    63,    61,    62,    59,     0,     0,     0,
      78,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   -95,   -95,    99,   182,   -25,   -90,    -6,
      33,    88,   -16,     6,   220,   -75,   -58,   297,   -74,   -94,
      35,    57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,     5,     9,    39,    40,   100,   173,    42,
      57,    63,    64,    65,    88,    89,    90,    17,    91,    92,
      66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,   125,     2,    41,    10,    41,    11,   129,    52,    43,
      12,    61,    43,   117,    43,    41,    41,    41,    41,    41,
     123,   124,     3,    41,    43,    43,    43,    43,    43,    53,
      62,    44,    43,    13,    44,    55,    44,    18,   148,   149,
     152,   175,   176,   155,   156,   159,    44,    44,    44,    44,
      44,     6,    56,    21,    44,    25,   151,    28,     7,    14,
      45,   158,    15,    45,    14,    45,   181,    19,    58,    26,
       8,    14,   128,    61,    22,    45,    45,    45,    45,    45,
      29,   131,    46,    45,   189,    46,   180,    46,    30,    96,
      14,   130,   135,    22,    23,   113,   114,    46,    46,    46,
      46,    46,   172,   132,    31,    46,   128,   128,    48,   201,
     147,   131,   118,   119,   115,   131,   131,    14,    81,    82,
      83,   130,    81,    82,    83,   130,   130,    49,    54,    51,
      68,    87,   133,   132,    69,   139,   140,   132,   132,    71,
      72,    73,    74,    75,    78,    70,   128,    76,   101,   128,
      32,   150,   104,   105,   134,   131,   163,    77,   131,    81,
      82,    83,   133,    79,    59,   130,   133,   133,   130,    93,
      94,    60,    14,    34,   128,    22,    27,   132,    37,    38,
     132,    95,    98,   131,   134,    97,   136,    99,   134,   134,
     102,   103,    16,   130,   182,    20,   183,    24,   184,   106,
     185,    24,   186,   107,    24,   132,   133,   108,    80,   133,
     162,   164,   166,   168,   170,    32,    81,    82,    83,    84,
      85,    86,   109,    32,   110,    87,   111,   112,   134,    33,
     120,   134,    22,   121,   133,   126,   137,    33,    34,    32,
      22,    35,    36,    37,    38,    50,    34,   138,   141,    35,
      36,    37,    38,    59,   142,    32,   134,   143,   144,   145,
      60,   153,    34,   146,   160,    35,    36,    37,    38,    59,
     192,   193,   194,   195,   196,   174,   127,   177,    34,   178,
     113,    35,    36,    37,    38,    32,   118,   154,    32,   113,
     187,   161,   118,   188,   165,    81,    82,    83,    32,    59,
     114,   119,    59,   191,   190,   197,    60,   116,    34,    60,
     198,    34,    59,    37,    38,   199,    37,    38,     0,   171,
     200,    34,    32,    47,    35,    36,    37,    38,   167,   202,
       0,   157,    32,     0,     0,    32,    59,     0,   169,    81,
      82,    83,     0,    60,     0,    34,    59,     0,     0,    59,
      37,    38,     0,    60,     0,    34,    60,   122,    34,     0,
      37,    38,     0,    37,    38,    81,    82,    83,    84,    85,
      86,   179,     0,     0,     0,     0,     0,     0,     0,    81,
      82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
      25,    95,     0,    28,    13,    30,     6,    97,     4,    25,
      15,    36,    28,    87,    30,    40,    41,    42,    43,    44,
      95,    95,    20,    48,    40,    41,    42,    43,    44,    25,
      36,    25,    48,     6,    28,     6,    30,    26,   113,   113,
     114,   131,   132,   118,   118,   119,    40,    41,    42,    43,
      44,     6,    23,    13,    48,    27,   114,    27,    13,    20,
      25,   119,    23,    28,    20,    30,   160,    23,    35,    22,
      25,    20,    97,    98,    23,    40,    41,    42,    43,    44,
       6,    97,    25,    48,   174,    28,   160,    30,    27,    56,
      20,    97,    98,    23,    24,    10,    11,    40,    41,    42,
      43,    44,   127,    97,    24,    48,   131,   132,    27,   199,
       6,   127,    10,    11,     6,   131,   132,    20,    14,    15,
      16,   127,    14,    15,    16,   131,   132,    28,    13,    30,
      23,    23,    97,   127,    23,   102,   103,   131,   132,    40,
      41,    42,    43,    44,     6,    36,   171,    48,    60,   174,
       6,     6,    64,    65,    97,   171,    12,    36,   174,    14,
      15,    16,   127,    36,    20,   171,   131,   132,   174,    15,
       6,    27,    20,    29,   199,    23,    24,   171,    34,    35,
     174,     9,    33,   199,   127,    30,    98,    13,   131,   132,
      32,    32,    10,   199,   161,    13,   163,    15,   165,    19,
     167,    19,   169,    19,    22,   199,   171,     6,     6,   174,
     122,   123,   124,   125,   126,     6,    14,    15,    16,    17,
      18,    19,    36,     6,     6,    23,    28,     6,   171,    20,
      26,   174,    23,    21,   199,    24,     6,    20,    29,     6,
      23,    32,    33,    34,    35,    36,    29,    28,    24,    32,
      33,    34,    35,    20,    22,     6,   199,    28,     6,    28,
      27,    24,    29,    28,     4,    32,    33,    34,    35,    20,
     182,   183,   184,   185,   186,    31,    27,     6,    29,    28,
      10,    32,    33,    34,    35,     6,    10,     6,     6,    10,
      28,    12,    10,    28,    12,    14,    15,    16,     6,    20,
      11,    11,    20,    25,    24,    31,    27,    87,    29,    27,
      15,    29,    20,    34,    35,    27,    34,    35,    -1,    27,
      26,    29,     6,    26,    32,    33,    34,    35,    12,    28,
      -1,     6,     6,    -1,    -1,     6,    20,    -1,    12,    14,
      15,    16,    -1,    27,    -1,    29,    20,    -1,    -1,    20,
      34,    35,    -1,    27,    -1,    29,    27,     6,    29,    -1,
      34,    35,    -1,    34,    35,    14,    15,    16,    17,    18,
      19,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,     0,    20,    39,    40,     6,    13,    25,    41,
      13,     6,    15,     6,    20,    23,    43,    54,    26,    23,
      43,    13,    23,    24,    43,    27,    22,    24,    27,     6,
      27,    24,     6,    20,    29,    32,    33,    34,    35,    42,
      43,    44,    46,    49,    50,    57,    58,    54,    27,    42,
      36,    42,     4,    25,    13,     6,    23,    47,    47,    20,
      27,    44,    46,    48,    49,    50,    57,    58,    23,    23,
      36,    42,    42,    42,    42,    42,    42,    36,     6,    36,
       6,    14,    15,    16,    17,    18,    19,    23,    51,    52,
      53,    55,    56,    15,     6,     9,    47,    30,    33,    13,
      44,    48,    32,    32,    48,    48,    19,    19,     6,    36,
       6,    28,     6,    10,    11,     6,    51,    55,    10,    11,
      26,    21,     6,    52,    55,    56,    24,    27,    44,    45,
      46,    49,    50,    57,    58,    46,    48,     6,    28,    47,
      47,    24,    22,    28,     6,    28,    28,     6,    52,    55,
       6,    53,    55,    24,     6,    52,    55,     6,    53,    55,
       4,    12,    48,    12,    48,    12,    48,    12,    48,    12,
      48,    27,    44,    45,    31,    45,    45,     6,    28,     6,
      55,    56,    47,    47,    47,    47,    47,    28,    28,    45,
      24,    25,    48,    48,    48,    48,    48,    31,    15,    27,
      26,    45,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    38,    38,    39,    40,    40,    40,    40,
      40,    41,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    44,    44,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    50,
      51,    51,    51,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    55,    56,    56,
      56,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     9,    10,     9,    10,
       9,     3,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     6,     6,
      10,     3,     1,     1,     2,     2,     1,     1,     1,     4,
       4,     4,     4,     1,     3,     3,     3,     3,     3,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     6,
       6,     6,     6,     6,     3,     1,     1,     2,     2,     1,
       1,     1,     3,     3,     3,     3,     6,     6,     9,     4,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
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
#line 76 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[0].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s AsignacionGlobal,",(yyvsp[0].identificador),(yyvsp[-2].tipo));} 
							}
#line 1439 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-7].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",(yyvsp[-7].identificador),(yyvsp[-8].tipo));} 
							}
#line 1449 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 88 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-8].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",(yyvsp[-8].identificador),(yyvsp[-9].tipo));} 
							}
#line 1459 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-7].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion,",(yyvsp[-7].identificador),(yyvsp[-8].tipo));} 
							}
#line 1469 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-7].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion[],",(yyvsp[-7].identificador),(yyvsp[-9].tipo));} 
							}
#line 1479 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 106 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-6].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s Funcion[],",(yyvsp[-6].identificador),(yyvsp[-8].tipo));} 
							}
#line 1489 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "AnalizadorS.y" /* yacc.c:1646  */
    { 	palabra = (yyvsp[-2].identificador);
								palabra = (yyvsp[0].identificador);
								buscar(palabra2);
								buscar(palabra);
								}
#line 1499 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "AnalizadorS.y" /* yacc.c:1646  */
    { 
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1507 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 173 "AnalizadorS.y" /* yacc.c:1646  */
    { 
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1515 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 176 "AnalizadorS.y" /* yacc.c:1646  */
    { 
								palabra = (yyvsp[-2].identificador);
								buscar(palabra);}
#line 1523 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "AnalizadorS.y" /* yacc.c:1646  */
    {
											palabra = (yyvsp[-4].identificador);
											palabra = (yyvsp[-2].identificador);
											buscar(palabra);
											buscar(palabra2);}
#line 1533 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "AnalizadorS.y" /* yacc.c:1646  */
    {
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1541 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 188 "AnalizadorS.y" /* yacc.c:1646  */
    {
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1549 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 191 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											palabra = (yyvsp[-4].identificador);
											buscar(palabra);}
#line 1557 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 195 "AnalizadorS.y" /* yacc.c:1646  */
    {
											palabra = (yyvsp[-3].identificador);
											palabra = (yyvsp[-1].identificador);
											buscar(palabra);
											buscar(palabra2);}
#line 1567 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 200 "AnalizadorS.y" /* yacc.c:1646  */
    { 
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1575 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 203 "AnalizadorS.y" /* yacc.c:1646  */
    {
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1583 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 206 "AnalizadorS.y" /* yacc.c:1646  */
    { 
										palabra = (yyvsp[-3].identificador);
										buscar(palabra);}
#line 1591 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 210 "AnalizadorS.y" /* yacc.c:1646  */
    { 
														palabra = (yyvsp[-5].identificador);
														palabra = (yyvsp[-3].identificador);
														buscar(palabra);
														buscar(palabra2);}
#line 1601 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 215 "AnalizadorS.y" /* yacc.c:1646  */
    { 
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1609 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 218 "AnalizadorS.y" /* yacc.c:1646  */
    { 
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1617 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 221 "AnalizadorS.y" /* yacc.c:1646  */
    { char *palabra;
														palabra = (yyvsp[-5].identificador);
														buscar(palabra);}
#line 1625 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 237 "AnalizadorS.y" /* yacc.c:1646  */
    { 
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1633 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 240 "AnalizadorS.y" /* yacc.c:1646  */
    { 
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1641 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 243 "AnalizadorS.y" /* yacc.c:1646  */
    { 
							palabra = (yyvsp[-2].identificador);
							buscar(palabra);}
#line 1649 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 246 "AnalizadorS.y" /* yacc.c:1646  */
    { 
								palabra = (yyvsp[-2].identificador);
								palabra2 = (yyvsp[0].identificador);
								buscar(palabra);
								buscar(palabra2);}
#line 1659 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 251 "AnalizadorS.y" /* yacc.c:1646  */
    {
											palabra = (yyvsp[-5].identificador);
											buscar(palabra);}
#line 1667 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 254 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											palabra = (yyvsp[-5].identificador);
											buscar(palabra);}
#line 1675 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 257 "AnalizadorS.y" /* yacc.c:1646  */
    { 
											palabra = (yyvsp[-8].identificador);
											buscar(palabra);}
#line 1683 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 262 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-1].identificador);
							if(buscar(palabra)==-1)
								{fprintf(yyout,"%s %s AsignacionLocal,",(yyvsp[-1].identificador),(yyvsp[-3].tipo));} 
							}
#line 1693 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 276 "AnalizadorS.y" /* yacc.c:1646  */
    {
							palabra = (yyvsp[-2].identificador);
							if(buscarPrueba(palabra)==NULL)
								{fprintf(stderr,"variable %s no declaradaaaaaaaaaaaa",palabra);} 
				else {fprintf(stderr,"\n\nEncontre la variable %s y es de tipo %s \n\n",palabra,buscarPrueba(palabra));}
								}
#line 1704 "AnalizadorS.tab.c" /* yacc.c:1646  */
    break;


#line 1708 "AnalizadorS.tab.c" /* yacc.c:1646  */
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
#line 322 "AnalizadorS.y" /* yacc.c:1906  */

int buscar(char *palabra)
{

 	 int  encontrado = 0;
    	 char cadena[300], nombre[50];
    	 char *a,*buscar;
	 int chek = -1;
	 if (yyout != NULL)
    	{ 
		buscar = palabra;
            	rewind(yyout);
 	      	encontrado = 0;
 		while (!feof(yyout))
		{
        		contador++;
        		fgets(cadena,256,yyout);
                	a = strtok(cadena,",");
			
                	while (a != NULL)
                	{
				if (!strcmp(buscar, a))
				{
					encontrado++;
					if (encontrado == 1)
					{
					chek = 0;
					 return chek;
					break;
					}
				}
				a = strtok (NULL, " ");
			}
		}   
            	if (encontrado <= 0){
			return chek;
				}
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
   
}
char* buscarPrueba(char *palabra)
{

 	 int  encontrado = 0;
    	 char cadena[300],cadena2[300];
    	 char *buscar,*nombre[50],*nombre2[3][50],*tipo=NULL;
	 int chek = -1,i=0,j=0,k,a=0,b=0,c=0;
	 if (yyout != NULL)
    	{ 
		buscar = palabra;
            	rewind(yyout);
 	      	encontrado = 0;
 		while (feof(yyout)==0)
		{
        		fgets(cadena,256,yyout);
			char *token = strtok(cadena,",");
			while (token)
                	{
				nombre[i] = token;
				token = strtok (NULL, ",");
				i++;
			}
			
			a=0;
			while(a<=3)
			{
				j=0;
				fprintf(stderr,"\nANTESnombre2: %s %d %d",nombre[a],a,j);
				char *token2 = strtok(nombre[a]," ");
				while (token2)
                		{
					
					nombre2[a][j] = token2;
					fprintf(stderr,"\nDESPUESnombre2: %s a= %d j= %d\n",nombre2[a][j],a,j);
					if (strcmp(buscar, nombre2[a][j])==0)
					{
						fprintf(stderr,"\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO %d \n",a);
						b =a;
						c = j+1;
						tipo ="Encontrada";


					}
					token2 = strtok (NULL, " ");
					
					fprintf(stderr,"\n------------------\n");
					fprintf(stderr,"\nlllllllllllllllllllllllllllllllllllllllllll %d  %d\n",b,c);
					tipo = nombre[b][1];
					j++;
					
					
						
							//tipo = nombre2[2][j];
				}
				a++;
			}
		
						
			
		}   
            	
	}
  	  else
   	 {
		printf("\nHubo un error en la apertura del archivo\n");
		fclose(yyout);
	}
	return tipo;
   
}
char* buscarTipo(char *palabra)
{

 	char s[256];
strcpy(s, "arreglo,int,VariableLocal");
char* token = strtok(s, ",");
char *arreglo[3];
int i=0,j;
while (token) {
   
	arreglo[i] = token;
	printf("arreglo: %s\n", arreglo[i]);
	token = strtok(NULL, ",");
	i++;
}
for(j=0;j<3;j++)
{
fprintf(stderr,"EL: %s\n",arreglo[j]);
}
return NULL;
   
}


void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s);}


int main () {
        yyin = fopen ("Codigo.txt", "r");
        yyout = fopen ("output2.csv","w+");
 yyparse();
	       
	fclose(yyin);
      	fclose(yyout);
}
