
main.o: main.c my_mat.h
	gcc -Wall -c main.c

my_mat.o: my_mat.c
	gcc -Wall -c my_mat.c

all: main.o my_mat.o
	gcc -Wall -o connections main.o my_mat.o

clean:
	rm -f *.o connections