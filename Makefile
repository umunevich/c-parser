TARGET = parser

all: $(TARGET)

$(TARGET):
	yacc -d -v parser.y
	lex lexer.l
	gcc -w y.tab.c lex.yy.c -o $(TARGET)

run: $(TARGET)
	./$(TARGET) < TestFiles/test1.c

clean:
	rm -f $(TARGET) y.tab.c y.tab.h y.output lex.yy.c
