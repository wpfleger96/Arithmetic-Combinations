CC = g++
DEBUG = -g
CFLAGS = -Wall -c -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

compile: proj1.out

proj1.out: main.o proj1.o
	$(CC) $(LFLAGS) -o proj1.out main.o proj1.o

main.o: main.cpp proj1.h
	$(CC) $(CFLAGS) main.cpp

proj1.o: proj1.cpp proj1.h
	$(CC) $(CFLAGS) proj1.cpp

run: proj1.out
	./proj1.out -a -e 71 -v 7 1 2 3 6

clean:
	rm proj1.out
	rm *.o