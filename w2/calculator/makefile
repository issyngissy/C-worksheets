CC = gcc
CFLAGS = -Wall -ansi -pedantic
OBJ = io.o main.o calc.o 
EXEC = myProgram

myProgram : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

io.o : io.c io.h
	$(CC) $(CFLAGS) io.c -c

calc.o : calc.c calc.h
	$(CC) $(CFLAGS) calc.c -c

main.o : main.c io.h calc.h
	$(CC) $(CFLAGS) main.c -c

clean : 
	rm $(OBJ) $(EXEC)