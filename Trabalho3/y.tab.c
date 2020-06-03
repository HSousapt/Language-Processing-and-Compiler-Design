/* A Bison parser, made by GNU Bison 3.2.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ygram.y" /* yacc.c:338  */

    #include <stdio.h>
    #include <strings.h>
    #include "aux.h"
    int asprintf(char **strp,const char *fmt,...);
    void yyerror(char *s);
    int yylex();
    char erro[100];
    char aux[100];
    POS pos;
    char* type;
    int jmp=0;
    int test=0;
    FILE* file;

#line 85 "y.tab.c" /* yacc.c:338  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    START = 258,
    END = 259,
    READ = 260,
    WRITE = 261,
    IF = 262,
    THEN = 263,
    ELSE = 264,
    UNTIL = 265,
    DO = 266,
    RETURN = 267,
    VAR = 268,
    REAL = 269,
    BOOL = 270,
    STR = 271,
    INT = 272,
    STRING = 273,
    EQ = 274,
    LE = 275,
    GE = 276,
    LT = 277,
    GT = 278,
    NE = 279,
    nome = 280,
    sin = 281,
    cos = 282,
    INC = 283,
    DEC = 284,
    num = 285,
    rial = 286,
    booleans = 287
  };
#endif
/* Tokens.  */
#define START 258
#define END 259
#define READ 260
#define WRITE 261
#define IF 262
#define THEN 263
#define ELSE 264
#define UNTIL 265
#define DO 266
#define RETURN 267
#define VAR 268
#define REAL 269
#define BOOL 270
#define STR 271
#define INT 272
#define STRING 273
#define EQ 274
#define LE 275
#define GE 276
#define LT 277
#define GT 278
#define NE 279
#define nome 280
#define sin 281
#define cos 282
#define INC 283
#define DEC 284
#define num 285
#define rial 286
#define booleans 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "ygram.y" /* yacc.c:353  */

    int inteiro;
    float real;
    int boolconst;
    char* others;
    char* terms;
    char* increments;

#line 198 "y.tab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      34,    35,    41,    39,     2,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    46,    47,    52,    53,    58,    69,    80,
      94,    97,   100,   112,   125,   136,   145,   149,   158,   168,
     180,   188,   196,   197,   200,   201,   203,   213,   225,   226,
     227,   230,   231,   232,   239,   240,   242,   248,   251,   253,
     255,   264,   265,   269,   271,   276,   279,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   300,
     301,   302,   313,   314
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "READ", "WRITE", "IF",
  "THEN", "ELSE", "UNTIL", "DO", "RETURN", "VAR", "REAL", "BOOL", "STR",
  "INT", "STRING", "EQ", "LE", "GE", "LT", "GT", "NE", "nome", "sin",
  "cos", "INC", "DEC", "num", "rial", "booleans", "';'", "'('", "')'",
  "'{'", "'}'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "Program", "Tasks", "Task", "startVars", "Var", "Var2", "Inst", "ELSES",
  "STRINGS", "Atrib", "Calc", "Calc2", "Exp", "Exp2", "Fat", "Fat2",
  "Cond", "typeVar", "typeVar2", YY_NULLPTR
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
     285,   286,   287,    59,    40,    41,   123,   125,    61,    43,
      45,    42,    47,    37
};
# endif

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   140,    32,    19,    61,    21,    33,    69,    62,   -38,
      62,   -38,   127,    66,   -38,    -9,    73,   -38,   -38,   -38,
     -38,   -38,   122,   -38,   -38,   -38,   137,   137,   -38,   -38,
     -38,   -38,   115,   -38,   -38,   -38,    38,   147,   -38,   117,
     126,   -38,   -38,   -38,   137,   -38,   -38,     3,    82,    16,
     -37,   -38,   -38,   114,   -38,   -38,   131,   -38,    38,   -22,
     147,    68,   147,   147,    58,   144,    38,    38,    38,    38,
      38,    38,    38,    38,   147,   147,   147,   147,   147,   147,
     147,   147,    38,    38,    38,   147,   147,   153,   159,   150,
     152,   -38,   -38,   -22,   -22,   -22,   -22,   -22,   -22,    16,
      16,    68,    68,    68,    68,    68,    68,   -37,   -37,   -38,
     -38,   -38,   -38,   -38,   139,   141,   -38,   -38,   140,   140,
      46,    59,   167,   -38,   146,   -38,   140,    75,   -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    24,     0,     0,     0,     0,    10,
       0,    11,     0,     0,     5,     0,     0,     6,    21,     1,
      12,    13,    24,    14,    15,    16,     0,     0,     8,     9,
       7,     2,     0,     4,    17,    18,     0,     0,    25,     0,
       0,    59,    62,    60,     0,    61,    63,     0,     0,    28,
      31,    34,    38,     0,    42,    46,     0,     3,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    43,    47,    50,    49,    52,    51,    48,    29,
      30,    53,    56,    55,    58,    57,    54,    32,    33,    35,
      36,    37,    39,    40,     0,     0,    45,    44,     0,     0,
       0,     0,    22,    20,     0,    19,     0,     0,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -31,   -11,   -38,    -1,     9,   -38,   -38,   158,
     -38,   -30,   -29,    51,    78,    31,    53,   161,   -38,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    12,    13,    14,    45,    46,    17,   125,    25,
      18,    47,    48,    49,    50,    51,    52,    53,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    32,    20,    23,    85,    86,    59,    29,    61,    30,
      16,    15,    21,    24,    64,    65,    28,    72,    73,    34,
      35,    16,    66,    67,    68,    69,    70,    71,    64,    36,
       1,    65,    19,    89,    90,     9,    93,    94,    95,    96,
      97,    98,    72,    73,    11,   101,   102,   103,   104,   105,
     106,     3,     4,     5,     9,    26,     6,    82,    83,    84,
       7,     8,     9,    10,     3,     4,     5,    27,    41,     6,
      43,    11,    58,     7,     8,     9,    10,     9,     9,    22,
       3,     4,     5,   122,    11,     6,    11,   120,   121,     7,
       8,     9,    10,    91,    11,   127,   123,    72,    73,    33,
      11,    74,    75,    76,    77,    78,    79,    80,    81,    32,
      32,    37,   128,   109,   110,   111,    32,    15,    15,    15,
      15,    80,    81,    99,   100,    15,    15,    16,    16,    16,
      16,    31,     3,     4,     5,    16,    16,     6,   112,   113,
      22,     7,     8,     9,    10,     3,     4,     5,    57,    87,
       6,    62,    11,     9,     7,     8,     9,    10,   107,   108,
      63,   114,    11,    39,    40,    11,    88,    41,    42,    43,
     115,    44,    11,    39,    40,   118,   124,   119,    42,    92,
      38,    60,   126,    80,    81,   116,     0,   117,    56,    80,
      81,    80,    81
};

static const yytype_int8 yycheck[] =
{
       1,    12,     3,     4,    41,    42,    36,     8,    37,    10,
       1,    12,     3,     4,    44,    44,     7,    39,    40,    28,
      29,    12,    19,    20,    21,    22,    23,    24,    58,    38,
       3,    60,     0,    62,    63,    16,    66,    67,    68,    69,
      70,    71,    39,    40,    25,    74,    75,    76,    77,    78,
      79,     5,     6,     7,    16,    34,    10,    41,    42,    43,
      14,    15,    16,    17,     5,     6,     7,    34,    30,    10,
      32,    25,    34,    14,    15,    16,    17,    16,    16,    18,
       5,     6,     7,    37,    25,    10,    25,   118,   119,    14,
      15,    16,    17,    35,    25,   126,    37,    39,    40,    33,
      25,    19,    20,    21,    22,    23,    24,    39,    40,   120,
     121,    38,    37,    82,    83,    84,   127,   118,   119,   120,
     121,    39,    40,    72,    73,   126,   127,   118,   119,   120,
     121,     4,     5,     6,     7,   126,   127,    10,    85,    86,
      18,    14,    15,    16,    17,     5,     6,     7,    33,    35,
      10,    34,    25,    16,    14,    15,    16,    17,    80,    81,
      34,     8,    25,    26,    27,    25,    35,    30,    31,    32,
      11,    34,    25,    26,    27,    36,     9,    36,    31,    35,
      22,    34,    36,    39,    40,    35,    -1,    35,    27,    39,
      40,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,     5,     6,     7,    10,    14,    15,    16,
      17,    25,    46,    47,    48,    49,    50,    51,    54,     0,
      49,    50,    18,    49,    50,    53,    34,    34,    50,    49,
      49,     4,    47,    33,    28,    29,    38,    38,    53,    26,
      27,    30,    31,    32,    34,    49,    50,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    61,    33,    34,    55,
      34,    56,    34,    34,    55,    56,    19,    20,    21,    22,
      23,    24,    39,    40,    19,    20,    21,    22,    23,    24,
      39,    40,    41,    42,    43,    41,    42,    35,    35,    56,
      56,    35,    35,    55,    55,    55,    55,    55,    55,    57,
      57,    56,    56,    56,    56,    56,    56,    58,    58,    59,
      59,    59,    60,    60,     8,    11,    35,    35,    36,    36,
      46,    46,    37,    37,     9,    52,    36,    46,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    48,
      49,    50,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    55,
      55,    56,    56,    56,    57,    57,    57,    57,    58,    58,
      58,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     1,     1,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     9,
       8,     1,     0,     4,     0,     2,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     4,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    default: /* Avoid compiler warnings. */
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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
                  (unsigned long) yystacksize));

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
#line 41 "ygram.y" /* yacc.c:1645  */
    {fprintf(file,"start\n%s\nstop\n",(yyvsp[-1].others));}
#line 1376 "y.tab.c" /* yacc.c:1645  */
    break;

  case 3:
#line 46 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s",(yyvsp[-2].others),(yyvsp[-1].others));}
#line 1382 "y.tab.c" /* yacc.c:1645  */
    break;

  case 4:
#line 47 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[-1].others));}
#line 1388 "y.tab.c" /* yacc.c:1645  */
    break;

  case 5:
#line 52 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1394 "y.tab.c" /* yacc.c:1645  */
    break;

  case 6:
#line 53 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1400 "y.tab.c" /* yacc.c:1645  */
    break;

  case 7:
#line 58 "ygram.y" /* yacc.c:1645  */
    {
                                if(_isDeclared(pos,(yyvsp[0].others)))
                    {
                                strcat(erro,(yyvsp[0].others));
                    strcat(erro," -> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,(yyvsp[0].others),"INT");
                    asprintf(&(yyval.others),"\tpushi 0\n",(yyvsp[-1].terms));
                }
#line 1415 "y.tab.c" /* yacc.c:1645  */
    break;

  case 8:
#line 69 "ygram.y" /* yacc.c:1645  */
    {
                                        if(_isDeclared(pos,(yyvsp[0].others)))
                                {
                    strcat(erro,(yyvsp[0].others));
                    strcat(erro,"-> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,(yyvsp[0].others),"REAL");
                    asprintf(&(yyval.others),"\tpushi 0\n");
                }
#line 1430 "y.tab.c" /* yacc.c:1645  */
    break;

  case 9:
#line 80 "ygram.y" /* yacc.c:1645  */
    {

                    if(_isDeclared(pos,(yyvsp[0].others)))
                    {
                    strcat(erro,(yyvsp[0].others));
                    strcat(erro,"-> Esta variável já está declarada!");
                    yyerror(erro);
                    }
                    _addVar(pos,(yyvsp[0].others),"BOOL");
                    asprintf(&(yyval.others),"\tpushi 0\n");
                }
#line 1446 "y.tab.c" /* yacc.c:1645  */
    break;

  case 10:
#line 94 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].terms));}
#line 1452 "y.tab.c" /* yacc.c:1645  */
    break;

  case 11:
#line 97 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].terms));}
#line 1458 "y.tab.c" /* yacc.c:1645  */
    break;

  case 12:
#line 100 "ygram.y" /* yacc.c:1645  */
    {
                            if(!_isDeclared(pos,(yyvsp[0].others)))
                            {
                                strcat(erro,(yyvsp[0].others));
                                strcat(erro,"-> Esta variável não está declarada!");
                                yyerror(erro);
                            }


                                    asprintf(&(yyval.others),"\tread\n\tatoi\n\tstoreg %d\n",_getposi(pos,(yyvsp[0].others)));

                            }
#line 1475 "y.tab.c" /* yacc.c:1645  */
    break;

  case 13:
#line 112 "ygram.y" /* yacc.c:1645  */
    {
                            if(!_isDeclared(pos,(yyvsp[0].others)))
                            {
                                strcat(erro,(yyvsp[0].others));
                                strcat(erro,"-> Esta variável não está declarada!");
                                yyerror(erro);
                            }

                                asprintf(&(yyval.others),"\tread\n\tatof\n\tstoreg %d\n",_getposi(pos,(yyvsp[0].others)));
                            }
#line 1490 "y.tab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 125 "ygram.y" /* yacc.c:1645  */
    {
                            if(!strcmp(_getType(pos,(yyvsp[0].others)),"INT"))
                                asprintf(&(yyval.others),
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritei\n\tpushs %s\n\twrites\n",
                                _getposi(pos,(yyvsp[0].others)),"\"\\n\"");
                            if(!strcmp(_getType(pos,(yyvsp[0].others)),"BOOL"))
                                asprintf(&(yyval.others),
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritei\n\tpushs %s\n\twrites\n",
                                _getposi(pos,(yyvsp[0].others)),"\"\\n\"");

                        }
#line 1506 "y.tab.c" /* yacc.c:1645  */
    break;

  case 15:
#line 136 "ygram.y" /* yacc.c:1645  */
    {

                                asprintf(&(yyval.others),
                                "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\twritef\n\tpushs %s\n\twrites\n",
                                _getposi(pos,(yyvsp[0].others)),"\"\\n\"");

                        }
#line 1518 "y.tab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 145 "ygram.y" /* yacc.c:1645  */
    {
                            asprintf(&(yyval.others),"%s",(yyvsp[0].others));
                        }
#line 1526 "y.tab.c" /* yacc.c:1645  */
    break;

  case 17:
#line 149 "ygram.y" /* yacc.c:1645  */
    {
                        asprintf(&(yyval.others),
                        "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\tpushi 1\n\tadd\n\tstoreg %d",
                        _getposi(pos,(yyvsp[-1].others)),_getposi(pos,(yyvsp[-1].others)));



                }
#line 1539 "y.tab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 158 "ygram.y" /* yacc.c:1645  */
    {
                    asprintf(&(yyval.others),
                    "\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n\tpushi 1\n\tsub\n\tstoreg %d",
                    _getposi(pos,(yyvsp[-1].others)),_getposi(pos,(yyvsp[-1].others)));


               }
#line 1551 "y.tab.c" /* yacc.c:1645  */
    break;

  case 19:
#line 168 "ygram.y" /* yacc.c:1645  */
    {

                            asprintf(&(yyval.others),
                            "%s\tjz Aqui%d\n%s\njump Ali%d\nAqui%d\n:\n%s\nAli%d:"
                            ,(yyvsp[-6].others),jmp,(yyvsp[-2].others),jmp,jmp,(yyvsp[0].others),jmp);
                            jmp++;

                        }
#line 1564 "y.tab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 180 "ygram.y" /* yacc.c:1645  */
    {
                            asprintf(&(yyval.others),
                            "Ali%d:\n%s\tjz Aqui%d\n\tjump Fora%d\nAqui%d:\n%s\tjump Ali%d\nFora%d:",
                            jmp,(yyvsp[-5].others),jmp,jmp,jmp,(yyvsp[-1].others),jmp,jmp);
                            jmp++;
                        }
#line 1575 "y.tab.c" /* yacc.c:1645  */
    break;

  case 21:
#line 188 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1581 "y.tab.c" /* yacc.c:1645  */
    break;

  case 22:
#line 196 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"");}
#line 1587 "y.tab.c" /* yacc.c:1645  */
    break;

  case 23:
#line 197 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others), "%s",(yyvsp[-1].others));}
#line 1593 "y.tab.c" /* yacc.c:1645  */
    break;

  case 24:
#line 200 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"\n\tpushs %s\n\twrites","\"\\n\"");}
#line 1599 "y.tab.c" /* yacc.c:1645  */
    break;

  case 25:
#line 201 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"\n\tpushs %s\n\twrites%s",(yyvsp[-1].terms),(yyvsp[0].others));}
#line 1605 "y.tab.c" /* yacc.c:1645  */
    break;

  case 26:
#line 203 "ygram.y" /* yacc.c:1645  */
    {
                        if(!_isDeclared(pos,(yyvsp[-2].others)))
                    {
                    strcat(erro,(yyvsp[-2].others));
                    strcat(erro,"-> Esta variável não está declarada!");
                    yyerror(erro);
                    }
                    asprintf(&(yyval.others),"%s\tstoreg %d\n",(yyvsp[0].others),_getposi(pos,(yyvsp[-2].others)));
                }
#line 1619 "y.tab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 213 "ygram.y" /* yacc.c:1645  */
    {
                        if(!_isDeclared(pos,(yyvsp[-2].others)))
                    {
                    strcat(erro,(yyvsp[-2].others));
                    strcat(erro,"-> Esta variável não está declarada!");
                    yyerror(erro);
                    }
                    asprintf(&(yyval.others),"%s\tstoreg %d\n",(yyvsp[0].others),_getposi(pos,(yyvsp[-2].others)));
                }
#line 1633 "y.tab.c" /* yacc.c:1645  */
    break;

  case 28:
#line 225 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1639 "y.tab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 226 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tadd\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1645 "y.tab.c" /* yacc.c:1645  */
    break;

  case 30:
#line 227 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tsub\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1651 "y.tab.c" /* yacc.c:1645  */
    break;

  case 31:
#line 230 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1657 "y.tab.c" /* yacc.c:1645  */
    break;

  case 32:
#line 231 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfadd\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1663 "y.tab.c" /* yacc.c:1645  */
    break;

  case 33:
#line 232 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfsub\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1669 "y.tab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 239 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1675 "y.tab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 240 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tmul\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1681 "y.tab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 242 "ygram.y" /* yacc.c:1645  */
    {if (test>0) {
                                strcat(erro,"Impossível dividir por 0!");
                                yyerror(erro);

                                }
                                asprintf(&(yyval.others),"%s%s\tdiv\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1692 "y.tab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 248 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tmod\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1698 "y.tab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 251 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1704 "y.tab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 253 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfmul\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1710 "y.tab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 255 "ygram.y" /* yacc.c:1645  */
    {if (test>0) {
                                strcat(erro,"Impossível dividir por 0!");
                                yyerror(erro);

                                } asprintf(&(yyval.others),"%s%s\tdiv\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1720 "y.tab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 264 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[-1].others));}
#line 1726 "y.tab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 265 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1732 "y.tab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 269 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[-1].others));}
#line 1738 "y.tab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 271 "ygram.y" /* yacc.c:1645  */
    {
                                    asprintf(&(yyval.others),"%s\tfcos\n",(yyvsp[-1].others));

                        }
#line 1747 "y.tab.c" /* yacc.c:1645  */
    break;

  case 45:
#line 276 "ygram.y" /* yacc.c:1645  */
    {
                                    asprintf(&(yyval.others),"%s\tfsin\n",(yyvsp[-1].others)); }
#line 1754 "y.tab.c" /* yacc.c:1645  */
    break;

  case 46:
#line 279 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s",(yyvsp[0].others));}
#line 1760 "y.tab.c" /* yacc.c:1645  */
    break;

  case 47:
#line 285 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tequal\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1766 "y.tab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 286 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tsub\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1772 "y.tab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 287 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tsupeq\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1778 "y.tab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 288 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tinfeq\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1784 "y.tab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 289 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tsup\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1790 "y.tab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 290 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tinf\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1796 "y.tab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 291 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tequal\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1802 "y.tab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 292 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfsub\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1808 "y.tab.c" /* yacc.c:1645  */
    break;

  case 55:
#line 293 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfsupeq\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1814 "y.tab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 294 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfinfeq\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1820 "y.tab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 295 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfsup\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1826 "y.tab.c" /* yacc.c:1645  */
    break;

  case 58:
#line 296 "ygram.y" /* yacc.c:1645  */
    {asprintf(&(yyval.others),"%s%s\tfinf\n",(yyvsp[-2].others),(yyvsp[0].others));}
#line 1832 "y.tab.c" /* yacc.c:1645  */
    break;

  case 59:
#line 300 "ygram.y" /* yacc.c:1645  */
    { if ((yyvsp[0].inteiro)==0) test++; asprintf(&(yyval.others),"\tpushi %d\n", (yyvsp[0].inteiro));}
#line 1838 "y.tab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 301 "ygram.y" /* yacc.c:1645  */
    { if ((yyvsp[0].boolconst)==0) test++;asprintf(&(yyval.others),"\tpushi %d\n", (yyvsp[0].boolconst));}
#line 1844 "y.tab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 302 "ygram.y" /* yacc.c:1645  */
    {
                        if(!_isDeclared(pos,(yyvsp[0].others)))
                        {
                            strcat(erro,(yyvsp[0].others));
                            strcat(erro," -> Variável não declarada!");
                            yyerror(erro);
                        }
                        asprintf(&(yyval.others),"\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n",_getposi(pos,(yyvsp[0].others)));
                    }
#line 1858 "y.tab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 313 "ygram.y" /* yacc.c:1645  */
    { if ((yyvsp[0].real)==0.0) test++ ;asprintf(&(yyval.others),"\tpushf %f \n", (yyvsp[0].real));}
#line 1864 "y.tab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 314 "ygram.y" /* yacc.c:1645  */
    {
                        if(!_isDeclared(pos,(yyvsp[0].others)))
                        {
                            strcat(erro,(yyvsp[0].others));
                            strcat(erro," -> Variável não declarada!");
                            yyerror(erro);
                        }
                        asprintf(&(yyval.others),"\tpushgp\n\tpushi %d\n\tpadd\n\tload 0\n",_getposi(pos,(yyvsp[0].others)));
                    }
#line 1878 "y.tab.c" /* yacc.c:1645  */
    break;


#line 1882 "y.tab.c" /* yacc.c:1645  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
#line 326 "ygram.y" /* yacc.c:1903  */


#include "lex.yy.c"

void yyerror(char *s)
{
    printf("ERRO %s\n",s);
    exit(-1);
}

int main()
{
    file=fopen("cenas.vm","w+");
    _initVars(pos);
    yyparse();
    fclose(file);
    return 0;
}
