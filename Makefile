CC = g++
CFLAGS = -std=c++11 -Wall
CXXFLAGS = -std=c++98 -Wall

all: main runtest 

main: Final.cc
	$(CC) $(CXXFLAGS) Final.cc -o count

test_case.o: test_case.cc
	$(CC) -c $(CFLAGS) test_case.cc

runtest: test_case
	./test_case

test_case: test_case.o 
	$(CXX) -o $@ $^

check: 
	cppcheck Final.cc
	valgrind --leak-check=full ./count

clean:
	rm -rf *.o count
	rm -rf test_case
	rm -rf *html
	rm -rf *latex

doc: *.cc 
	Doxygen doxyfile
