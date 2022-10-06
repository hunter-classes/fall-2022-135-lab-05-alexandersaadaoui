all: main
CXXFLAGS = -Wall

main: main.o funcs.o
	g++ $(CXXFLAGS) -o main main.o funcs.o

tests: tests.o funcs.o
	g++ $(CXXFLAGS) -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp

main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o funcs.o tests.o
