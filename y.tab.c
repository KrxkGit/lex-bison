#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "yacc.y"
	#include "xu.h"
	#define YYSTYPE node
	#include "yacc.tab.h"
	
	int yyerror();
	int yyerror(char* msg);
	extern int yylex();    
	codelist* list;
#line 28 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IF 257
#define ELSE 258
#define THEN 259
#define WHILE 260
#define DO 261
#define RELOP 262
#define NUMBER 263
#define ID 264
#define AND 265
#define ASSIGN 266
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    0,    5,    5,    1,    1,
    1,    4,    4,    4,    2,    3,
};
static const short yylen[] = {                            2,
    5,    9,    6,    3,    1,    0,    4,    1,    4,    3,
    1,    3,    1,    1,    0,    0,
};
static const short yydefred[] = {                         0,
    0,   15,   13,   14,    8,    0,    0,    0,    0,    0,
    0,    0,   15,   15,   15,    0,    0,   12,    0,    0,
    0,    0,    0,   15,    7,    0,    9,    0,   16,    3,
   15,    0,    2,
};
static const short yydgoto[] = {                          5,
    8,   10,   31,    6,    7,
};
static const short yysindex[] = {                      -224,
 -232,    0,    0,    0,    0,  -43,  -34, -251,  -41, -232,
 -232, -232,    0,    0,    0, -232, -244,    0, -231, -224,
 -224, -232,   -8,    0,    0, -221,    0, -224,    0,    0,
    0, -224,    0,
};
static const short yyrindex[] = {                         4,
    0,    0,    0,    0,    0,    0,   10,    0,    1,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    3,    5,
    5,    0,    6,    0,    0,    7,    0,    5,    0,    0,
    0,    5,    0,
};
static const short yygindex[] = {                        -5,
   16,   -2,    0,    8,    0,
};
#define YYTABLESIZE 271
static const short yytable[] = {                         11,
   11,   11,    4,    6,    6,   10,    1,   14,    9,    5,
   20,   21,   22,   15,   25,   26,   24,    9,   18,    9,
   15,   28,   30,   23,   13,   17,   33,   19,   32,    9,
    3,    4,    1,   15,   11,    2,   29,   27,    3,    4,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
    0,    4,    6,    6,   10,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   16,    0,   12,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   11,   11,
    4,   11,    6,   10,   10,   11,   10,    5,    0,    0,
   10,
};
static const short yycheck[] = {                         43,
    0,   43,    0,    0,    0,    0,    0,  259,    1,    0,
   13,   14,   15,  265,   20,   21,  261,   10,   11,   12,
  265,   24,   28,   16,   59,   10,   32,   12,   31,   22,
  263,  264,  257,  265,   43,  260,  258,   22,  263,  264,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   59,
   -1,   59,   59,   59,   59,   59,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  262,   -1,  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,  259,
  258,  261,  258,  258,  259,  265,  261,  258,   -1,   -1,
  265,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 266
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IF",
"ELSE","THEN","WHILE","DO","RELOP","NUMBER","ID","AND","ASSIGN",
};
static const char *yyrule[] = {
"$accept : S",
"S : IF E THEN M S",
"S : IF E THEN M S ELSE N M S",
"S : WHILE M E DO M S",
"S : OP ASSIGN E",
"S : L",
"S :",
"L : L ';' M S",
"L : S",
"E : E AND M E",
"E : OP RELOP OP",
"E : OP",
"OP : OP '+' OP",
"OP : NUMBER",
"OP : ID",
"M :",
"N :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 108 "yacc.y"

int yyerror(char* msg)
{
    printf("\nERROR with message: %s\n", msg);
    return 0;
}


int main()
{
    list = newcodelist();

    freopen("test.in", "rt+", stdin);
    freopen("test.out", "wt+", stdout);

    yyparse();
    print(list);
    
    fclose(stdin);

    fclose(stdout);
    return 0;
}                
                
                



#line 270 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 25 "yacc.y"
	{ 	
			backpatch(list, yystack.l_mark[-2].truelist, yyval.instr); 
			yyval.nextlist = merge(yystack.l_mark[-3].falselist, yystack.l_mark[0].nextlist); 
		}
break;
case 2:
#line 31 "yacc.y"
	{ 	
			backpatch(list, yystack.l_mark[-7].truelist, yystack.l_mark[-5].instr);    
			backpatch(list, yystack.l_mark[-7].falselist, yystack.l_mark[-1].instr);
                  yystack.l_mark[-4].nextlist = merge(yystack.l_mark[-4].nextlist, yystack.l_mark[-2].nextlist);    
                  yyval.nextlist = merge(yystack.l_mark[-4].nextlist, yystack.l_mark[0].nextlist); 
                }
break;
case 3:
#line 39 "yacc.y"
	{ 	
			backpatch(list, yystack.l_mark[0].nextlist, yystack.l_mark[-4].instr);    
			backpatch(list, yystack.l_mark[-3].truelist, yystack.l_mark[-1].instr);
                 	yyval.nextlist = yystack.l_mark[-3].falselist;	
                 	gen_goto(list, yystack.l_mark[-4].instr); 
                }
break;
case 4:
#line 48 "yacc.y"
	{
			copyaddr(&yystack.l_mark[-2], yystack.l_mark[-2].lexeme); 
			gen_assignment(list, yystack.l_mark[-2], yystack.l_mark[0]);
		}
break;
case 5:
#line 54 "yacc.y"
	{
			yyval.nextlist = yystack.l_mark[0].nextlist;
		}
break;
case 6:
#line 57 "yacc.y"
	{}
break;
case 7:
#line 61 "yacc.y"
	{
			backpatch(list, yystack.l_mark[-3].nextlist, yystack.l_mark[-1].instr);
			yyval.nextlist = yystack.l_mark[0].nextlist;
		}
break;
case 8:
#line 66 "yacc.y"
	{
			yyval.nextlist = yystack.l_mark[0].nextlist;
		}
break;
case 9:
#line 72 "yacc.y"
	{ 	
			backpatch(list, yystack.l_mark[-3].truelist, yystack.l_mark[-1].instr);
		  	yyval.truelist = yystack.l_mark[0].truelist; 
		  	yyval.falselist = merge(yystack.l_mark[-3].falselist, yystack.l_mark[0].falselist); 
		}
break;
case 10:
#line 79 "yacc.y"
	{	
			yyval.truelist = new_instrlist(nextinstr(list));
                        yyval.falselist = new_instrlist(nextinstr(list)+1);
                        gen_if(list, yystack.l_mark[-2], yystack.l_mark[-1].oper, yystack.l_mark[0]);
                        gen_goto_blank(list); 
                }
break;
case 11:
#line 87 "yacc.y"
	{
			copyaddr_fromnode(&yyval, yystack.l_mark[0]);
                }
break;
case 12:
#line 92 "yacc.y"
	{ new_temp(&yyval, get_temp_index(list)); gen_3addr(list, yyval, yystack.l_mark[-2], "+", yystack.l_mark[0]); }
break;
case 13:
#line 93 "yacc.y"
	{copyaddr(&yyval, yystack.l_mark[0].lexeme);}
break;
case 14:
#line 94 "yacc.y"
	{copyaddr(&yyval, yystack.l_mark[0].lexeme);}
break;
case 15:
#line 98 "yacc.y"
	{ yyval.instr = nextinstr(list); }
break;
case 16:
#line 101 "yacc.y"
	{
			yyval.nextlist = new_instrlist(nextinstr(list));
                 	gen_goto_blank(list);
		}
break;
#line 577 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
