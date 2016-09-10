# Define required macros here
SHELL = /bin/sh
OBJS = mystery.c mystery.h 
CFLAGS = -Wall -g
CC = gcc

mystery:${OBJS}
	${CC} ${CFLAGS} -o mystery ${OBJS} 

clean:
	-rm -f *.o mystery

.c.o.s:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
