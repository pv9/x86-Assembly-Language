# Define required macros here
SHELL = /bin/sh
OBJS =  formula.h nCr.h formula.c nCr.s
CFLAGS = -Wall -g -m32
CC = gcc

formula:${OBJS}
	${CC} ${CFLAGS}  -o formula ${OBJS} 

clean:
	-rm -f *.o formula 

.c.o.s:
	${CC} ${CFLAGS} ${INCLUDES} -c $<


