all: main

main: primegen functions
	g++ primegen.o functions.o -o primegen
primegen: primegen.cpp 
	g++ -c primegen.cpp
functions: functions.cpp
	g++ -c functions.cpp	
clean:
	rm *.o
