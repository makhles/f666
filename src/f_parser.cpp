// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.
// //                    "%code top" blocks.
#line 32 "bison/f_parser.y" // lalr1.cc:397

    #include <iostream>
    #include "f_scanner.hpp"
    #include "f_parser.hpp"
    #include "f_driver.hpp"
    #include "location.hh"
    #include "../include/Mapper.hpp"

    // This function is called only inside Bison, so we make it static to limit
    // symbol visibility for the linker to avoid potential linking conflicts.
    static Fortran::Parser::symbol_type yylex(Fortran::Scanner &scanner) {
        return scanner.getNextToken();
    }

#line 49 "src/f_parser.cpp" // lalr1.cc:397


// First part of user declarations.

#line 54 "src/f_parser.cpp" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "f_parser.hpp"

// User implementation prologue.

#line 68 "src/f_parser.cpp" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 8 "bison/f_parser.y" // lalr1.cc:479
namespace  Fortran  {
#line 154 "src/f_parser.cpp" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   Parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   Parser :: Parser  (Fortran::Scanner &scanner_yyarg, Fortran::Driver &driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

   Parser ::~ Parser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
   Parser ::by_state::by_state ()
    : state (empty_state)
  {}

  inline
   Parser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   Parser ::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
   Parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
   Parser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   Parser ::symbol_number_type
   Parser ::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
   Parser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   Parser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 44: // ExecutableProgram
      case 45: // Subprogram
      case 46: // MainProgram
      case 47: // Subroutine
      case 48: // Function
      case 49: // FunctionIdentifier
      case 50: // SubroutineIdentifier
      case 51: // ProgramIdentifier
      case 52: // Identifier
      case 54: // Argument
      case 56: // Parameter
      case 57: // Type
      case 58: // Body
      case 59: // SpecificationConstruct
      case 61: // Specification
      case 62: // DeclarationStatement
      case 64: // IdentifierDeclaration
      case 65: // ParameterStatement
      case 67: // AssignmentStatement
      case 68: // Expression
      case 69: // FunctionCall
      case 70: // Literal
      case 71: // ExecutableConstruct
      case 73: // Statement
      case 74: // IfStatement
      case 76: // ElseIfStatement
      case 79: // ReadStatement
      case 80: // PrintStatement
      case 82: // DoStatement
      case 83: // WhileStatement
      case 84: // CallStatement
        value.move< AST::node_ptr > (that.value);
        break;

      case 53: // ArgumentList
      case 55: // ParameterList
      case 60: // SpecificationList
      case 63: // IdentifierDeclarationList
      case 66: // AssignmentStatementList
      case 72: // ExecutableList
      case 75: // ElseIfStatementList
      case 77: // ElseStatement
      case 78: // StatementList
      case 81: // PrintList
        value.move< AST::node_ptrs > (that.value);
        break;

      case 39: // "BOOLEAN value"
        value.move< Fortran::boolean > (that.value);
        break;

      case 37: // "INTEGER value"
        value.move< Fortran::integer > (that.value);
        break;

      case 29: // "+"
      case 30: // "-"
      case 31: // "*"
      case 32: // "/"
        value.move< Fortran::op::arithmetic > (that.value);
        break;

      case 42: // "COMPARISON operator"
        value.move< Fortran::op::comp > (that.value);
        break;

      case 33: // "&&"
      case 34: // "||"
      case 35: // "!"
        value.move< Fortran::op::logic > (that.value);
        break;

      case 38: // "REAL value"
        value.move< Fortran::real > (that.value);
        break;

      case 40: // "STRING value"
      case 41: // "ID identifier"
        value.move< Fortran::string > (that.value);
        break;

      case 36: // "TYPE identifier"
        value.move< Fortran::type > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 44: // ExecutableProgram
      case 45: // Subprogram
      case 46: // MainProgram
      case 47: // Subroutine
      case 48: // Function
      case 49: // FunctionIdentifier
      case 50: // SubroutineIdentifier
      case 51: // ProgramIdentifier
      case 52: // Identifier
      case 54: // Argument
      case 56: // Parameter
      case 57: // Type
      case 58: // Body
      case 59: // SpecificationConstruct
      case 61: // Specification
      case 62: // DeclarationStatement
      case 64: // IdentifierDeclaration
      case 65: // ParameterStatement
      case 67: // AssignmentStatement
      case 68: // Expression
      case 69: // FunctionCall
      case 70: // Literal
      case 71: // ExecutableConstruct
      case 73: // Statement
      case 74: // IfStatement
      case 76: // ElseIfStatement
      case 79: // ReadStatement
      case 80: // PrintStatement
      case 82: // DoStatement
      case 83: // WhileStatement
      case 84: // CallStatement
        value.copy< AST::node_ptr > (that.value);
        break;

      case 53: // ArgumentList
      case 55: // ParameterList
      case 60: // SpecificationList
      case 63: // IdentifierDeclarationList
      case 66: // AssignmentStatementList
      case 72: // ExecutableList
      case 75: // ElseIfStatementList
      case 77: // ElseStatement
      case 78: // StatementList
      case 81: // PrintList
        value.copy< AST::node_ptrs > (that.value);
        break;

      case 39: // "BOOLEAN value"
        value.copy< Fortran::boolean > (that.value);
        break;

      case 37: // "INTEGER value"
        value.copy< Fortran::integer > (that.value);
        break;

      case 29: // "+"
      case 30: // "-"
      case 31: // "*"
      case 32: // "/"
        value.copy< Fortran::op::arithmetic > (that.value);
        break;

      case 42: // "COMPARISON operator"
        value.copy< Fortran::op::comp > (that.value);
        break;

      case 33: // "&&"
      case 34: // "||"
      case 35: // "!"
        value.copy< Fortran::op::logic > (that.value);
        break;

      case 38: // "REAL value"
        value.copy< Fortran::real > (that.value);
        break;

      case 40: // "STRING value"
      case 41: // "ID identifier"
        value.copy< Fortran::string > (that.value);
        break;

      case 36: // "TYPE identifier"
        value.copy< Fortran::type > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   Parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   Parser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   Parser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   Parser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   Parser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   Parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   Parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   Parser ::debug_level_type
   Parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   Parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  Parser ::state_type
   Parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   Parser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   Parser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   Parser ::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (scanner));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 44: // ExecutableProgram
      case 45: // Subprogram
      case 46: // MainProgram
      case 47: // Subroutine
      case 48: // Function
      case 49: // FunctionIdentifier
      case 50: // SubroutineIdentifier
      case 51: // ProgramIdentifier
      case 52: // Identifier
      case 54: // Argument
      case 56: // Parameter
      case 57: // Type
      case 58: // Body
      case 59: // SpecificationConstruct
      case 61: // Specification
      case 62: // DeclarationStatement
      case 64: // IdentifierDeclaration
      case 65: // ParameterStatement
      case 67: // AssignmentStatement
      case 68: // Expression
      case 69: // FunctionCall
      case 70: // Literal
      case 71: // ExecutableConstruct
      case 73: // Statement
      case 74: // IfStatement
      case 76: // ElseIfStatement
      case 79: // ReadStatement
      case 80: // PrintStatement
      case 82: // DoStatement
      case 83: // WhileStatement
      case 84: // CallStatement
        yylhs.value.build< AST::node_ptr > ();
        break;

      case 53: // ArgumentList
      case 55: // ParameterList
      case 60: // SpecificationList
      case 63: // IdentifierDeclarationList
      case 66: // AssignmentStatementList
      case 72: // ExecutableList
      case 75: // ElseIfStatementList
      case 77: // ElseStatement
      case 78: // StatementList
      case 81: // PrintList
        yylhs.value.build< AST::node_ptrs > ();
        break;

      case 39: // "BOOLEAN value"
        yylhs.value.build< Fortran::boolean > ();
        break;

      case 37: // "INTEGER value"
        yylhs.value.build< Fortran::integer > ();
        break;

      case 29: // "+"
      case 30: // "-"
      case 31: // "*"
      case 32: // "/"
        yylhs.value.build< Fortran::op::arithmetic > ();
        break;

      case 42: // "COMPARISON operator"
        yylhs.value.build< Fortran::op::comp > ();
        break;

      case 33: // "&&"
      case 34: // "||"
      case 35: // "!"
        yylhs.value.build< Fortran::op::logic > ();
        break;

      case 38: // "REAL value"
        yylhs.value.build< Fortran::real > ();
        break;

      case 40: // "STRING value"
      case 41: // "ID identifier"
        yylhs.value.build< Fortran::string > ();
        break;

      case 36: // "TYPE identifier"
        yylhs.value.build< Fortran::type > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 160 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[1].value.as< AST::node_ptr > ());
        yylhs.value.as< AST::node_ptr > ()->addChild(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 788 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 3:
#line 164 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createRoot();
        yylhs.value.as< AST::node_ptr > ()->addChild(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 797 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 4:
#line 170 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 805 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 5:
#line 173 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 813 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 6:
#line 176 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 821 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 7:
#line 181 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<MainProgram>(std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[2].value.as< AST::node_ptr > ()));
        Mapper::instance().reset();
    }
#line 830 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 8:
#line 185 "bison/f_parser.y" // lalr1.cc:859
    {
        yyerrok;
    }
#line 838 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 9:
#line 190 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Subroutine>(std::move(yystack_[6].value.as< AST::node_ptr > ()), std::move(yystack_[4].value.as< AST::node_ptrs > ()), std::move(yystack_[2].value.as< AST::node_ptr > ()));
        Mapper::instance().reset();
    }
#line 847 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 10:
#line 194 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Subroutine>(std::move(yystack_[5].value.as< AST::node_ptr > ()), node_ptrs{}, std::move(yystack_[2].value.as< AST::node_ptr > ()));
        Mapper::instance().reset();
    }
#line 856 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 11:
#line 198 "bison/f_parser.y" // lalr1.cc:859
    {
        yyerrok;
    }
#line 864 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 12:
#line 203 "bison/f_parser.y" // lalr1.cc:859
    {
        std::string error_msg = "";
        bool any_error = false;

        // Function id should be declared inside function body as a variable
        if (Mapper::instance().lookup_var(yystack_[6].value.as< AST::node_ptr > ()->id())) {
            Entry tmp = Mapper::instance().var_entry(yystack_[6].value.as< AST::node_ptr > ()->id());
            
            // Check function return type
            if (tmp.type() == yystack_[8].value.as< AST::node_ptr > ()->var_type()) {
                
                // Check arguments declarations
                std::string args = "";
                for (auto& arg : yystack_[4].value.as< AST::node_ptrs > ()) {
                    if (!Mapper::instance().lookup_var(arg->id())) {
                        args += arg->id() + ", ";
                        any_error = true;
                    }
                }
                if (any_error) {
                    error_msg += "argument ids [" + args + "] were not defined in function body";
                } else {
                    Entry entry(Fortran::symbol::type::FUNCTION, yystack_[8].value.as< AST::node_ptr > ()->var_type(), tmp.dimension(), yystack_[4].value.as< AST::node_ptrs > ());
                    bool inserted = Mapper::instance().insert_fun(yystack_[6].value.as< AST::node_ptr > ()->id(), entry);
                    if (inserted) {
                        yylhs.value.as< AST::node_ptr > () = driver.createNode<Function>(std::move(yystack_[8].value.as< AST::node_ptr > ()), std::move(yystack_[6].value.as< AST::node_ptr > ()), std::move(yystack_[4].value.as< AST::node_ptrs > ()), std::move(yystack_[2].value.as< AST::node_ptr > ()));
                    } else {
                        error_msg += "redefinition of function id '" + yystack_[6].value.as< AST::node_ptr > ()->id() + "'";
                        any_error = true;
                    }
                }
            } else {
                error_msg += "type mismatch between var id '" + yystack_[6].value.as< AST::node_ptr > ()->id() + "' and function return type.";
                any_error = true;
            }
        } else {
            error_msg += "function id '" + yystack_[6].value.as< AST::node_ptr > ()->id() + "' was not defined in function body.";
            any_error = true;
        }

        // Create fake node
        if(any_error) {
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error_msg);
            driver.semantic_error(error_msg);
        }
        Mapper::instance().reset();
    }
#line 916 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 13:
#line 250 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Function>(std::move(yystack_[7].value.as< AST::node_ptr > ()), std::move(yystack_[5].value.as< AST::node_ptr > ()), node_ptrs{}, std::move(yystack_[2].value.as< AST::node_ptr > ()));
        Mapper::instance().reset();
    }
#line 925 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 14:
#line 254 "bison/f_parser.y" // lalr1.cc:859
    {
        yyerrok;
    }
#line 933 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 15:
#line 259 "bison/f_parser.y" // lalr1.cc:859
    {
        Mapper::instance().create_scope();
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Identifier>(std::move(yystack_[0].value.as< Fortran::string > ()), Fortran::symbol::type::FUNCTION);
    }
#line 942 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 16:
#line 265 "bison/f_parser.y" // lalr1.cc:859
    {
        Entry entry(Fortran::symbol::type::SUBROUTINE);
        bool inserted = Mapper::instance().insert_fun(yystack_[0].value.as< Fortran::string > (), entry);
        Mapper::instance().create_scope();
        if (!inserted) {
            std::string error = "redefinition of subroutine id '" + yystack_[0].value.as< Fortran::string > () + "'";
            driver.semantic_error(error);
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error);
        } else {
            yylhs.value.as< AST::node_ptr > () = driver.createNode<Identifier>(std::move(yystack_[0].value.as< Fortran::string > ()), Fortran::symbol::type::SUBROUTINE);
        }
    }
#line 959 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 17:
#line 279 "bison/f_parser.y" // lalr1.cc:859
    {
        Entry entry(Fortran::symbol::type::PROGRAM);
        bool inserted = Mapper::instance().insert_fun(yystack_[0].value.as< Fortran::string > (), entry);
        Mapper::instance().create_scope();
        if (!inserted) {
            std::string error = "redefinition of program id '" + yystack_[0].value.as< Fortran::string > () + "'";
            driver.semantic_error(error);
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error);
        } else {
            yylhs.value.as< AST::node_ptr > () = driver.createNode<Identifier>(std::move(yystack_[0].value.as< Fortran::string > ()), Fortran::symbol::type::PROGRAM);
        }
    }
#line 976 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 18:
#line 293 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Identifier>(std::move(yystack_[0].value.as< Fortran::string > ()));
    }
#line 984 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 19:
#line 298 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 992 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 20:
#line 301 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[2].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1001 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 21:
#line 307 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Identifier>(std::move(yystack_[0].value.as< Fortran::string > ()));
    }
#line 1009 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 22:
#line 312 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1017 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 23:
#line 315 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[2].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1026 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 24:
#line 321 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1034 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 25:
#line 324 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1042 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 26:
#line 329 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Type>(yystack_[0].value.as< Fortran::type > ());
    }
#line 1050 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 27:
#line 334 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Body>(std::move(yystack_[1].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1058 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 28:
#line 339 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<SpecificationConstruct>(std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1066 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 29:
#line 342 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<SpecificationConstruct>(node_ptrs{});
    }
#line 1074 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 30:
#line 347 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1082 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 31:
#line 350 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[1].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1091 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 32:
#line 356 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1099 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 33:
#line 359 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1107 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 34:
#line 364 "bison/f_parser.y" // lalr1.cc:859
    {
        bool any_error = false;
        for (auto& node : yystack_[0].value.as< AST::node_ptrs > ()) {
            Entry entry(yystack_[1].value.as< AST::node_ptr > ()->var_type(), node->struct_type(), Fortran::symbol::type::VARIABLE);
            bool inserted = Mapper::instance().insert_var(node->id(), entry);
            if (!inserted) {
                std::string error_msg = "redeclaration of variable id '" + node->id() + "'";
                driver.semantic_error(error_msg);
                any_error = true;
            }
        }
        if(any_error) {
            std::string error_msg = "redeclaration of variable(s)";
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error_msg);
        } else {
            yylhs.value.as< AST::node_ptr > () = driver.createNode<DeclarationStatement>(std::move(yystack_[1].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptrs > ()));
        }
    }
#line 1130 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 35:
#line 384 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1138 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 36:
#line 387 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[2].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1147 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 37:
#line 393 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IdentifierDeclaration>(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1155 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 38:
#line 396 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IdentifierDeclaration>(std::move(yystack_[3].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::integer > ());
    }
#line 1163 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 39:
#line 399 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IdentifierDeclaration>(std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptr > ()));
    }
#line 1171 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 40:
#line 404 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<ParameterStatement>(std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1179 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 41:
#line 409 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1187 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 42:
#line 412 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[2].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1196 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 43:
#line 418 "bison/f_parser.y" // lalr1.cc:859
    {
        std::string error_msg = "";
        bool any_error = false;
        bool declared = Mapper::instance().lookup_var(yystack_[2].value.as< AST::node_ptr > ()->id());
        if (!declared) {
            error_msg += "variable id '" + yystack_[2].value.as< AST::node_ptr > ()->id() + "' not declared";
            any_error = true;
        } else {
            if (Mapper::instance().var_entry(yystack_[2].value.as< AST::node_ptr > ()->id()).type() == yystack_[0].value.as< AST::node_ptr > ()->var_type()) {
                yylhs.value.as< AST::node_ptr > () = driver.createNode<AssignmentStatement>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()));
            } else {
                error_msg += "type mismatch";
                any_error = true;
            }
        }
        if (any_error) {
            driver.semantic_error(error_msg);
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error_msg);
        }
    }
#line 1221 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 44:
#line 438 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<AssignmentStatement>(std::move(yystack_[5].value.as< AST::node_ptr > ()), std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1229 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 45:
#line 443 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Comparison>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::comp > ());
    }
#line 1237 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 46:
#line 446 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::arithmetic > ());
    }
#line 1245 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 47:
#line 449 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::arithmetic > ());
    }
#line 1253 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 48:
#line 452 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::arithmetic > ());
    }
#line 1261 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 49:
#line 455 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::arithmetic > ());
    }
#line 1269 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 50:
#line 458 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::logic > ());
    }
#line 1277 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 51:
#line 461 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::logic > ());
    }
#line 1285 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 52:
#line 464 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Expression>(std::move(yystack_[0].value.as< AST::node_ptr > ()), yystack_[1].value.as< Fortran::op::logic > ());
    }
#line 1293 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 53:
#line 467 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[1].value.as< AST::node_ptr > ());
    }
#line 1301 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 54:
#line 470 "bison/f_parser.y" // lalr1.cc:859
    {
        std::cout << "Creating a function call." << std::endl;
        if (!Mapper::instance().lookup_fun(yystack_[0].value.as< AST::node_ptr > ()->id())) {
            std::string error_msg = "function id '" + yystack_[0].value.as< AST::node_ptr > ()->id() + "' not declared";
            driver.semantic_error(error_msg);
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error_msg);
        } else {
            yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
        }
    }
#line 1316 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 55:
#line 480 "bison/f_parser.y" // lalr1.cc:859
    {
        if (!Mapper::instance().lookup_var(yystack_[0].value.as< AST::node_ptr > ()->id())) {
            std::string error_msg = "variable id '" + yystack_[0].value.as< AST::node_ptr > ()->id() + "' not declared";
            driver.semantic_error(error_msg);
            yylhs.value.as< AST::node_ptr > () = driver.createNode<ErrorNode>(error_msg);
        } else {
            yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
        }
    }
#line 1330 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 56:
#line 489 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1338 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 57:
#line 494 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<FunctionCall>(std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1346 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 58:
#line 499 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Literal>(yystack_[0].value.as< Fortran::integer > ());
    }
#line 1354 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 59:
#line 502 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Literal>(yystack_[0].value.as< Fortran::real > ());
    }
#line 1362 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 60:
#line 505 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Literal>(yystack_[0].value.as< Fortran::boolean > ());
    }
#line 1370 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 61:
#line 508 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<Literal>(yystack_[0].value.as< Fortran::string > ());
    }
#line 1378 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 62:
#line 519 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<ExecutableConstruct>(std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1386 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 63:
#line 522 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<ExecutableConstruct>(node_ptrs{});
    }
#line 1394 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 64:
#line 527 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1402 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 65:
#line 530 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[1].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1411 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 66:
#line 536 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1419 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 67:
#line 539 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1427 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 68:
#line 542 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1435 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 69:
#line 545 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1443 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 70:
#line 548 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1451 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 71:
#line 551 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1459 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 72:
#line 554 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = std::move(yystack_[0].value.as< AST::node_ptr > ());
    }
#line 1467 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 73:
#line 568 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IfStatement>(std::move(yystack_[4].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()), node_ptrs{}, node_ptrs{});
    }
#line 1475 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 74:
#line 571 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IfStatement>(std::move(yystack_[5].value.as< AST::node_ptr > ()), std::move(yystack_[2].value.as< AST::node_ptrs > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()), std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1483 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 75:
#line 574 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<IfStatement>(std::move(yystack_[4].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()), node_ptrs{}, std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1491 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 76:
#line 579 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1499 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 77:
#line 582 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[1].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1508 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 78:
#line 588 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<ElseIfStatement>(std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1516 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 79:
#line 593 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[1].value.as< AST::node_ptrs > ());
    }
#line 1524 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 80:
#line 598 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1532 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 81:
#line 601 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[1].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1541 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 82:
#line 607 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<ReadStatement>(std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1549 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 83:
#line 612 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<PrintStatement>(std::move(yystack_[0].value.as< AST::node_ptrs > ()));
    }
#line 1557 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 84:
#line 617 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = driver.createNodeList(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1565 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 85:
#line 620 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptrs > () = std::move(yystack_[2].value.as< AST::node_ptrs > ());
        yylhs.value.as< AST::node_ptrs > ().emplace_back(std::move(yystack_[0].value.as< AST::node_ptr > ()));
    }
#line 1574 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 86:
#line 626 "bison/f_parser.y" // lalr1.cc:859
    {
        node_ptr unitary = driver.createNode<Literal>(1);
        yylhs.value.as< AST::node_ptr > () = driver.createNode<DoStatement>(std::move(yystack_[6].value.as< AST::node_ptr > ()),
            std::move(yystack_[4].value.as< AST::node_ptr > ()), std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(unitary), std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1584 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 87:
#line 631 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<DoStatement>(std::move(yystack_[8].value.as< AST::node_ptr > ()),
            std::move(yystack_[6].value.as< AST::node_ptr > ()), std::move(yystack_[4].value.as< AST::node_ptr > ()), std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1593 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 88:
#line 637 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<WhileStatement>(std::move(yystack_[4].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1601 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 89:
#line 642 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<CallStatement>(std::move(yystack_[3].value.as< AST::node_ptr > ()), std::move(yystack_[1].value.as< AST::node_ptrs > ()));
    }
#line 1609 "src/f_parser.cpp" // lalr1.cc:859
    break;

  case 90:
#line 645 "bison/f_parser.y" // lalr1.cc:859
    {
        yylhs.value.as< AST::node_ptr > () = driver.createNode<CallStatement>(std::move(yystack_[2].value.as< AST::node_ptr > ()), std::move(node_ptrs{}));
    }
#line 1617 "src/f_parser.cpp" // lalr1.cc:859
    break;


#line 1621 "src/f_parser.cpp" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   Parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   Parser ::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  Parser ::yypact_ninf_ = -101;

  const signed char  Parser ::yytable_ninf_ = -1;

  const short int
   Parser ::yypact_[] =
  {
       3,     9,    24,  -101,     8,  -101,  -101,  -101,  -101,    32,
      43,  -101,     5,    57,  -101,    49,  -101,  -101,    26,    70,
      72,    63,   114,   229,     5,  -101,  -101,  -101,   117,   -12,
     122,  -101,    98,  -101,    63,  -101,   129,   131,  -101,   155,
     138,   141,    63,   296,   127,    63,    35,  -101,  -101,   229,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     5,
    -101,    74,  -101,   164,    -1,    78,  -101,   -19,    63,  -101,
     296,   296,   146,   296,   296,  -101,  -101,  -101,  -101,   151,
      84,  -101,  -101,   156,   157,   159,   296,   296,  -101,   177,
     127,     5,  -101,     5,    96,    63,  -101,   166,   167,  -101,
     231,   245,   296,   259,    84,    54,   296,   296,   296,   296,
     296,   296,   296,   296,     4,   273,    84,   187,  -101,   179,
     190,     5,  -101,  -101,  -101,   185,   201,   178,  -101,  -101,
     116,  -101,  -101,    37,    37,    55,    55,    84,    84,   103,
      84,  -101,   132,   193,  -101,   214,   216,   227,   229,   229,
     296,    54,  -101,  -101,   296,  -101,  -101,   234,  -101,    65,
      90,   158,  -101,    84,  -101,   229,   217,  -101,  -101,    28,
    -101,  -101,  -101,   296,   130,   211,   296,  -101,  -101,   184,
    -101,  -101,   287,   218,   232,  -101,   229,   229
  };

  const unsigned char
   Parser ::yydefact_[] =
  {
       0,     0,     0,    26,     0,     3,     4,     5,     6,     0,
       0,    17,    29,     0,    16,     0,     1,     2,     0,     0,
       0,     0,     0,    63,    28,    30,    32,    33,     0,     0,
       0,    15,     0,     8,     0,    18,    37,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    27,    62,
      64,    67,    70,    71,    68,    69,    72,    31,    11,    29,
      21,     0,    19,     0,     0,     0,    41,     0,     0,     7,
       0,     0,     0,     0,     0,    58,    59,    60,    61,    55,
      84,    54,    56,    83,    82,     0,     0,     0,    65,     0,
       0,    29,    14,    29,     0,     0,    40,     0,     0,    36,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    20,     0,
       0,    29,    42,    38,    39,     0,     0,     0,    53,    24,
       0,    22,    25,    46,    47,    48,    49,    50,    51,    45,
      85,    90,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,    57,    89,     0,     9,    13,     0,    80,     0,
       0,     0,    23,    44,    12,     0,     0,    73,    81,     0,
      76,    75,    88,     0,     0,     0,     0,    77,    74,     0,
      86,    79,     0,     0,     0,    87,     0,    78
  };

  const short int
   Parser ::yypgoto_[] =
  {
    -101,  -101,   240,  -101,  -101,  -101,  -101,  -101,  -101,   -21,
     -41,   163,  -101,    97,    30,   -55,  -101,  -101,   230,  -101,
    -101,   188,  -101,  -101,   -33,   -54,  -101,  -100,  -101,  -101,
     -14,  -101,  -101,    86,    88,   -89,  -101,  -101,  -101,  -101,
    -101,  -101
  };

  const short int
   Parser ::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,     8,    32,    15,    12,    79,
      61,    62,   130,   131,    21,    22,    23,    24,    25,    26,
      37,    38,    27,    65,    47,    80,    81,    82,    48,    49,
     158,    51,   169,   170,   171,   159,    52,    53,    83,    54,
      55,    56
  };

  const unsigned char
   Parser ::yytable_[] =
  {
      36,    66,    46,    84,    89,   132,     1,     2,    16,    50,
      10,     1,     2,    46,    20,    59,   100,   101,    97,   103,
     104,    72,    35,    94,    85,    13,    93,    30,    46,    60,
       9,   141,   115,   116,     9,    88,   119,    18,   120,     3,
      60,     3,   165,   166,     3,    60,    98,    36,   127,    19,
      11,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     160,    86,   122,    87,    28,    14,   147,    31,   108,   109,
     110,   111,   174,   142,    46,    29,   175,    40,    33,   165,
     166,   167,    41,    42,   129,    43,    44,    45,   110,   111,
     183,    75,    76,    77,    78,    35,   161,   187,    34,    90,
     163,    91,    40,    95,    35,    96,    35,    41,    42,   172,
      43,    44,    45,   106,   107,   108,   109,   110,   111,   179,
      39,    90,   182,   121,    64,    58,   112,    46,    46,    63,
     129,    35,   106,   107,   108,   109,   110,   111,    46,    46,
      46,   151,    40,   152,    46,   168,   168,    41,    42,   180,
      43,    44,    45,    46,    46,    67,    68,    90,    46,   153,
     168,   168,    46,    69,    70,    46,    46,    71,    60,   168,
      40,    35,    92,   168,   102,    41,    42,   105,    43,    44,
      45,   113,    90,   173,   117,   114,   145,   106,   107,   108,
     109,   110,   111,   123,   124,   144,    40,   146,   148,    35,
     112,    41,    42,   150,    43,    44,    45,   106,   107,   108,
     109,   110,   111,   106,   107,   108,   109,   110,   111,   149,
     112,   154,   155,    40,   156,    35,   112,   181,    41,    42,
      40,    43,    44,    45,   157,    41,    42,   185,    43,    44,
      45,    40,   164,   176,    17,   186,    41,    42,   162,    43,
      44,    45,    35,   118,    57,   177,    99,   178,   125,    35,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
      35,     0,   126,   112,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,   128,   112,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
     143,   112,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,   184,   112,   106,   107,   108,   109,
     110,   111,    73,     0,     0,     0,     0,     0,     0,   112,
       0,    74,     0,    75,    76,    77,    78,    35
  };

  const short int
   Parser ::yycheck_[] =
  {
      21,    34,    23,    44,    59,   105,     3,     4,     0,    23,
       1,     3,     4,    34,     9,    27,    70,    71,    37,    73,
      74,    42,    41,    64,    45,     1,    27,     1,    49,    41,
       0,    27,    86,    87,     4,    49,    91,     5,    93,    36,
      41,    36,    14,    15,    36,    41,    67,    68,   102,     6,
      41,   151,   106,   107,   108,   109,   110,   111,   112,   113,
     149,    26,    95,    28,     7,    41,   121,    41,    31,    32,
      33,    34,   161,   114,    95,    26,   165,    12,     8,    14,
      15,    16,    17,    18,   105,    20,    21,    22,    33,    34,
     179,    37,    38,    39,    40,    41,   150,   186,    26,    25,
     154,    27,    12,    25,    41,    27,    41,    17,    18,    19,
      20,    21,    22,    29,    30,    31,    32,    33,    34,   173,
       6,    25,   176,    27,    26,     8,    42,   148,   149,     7,
     151,    41,    29,    30,    31,    32,    33,    34,   159,   160,
     161,    25,    12,    27,   165,   159,   160,    17,    18,    19,
      20,    21,    22,   174,   175,    26,    25,    25,   179,    27,
     174,   175,   183,     8,    26,   186,   187,    26,    41,   183,
      12,    41,     8,   187,    28,    17,    18,    26,    20,    21,
      22,    25,    25,    25,     7,    26,     7,    29,    30,    31,
      32,    33,    34,    27,    27,     8,    12,     7,    13,    41,
      42,    17,    18,    25,    20,    21,    22,    29,    30,    31,
      32,    33,    34,    29,    30,    31,    32,    33,    34,    18,
      42,    28,     8,    12,     8,    41,    42,    16,    17,    18,
      12,    20,    21,    22,     7,    17,    18,    19,    20,    21,
      22,    12,     8,    26,     4,    13,    17,    18,   151,    20,
      21,    22,    41,    90,    24,   169,    68,   169,    27,    41,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      41,    -1,    27,    42,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    42,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    42,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    42,    29,    30,    31,    32,
      33,    34,    26,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    35,    -1,    37,    38,    39,    40,    41
  };

  const unsigned char
   Parser ::yystos_[] =
  {
       0,     3,     4,    36,    44,    45,    46,    47,    48,    57,
       1,    41,    51,     1,    41,    50,     0,    45,     5,     6,
       9,    57,    58,    59,    60,    61,    62,    65,     7,    26,
       1,    41,    49,     8,    26,    41,    52,    63,    64,     6,
      12,    17,    18,    20,    21,    22,    52,    67,    71,    72,
      73,    74,    79,    80,    82,    83,    84,    61,     8,    27,
      41,    53,    54,     7,    26,    66,    67,    26,    25,     8,
      26,    26,    52,    26,    35,    37,    38,    39,    40,    52,
      68,    69,    70,    81,    53,    52,    26,    28,    73,    58,
      25,    27,     8,    27,    53,    25,    27,    37,    52,    64,
      68,    68,    28,    68,    68,    26,    29,    30,    31,    32,
      33,    34,    42,    25,    26,    68,    68,     7,    54,    58,
      58,    27,    67,    27,    27,    27,    27,    68,    27,    52,
      55,    56,    70,    68,    68,    68,    68,    68,    68,    68,
      68,    27,    53,    27,     8,     7,     7,    58,    13,    18,
      25,    25,    27,    27,    28,     8,     8,     7,    73,    78,
      78,    68,    56,    68,     8,    14,    15,    16,    73,    75,
      76,    77,    19,    25,    78,    78,    26,    76,    77,    68,
      19,    16,    68,    78,    27,    19,    13,    78
  };

  const unsigned char
   Parser ::yyr1_[] =
  {
       0,    43,    44,    44,    45,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    48,    49,    50,    51,    52,    53,
      53,    54,    55,    55,    56,    56,    57,    58,    59,    59,
      60,    60,    61,    61,    62,    63,    63,    64,    64,    64,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    75,    75,    76,    77,
      78,    78,    79,    80,    81,    81,    82,    82,    83,    84,
      84
  };

  const unsigned char
   Parser ::yyr2_[] =
  {
       0,     2,     2,     1,     1,     1,     1,     5,     4,     8,
       7,     4,     9,     8,     5,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     1,     1,     2,     1,     0,
       1,     2,     1,     1,     2,     1,     3,     1,     4,     4,
       4,     1,     3,     3,     6,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     7,     8,     7,     1,     2,     6,     3,
       1,     2,     2,     2,     1,     3,     8,    10,     7,     5,
       4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  Parser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"PROGRAM keyword\"",
  "\"SUBROUTINE keyword\"", "\"FUNCTION keyword\"", "\"STOP keyword\"",
  "\"RETURN keyword\"", "\"END keyword\"", "\"PARAMETER keyword\"",
  "\"CYCLE keyword\"", "\"EXIT keyword\"", "\"IF keyword\"",
  "\"THEN keyword\"", "\"ELSE keyword\"", "\"ELSEIF keyword\"",
  "\"ENDIF keyword\"", "\"WHILE keyword\"", "\"DO keyword\"",
  "\"ENDDO keyword\"", "\"PRINT keyword\"", "\"READ keyword\"",
  "\"CALL keyword\"", "\"ERR keyword\"", "\"new line\"", "\"comma\"",
  "\"left parenthesis\"", "\"right parenthesis\"", "\"=\"", "\"+\"",
  "\"-\"", "\"*\"", "\"/\"", "\"&&\"", "\"||\"", "\"!\"",
  "\"TYPE identifier\"", "\"INTEGER value\"", "\"REAL value\"",
  "\"BOOLEAN value\"", "\"STRING value\"", "\"ID identifier\"",
  "\"COMPARISON operator\"", "$accept", "ExecutableProgram", "Subprogram",
  "MainProgram", "Subroutine", "Function", "FunctionIdentifier",
  "SubroutineIdentifier", "ProgramIdentifier", "Identifier",
  "ArgumentList", "Argument", "ParameterList", "Parameter", "Type", "Body",
  "SpecificationConstruct", "SpecificationList", "Specification",
  "DeclarationStatement", "IdentifierDeclarationList",
  "IdentifierDeclaration", "ParameterStatement", "AssignmentStatementList",
  "AssignmentStatement", "Expression", "FunctionCall", "Literal",
  "ExecutableConstruct", "ExecutableList", "Statement", "IfStatement",
  "ElseIfStatementList", "ElseIfStatement", "ElseStatement",
  "StatementList", "ReadStatement", "PrintStatement", "PrintList",
  "DoStatement", "WhileStatement", "CallStatement", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   Parser ::yyrline_[] =
  {
       0,   160,   160,   164,   170,   173,   176,   181,   185,   190,
     194,   198,   203,   250,   254,   259,   265,   279,   293,   298,
     301,   307,   312,   315,   321,   324,   329,   334,   339,   342,
     347,   350,   356,   359,   364,   384,   387,   393,   396,   399,
     404,   409,   412,   418,   438,   443,   446,   449,   452,   455,
     458,   461,   464,   467,   470,   480,   489,   494,   499,   502,
     505,   508,   519,   522,   527,   530,   536,   539,   542,   545,
     548,   551,   554,   568,   571,   574,   579,   582,   588,   593,
     598,   601,   607,   612,   617,   620,   626,   631,   637,   642,
     645
  };

  // Print the state stack on the debug stream.
  void
   Parser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   Parser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 8 "bison/f_parser.y" // lalr1.cc:1167
} //  Fortran 
#line 2161 "src/f_parser.cpp" // lalr1.cc:1167
#line 658 "bison/f_parser.y" // lalr1.cc:1168


void Fortran::Parser::error(const location &loc, const std::string &message) {
   //std::cerr << "Error: " << message << " at " << loc << "\n";
   //std::cerr << "Error: " << message << " at " << driver.location() << "\n";
   driver.printError(message);
}
