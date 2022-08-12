all: test_test

CPP=g++ -std=c++17

test_test:
	$(CPP) -o test_test src/test.cpp test/test_test.cpp -l gtest -l gtest_main -pthread

test: test_test
	./test_test

clean:
	rm -f test_test
