.PHONY:clean clean_mid clean_result clean_program
KrxkCompiler:yacc.y lex.l xu.h
	#Written by Krxk,going to generate "KrxkCompiler"
	bison -d yacc.y;flex lex.l;gcc yacc.tab.c lex.yy.c -o KrxkCompiler

clean_mid:*.c yacc.tab.h
	rm yacc.tab.c yacc.tab.h lex.yy.c

clean_result:test.out
	rm test.out

clean_program:KrxkCompiler
	rm KrxkCompiler

clean:clean_program clean_mid clean_result



