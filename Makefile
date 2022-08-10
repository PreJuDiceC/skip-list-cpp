CC = g++
CXXFLAGS = -std=c++0x
CFLAGS = -I

all:test_base_function test_stress

test_base_function: ./test/test.cpp
	$(CC) -o ./bin/test/test ./test/test.cpp -std=c++11 -lpthread

test_stress: ./test/stress_test.cpp
	$(CC) -o ./bin/test/test_stress ./test/stress_test.cpp -std=c++11 -lpthread


.PHONY: clean
clean:
	rm -f ./*.o
