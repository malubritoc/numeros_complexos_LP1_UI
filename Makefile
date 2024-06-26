PROG = main
CC = g++
CPPFLAGS = -O0 -g -ansi -Wall -pedantic  
OBJS = main.o complexo.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp complexo.h
	$(CC) $(CPPFLAGS) -c main.cpp

complexo.o: complexo.h complexo.cpp
	$(CC) $(CPPFLAGS) -c complexo.cpp

clean:
	rm -f $(PROG) $(OBJS)
