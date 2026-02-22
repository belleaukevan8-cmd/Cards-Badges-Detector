CC=gcc
CFLAGS=-Wall -g
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
EXEC=project

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
