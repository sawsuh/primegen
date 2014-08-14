all: main

main: primegen
	g++ primegen.o -o primegen
primegen: primegen.cpp
	g++ -c primegen.cpp
clean:
	rm *.o
