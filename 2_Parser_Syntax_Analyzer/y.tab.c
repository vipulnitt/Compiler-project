/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 93 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    RETURN = 264,                  /* RETURN  */
    MAIN = 265,                    /* MAIN  */
    FOR = 266,                     /* FOR  */
    BREAK = 267,                   /* BREAK  */
    ENDIF = 268,                   /* ENDIF  */
    identifier = 269,              /* identifier  */
    integer_constant = 270,        /* integer_constant  */
    string_constant = 271,         /* string_constant  */
    float_constant = 272,          /* float_constant  */
    character_constant = 273,      /* character_constant  */
    ELSE = 274,                    /* ELSE  */
    leftshift_assignment_operator = 275, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 276, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 277, /* XOR_assignment_operator  */
    OR_assignment_operator = 278,  /* OR_assignment_operator  */
    AND_assignment_operator = 279, /* AND_assignment_operator  */
    modulo_assignment_operator = 280, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 281, /* multiplication_assignment_operator  */
    division_assignment_operator = 282, /* division_assignment_operator  */
    addition_assignment_operator = 283, /* addition_assignment_operator  */
    subtraction_assignment_operator = 284, /* subtraction_assignment_operator  */
    assignment_operator = 285,     /* assignment_operator  */
    OR_operator = 286,             /* OR_operator  */
    AND_operator = 287,            /* AND_operator  */
    pipe_operator = 288,           /* pipe_operator  */
    caret_operator = 289,          /* caret_operator  */
    amp_operator = 290,            /* amp_operator  */
    equality_operator = 291,       /* equality_operator  */
    inequality_operator = 292,     /* inequality_operator  */
    lessthan_assignment_operator = 293, /* lessthan_assignment_operator  */
    lessthan_operator = 294,       /* lessthan_operator  */
    greaterthan_assignment_operator = 295, /* greaterthan_assignment_operator  */
    greaterthan_operator = 296,    /* greaterthan_operator  */
    leftshift_operator = 297,      /* leftshift_operator  */
    rightshift_operator = 298,     /* rightshift_operator  */
    add_operator = 299,            /* add_operator  */
    subtract_operator = 300,       /* subtract_operator  */
    multiplication_operator = 301, /* multiplication_operator  */
    division_operator = 302,       /* division_operator  */
    modulo_operator = 303,         /* modulo_operator  */
    SIZEOF = 304,                  /* SIZEOF  */
    tilde_operator = 305,          /* tilde_operator  */
    exclamation_operator = 306,    /* exclamation_operator  */
    increment_operator = 307,      /* increment_operator  */
    decrement_operator = 308       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define RETURN 264
#define MAIN 265
#define FOR 266
#define BREAK 267
#define ENDIF 268
#define identifier 269
#define integer_constant 270
#define string_constant 271
#define float_constant 272
#define character_constant 273
#define ELSE 274
#define leftshift_assignment_operator 275
#define rightshift_assignment_operator 276
#define XOR_assignment_operator 277
#define OR_assignment_operator 278
#define AND_assignment_operator 279
#define modulo_assignment_operator 280
#define multiplication_assignment_operator 281
#define division_assignment_operator 282
#define addition_assignment_operator 283
#define subtraction_assignment_operator 284
#define assignment_operator 285
#define OR_operator 286
#define AND_operator 287
#define pipe_operator 288
#define caret_operator 289
#define amp_operator 290
#define equality_operator 291
#define inequality_operator 292
#define lessthan_assignment_operator 293
#define lessthan_operator 294
#define greaterthan_assignment_operator 295
#define greaterthan_operator 296
#define leftshift_operator 297
#define rightshift_operator 298
#define add_operator 299
#define subtract_operator 300
#define multiplication_operator 301
#define division_operator 302
#define modulo_operator 303
#define SIZEOF 304
#define tilde_operator 305
#define exclamation_operator 306
#define increment_operator 307
#define decrement_operator 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_MAIN = 10,                      /* MAIN  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_ENDIF = 13,                     /* ENDIF  */
  YYSYMBOL_identifier = 14,                /* identifier  */
  YYSYMBOL_integer_constant = 15,          /* integer_constant  */
  YYSYMBOL_string_constant = 16,           /* string_constant  */
  YYSYMBOL_float_constant = 17,            /* float_constant  */
  YYSYMBOL_character_constant = 18,        /* character_constant  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 20, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 21, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 22,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 23,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 24,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 25, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 26, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 27, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 28, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 29, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 30,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 31,               /* OR_operator  */
  YYSYMBOL_AND_operator = 32,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 33,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 34,            /* caret_operator  */
  YYSYMBOL_amp_operator = 35,              /* amp_operator  */
  YYSYMBOL_equality_operator = 36,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 37,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 38, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 39,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 40, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 41,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 42,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 43,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 44,              /* add_operator  */
  YYSYMBOL_subtract_operator = 45,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 46,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 47,         /* division_operator  */
  YYSYMBOL_modulo_operator = 48,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 49,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 50,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 51,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 52,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 53,        /* decrement_operator  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_59_ = 59,                       /* ')'  */
  YYSYMBOL_60_ = 60,                       /* '{'  */
  YYSYMBOL_61_ = 61,                       /* '}'  */
  YYSYMBOL_62_ = 62,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_declaration_list = 65,          /* declaration_list  */
  YYSYMBOL_D = 66,                         /* D  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_variable_declaration = 68,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 69, /* variable_declaration_list  */
  YYSYMBOL_V = 70,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 71, /* variable_declaration_identifier  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_vdi = 73,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 74,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 75,      /* initilization_params  */
  YYSYMBOL_initilization = 76,             /* initilization  */
  YYSYMBOL_type_specifier = 77,            /* type_specifier  */
  YYSYMBOL_function_declaration = 78,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 79, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 80, /* function_declaration_param_statement  */
  YYSYMBOL_params = 81,                    /* params  */
  YYSYMBOL_parameters_list = 82,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 83, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 84, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 85,          /* param_identifier  */
  YYSYMBOL_86_2 = 86,                      /* $@2  */
  YYSYMBOL_param_identifier_breakup = 87,  /* param_identifier_breakup  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_compound_statement = 89,        /* compound_statement  */
  YYSYMBOL_statment_list = 90,             /* statment_list  */
  YYSYMBOL_expression_statment = 91,       /* expression_statment  */
  YYSYMBOL_conditional_statements = 92,    /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 93, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 94,      /* iterative_statements  */
  YYSYMBOL_return_statement = 95,          /* return_statement  */
  YYSYMBOL_return_statement_breakup = 96,  /* return_statement_breakup  */
  YYSYMBOL_break_statement = 97,           /* break_statement  */
  YYSYMBOL_string_initilization = 98,      /* string_initilization  */
  YYSYMBOL_expression = 99,                /* expression  */
  YYSYMBOL_expression_breakup = 100,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 101,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 102, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 103,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 104,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 105, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 106,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 107, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 108,     /* relational_operators  */
  YYSYMBOL_sum_expression = 109,           /* sum_expression  */
  YYSYMBOL_sum_operators = 110,            /* sum_operators  */
  YYSYMBOL_term = 111,                     /* term  */
  YYSYMBOL_MULOP = 112,                    /* MULOP  */
  YYSYMBOL_factor = 113,                   /* factor  */
  YYSYMBOL_mutable = 114,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 115,          /* mutable_breakup  */
  YYSYMBOL_immutable = 116,                /* immutable  */
  YYSYMBOL_call = 117,                     /* call  */
  YYSYMBOL_arguments = 118,                /* arguments  */
  YYSYMBOL_arguments_list = 119,           /* arguments_list  */
  YYSYMBOL_A = 120,                        /* A  */
  YYSYMBOL_constant = 121                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    59,     2,     2,    55,     2,    62,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    65,    68,    69,    72,    73,    76,    79,
      82,    83,    86,    86,    88,    88,    91,    92,    95,    96,
      99,   100,   103,   103,   103,   103,   111,   114,   117,   120,
     120,   123,   126,   129,   130,   133,   133,   136,   137,   140,
     140,   141,   141,   142,   142,   143,   146,   149,   150,   153,
     154,   157,   160,   161,   164,   167,   170,   171,   174,   177,
     181,   182,   185,   186,   187,   188,   189,   190,   191,   192,
     195,   198,   198,   201,   204,   205,   208,   209,   212,   215,
     216,   219,   219,   219,   220,   220,   220,   223,   224,   227,
     228,   231,   232,   235,   235,   235,   238,   238,   241,   242,
     245,   246,   249,   250,   250,   253,   256,   256,   259,   262,
     263,   266,   267,   268,   269
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "RETURN", "MAIN", "FOR", "BREAK", "ENDIF",
  "identifier", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "'.'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "variable_declaration_list", "V", "variable_declaration_identifier",
  "$@1", "vdi", "identifier_array_type", "initilization_params",
  "initilization", "type_specifier", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@2",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "string_initilization", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      69,   -79,   -79,   -79,   -79,    14,   -79,    69,   -79,    -2,
     -79,    69,   -79,   -79,   -79,   -36,   -23,    -3,    26,   -79,
       3,   -79,   -79,   -17,   -79,    41,   -79,   -79,   -79,    10,
      12,    20,    -4,   -79,   -79,   -79,   -79,     2,    69,   -79,
      22,    -9,    23,    35,    44,   -79,   -79,   -79,   -79,    20,
     -79,    20,    12,   -79,    41,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,    49,   -79,    48,    73,   -79,    72,    21,   -79,
      71,   -79,   -79,   -79,   -79,    47,    76,   -79,    57,   -79,
     -79,    20,   -79,   -79,    61,    20,   -79,    20,   -79,   -15,
      59,    12,    58,   -79,    20,   -79,    20,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,    77,    77,   -79,
     -79,   -79,    77,    20,    20,    20,    20,    20,    20,   -79,
     -79,    20,   106,   -79,   -79,    76,   105,   -79,   -79,    63,
     -79,    74,    75,    70,   -79,   -79,   -79,   -79,    48,    73,
      -1,    21,   -79,   -79,   -79,   -79,   -79,   -79,   -79,    81,
     -79,   -79,   -79,   -79,    12,    20,    20,   -79,   -79,   -79,
     -79,   -79,   112,    78,    75,    12,   -79,    20,   -79,   -79,
      80,   -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    22,    23,    24,    25,     0,     2,     5,     6,     0,
       7,    30,     1,     4,     3,    12,     0,    11,     0,    26,
       0,    29,    27,    17,     8,     0,     9,    35,    31,    34,
       0,     0,     0,    13,    14,    12,    10,    38,     0,    32,
       0,     0,     0,     0,    98,   111,   112,   113,   114,     0,
      50,     0,    48,    45,     0,    28,    40,    39,    41,    42,
      43,    44,     0,    61,    72,    75,    77,    80,    88,    92,
      97,    96,   103,   104,    15,     0,     0,    16,     0,    36,
      33,     0,    56,    55,     0,     0,    58,   107,    76,    97,
       0,    48,     0,    49,     0,    70,     0,    73,    85,    86,
      82,    84,    81,    83,    89,    90,    78,     0,     0,    93,
      94,    95,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,     0,    60,    99,    21,     0,    19,    37,     0,
      57,     0,   110,     0,   106,   102,    47,    46,    72,    75,
      79,    87,    91,    67,    65,    66,    63,    64,    62,     0,
     101,    18,    20,    59,     0,     0,     0,   108,   105,    71,
      74,   100,    53,     0,   110,     0,    51,     0,   109,    52,
       0,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,   127,   -79,   -79,    25,   115,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,    50,   -79,   -79,   -79,   -79,   103,
     -79,   -79,   -79,   -79,   -79,   -28,   -79,    51,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,    18,   -31,   -79,   -78,     6,
      52,     8,   -45,   -79,   -79,   -79,    38,   -79,    40,   -79,
      37,   -48,   -79,   -79,   -79,   -79,   -79,   -14,   -79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    14,     7,    53,    16,    26,    17,    23,
      33,    34,    77,   151,    54,    10,    11,    19,    20,    21,
      28,    39,    29,    37,    79,    91,    56,    92,    57,    58,
     166,    59,    60,    83,    61,   127,    62,   123,    63,    95,
      64,    97,    65,    66,   106,   107,    67,   108,    68,   112,
      69,    70,   124,    71,    72,   133,   134,   157,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      74,    89,    55,   129,    88,    44,    45,    46,    47,    48,
      84,    75,    15,    31,    12,    40,     1,     2,     3,     4,
      90,    41,    22,    42,    43,     8,    44,    45,    46,    47,
      48,    24,     8,    89,    44,    45,    46,    47,    48,    32,
      27,   121,    49,   104,   105,    82,    89,   122,    89,    51,
       9,   139,    25,    76,   131,    35,   132,     9,    78,    89,
      89,    18,    30,    49,    89,    38,    50,   109,   110,   111,
      51,    49,    52,     1,     2,     3,     4,   163,    51,    94,
      81,    85,   143,   144,   145,   146,   147,   148,    18,    86,
     149,    44,    45,    46,    47,    48,   113,   114,   115,   116,
     117,   118,    87,    93,   125,    96,   126,    89,    98,    99,
     100,   101,   102,   103,   128,   130,   104,   105,   135,   137,
     150,   153,   154,   119,   120,   164,   162,   121,   155,   158,
     156,   165,   167,   122,    13,    51,   170,   169,   161,   171,
      36,    80,   136,   152,   159,   140,   138,   160,   141,   142,
     168
};

static const yytype_uint8 yycheck[] =
{
      31,    49,    30,    81,    49,    14,    15,    16,    17,    18,
      41,    15,    14,    30,     0,     3,     4,     5,     6,     7,
      51,     9,    58,    11,    12,     0,    14,    15,    16,    17,
      18,    54,     7,    81,    14,    15,    16,    17,    18,    56,
      14,    56,    51,    44,    45,    54,    94,    62,    96,    58,
       0,    96,    55,    57,    85,    14,    87,     7,    56,   107,
     108,    11,    59,    51,   112,    55,    54,    46,    47,    48,
      58,    51,    60,     4,     5,     6,     7,   155,    58,    31,
      58,    58,   113,   114,   115,   116,   117,   118,    38,    54,
     121,    14,    15,    16,    17,    18,    25,    26,    27,    28,
      29,    30,    58,    54,    57,    32,    30,   155,    36,    37,
      38,    39,    40,    41,    57,    54,    44,    45,    59,    61,
      14,    16,    59,    52,    53,   156,   154,    56,    54,    59,
      55,    19,    54,    62,     7,    58,   167,   165,    57,    59,
      25,    38,    91,   125,   138,   107,    94,   139,   108,   112,
     164
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,    64,    65,    67,    68,    77,
      78,    79,     0,    65,    66,    14,    69,    71,    77,    80,
      81,    82,    58,    72,    54,    55,    70,    14,    83,    85,
      59,    30,    56,    73,    74,    14,    69,    86,    55,    84,
       3,     9,    11,    12,    14,    15,    16,    17,    18,    51,
      54,    58,    60,    68,    77,    88,    89,    91,    92,    94,
      95,    97,    99,   101,   103,   105,   106,   109,   111,   113,
     114,   116,   117,   121,    99,    15,    57,    75,    56,    87,
      82,    58,    54,    96,    99,    58,    54,    58,   105,   114,
      99,    88,    90,    54,    31,   102,    32,   104,    36,    37,
      38,    39,    40,    41,    44,    45,   107,   108,   110,    46,
      47,    48,   112,    25,    26,    27,    28,    29,    30,    52,
      53,    56,    62,   100,   115,    57,    30,    98,    57,   101,
      54,    99,    99,   118,   119,    59,    90,    61,   103,   105,
     109,   111,   113,    99,    99,    99,    99,    99,    99,    99,
      14,    76,    98,    16,    59,    54,    55,   120,    59,   102,
     104,    57,    88,   101,    99,    19,    93,    54,   120,    88,
      99,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    67,    67,    68,    69,
      70,    70,    72,    71,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    78,    79,    80,    81,
      81,    82,    83,    84,    84,    86,    85,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    89,    90,    90,    91,
      91,    92,    93,    93,    94,    95,    96,    96,    97,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   102,   102,   103,   104,   104,   105,   105,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   117,   118,   118,   119,   120,
     120,   121,   121,   121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     2,
       2,     0,     0,     3,     1,     2,     2,     0,     3,     2,
       1,     0,     1,     1,     1,     1,     2,     3,     3,     1,
       0,     2,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     2,
       1,     6,     2,     0,     8,     2,     1,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     3,     0,     2,     3,     0,     2,     1,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     3,     1,     1,     4,     1,     0,     2,     3,
       0,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 12: /* $@1: %empty  */
#line 86 "parser.y"
                                     { ins(); }
#line 1496 "y.tab.c"
    break;

  case 27: /* function_declaration_type: type_specifier identifier '('  */
#line 114 "parser.y"
                                                         { ins();}
#line 1502 "y.tab.c"
    break;

  case 35: /* $@2: %empty  */
#line 133 "parser.y"
                                     { ins(); }
#line 1508 "y.tab.c"
    break;

  case 59: /* string_initilization: assignment_operator string_constant  */
#line 177 "parser.y"
                                                              { insV(); }
#line 1514 "y.tab.c"
    break;

  case 111: /* constant: integer_constant  */
#line 266 "parser.y"
                                                { insV(); }
#line 1520 "y.tab.c"
    break;

  case 112: /* constant: string_constant  */
#line 267 "parser.y"
                                                { insV(); }
#line 1526 "y.tab.c"
    break;

  case 113: /* constant: float_constant  */
#line 268 "parser.y"
                                                { insV(); }
#line 1532 "y.tab.c"
    break;

  case 114: /* constant: character_constant  */
#line 269 "parser.y"
                                            { insV(); }
#line 1538 "y.tab.c"
    break;


#line 1542 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 271 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
