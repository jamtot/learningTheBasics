all: main.o Car.o P1

main.o: main.cpp Car.cpp Car.h Vehicle.h
	g++ -Wall -g -c main.cpp

Car.o: Car.cpp Car.h Vehicle.h
	g++ -Wall -g -c Car.cpp

P1:
	g++ -Wall main.o Car.o -o P1

clean:
	rm -f *o P1
