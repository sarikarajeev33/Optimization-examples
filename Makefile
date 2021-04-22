CC = gcc
CFLAGS = -Wall -O2 -g
BOOK_INCLUDE = /home/class_projects/book_includes
BOOK_LIB = /home/class_projects/book_libs


all: fact


fact: fact.c harness.c
	$(CC) $(CFLAGS) -o fact fact.c harness.c -I $(BOOK_INCLUDE) -L $(BOOK_LIB) -l csapp64

