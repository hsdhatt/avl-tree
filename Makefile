CC=cc
CFLAGS= -Wall -c

all: avl

avl: pretty_print rotate height main
	$(CC) height.o pretty_print.o rotate.o main.o -o avl -lm

main: main.o
	$(CC) $(CFLAGS) main.c

height: height.o
	$(CC) $(CFLAGS) height.c

pretty_print: pretty_print.o
	$(CC) $(CFLAGS) pretty_print.c

rotate: rotate.o
	$(CC) $(CFLAGS) rotate.c
