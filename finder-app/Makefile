CC = $(CROSS_COPILE)gcc
CFLAGS  = -Wall -g

writer : writer.o
	$(CC) writer.o -o writer

writer.o : writer.c
	$(CC) $(CFLAGS) -c writer.c -o writer.o -O3

clean:
	rm -f writer writer.o
