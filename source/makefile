OPTIONS=-std=c++11
COMPILE=g++-4.9

all: main

main: primegen functions
	$(COMPILE) $(OPTIONS) primegen.o functions.o -o primegen
primegen: primegen.cpp 
	$(COMPILE) $(OPTIONS) -c primegen.cpp
functions: functions.cpp
	$(COMPILE) $(OPTIONS) -c functions.cpp	
clean:
	rm *.o
