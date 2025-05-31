CC = gcc
LIBS = /usr/lib/x86_64-linux-gnu/libcunit.so.1.0.1 -lm 
CFLAGS = -I. -g -w -I./..
TDIR = ./src/tuple
BINDIR = ./bin
TESTDIR = ./src/tests

all: tupletest 

tupletest: $(TDIR)/tuple.* $(TESTDIR)/tupletest.c
	$(CC) $(CFLAGS) $(TESTDIR)/tupletest.c \
	$(TDIR)/tuple.c $(LIBS) -o $(BINDIR)/tupletest

clean:
	rm -f $(BINDIR)/tupletest $(TDIR)/*.orig 
	 
	