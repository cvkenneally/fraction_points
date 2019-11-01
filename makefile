CFLAGS = -c -I$(HOME)/Desktop/Programming/include -I.
LFLAGS = -L$(HOME)/Desktop/Programming/lib
LIBS = -libdataStructures

project1: main.o
		g++ -o Project1 main.o fraction.o point.o

main.o: main.cc fraction.h point.h
		g++ -c  main.cc

fraction.o: fraction.cc fraction.h
		g++ -c fraction.cc

point.o: point.cc point.h
		g++ -c point.cc
