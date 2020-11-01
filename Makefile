.PHONY: clean all test run runtest

BIN_DIR = ./bin
BUILD_DIR = ./build
SRC_DIR = ./src
TEST_DIR = ./test
FLAGS =-Wall -std=c++11

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/calc.o 
	g++ $(FLAGS) $(BUILD_DIR)/calc.o -o $(BIN_DIR)/main

$(BUILD_DIR)/calc.o:
	g++ $(FLAGS) -c $(SRC_DIR)/calc.cpp -o $(BUILD_DIR)/calc.o
	
test: $(BUILD_DIR)/test.o
	g++ $(FLAGS) $(BUILD_DIR)/test.o -o $(BIN_DIR)/test

$(BUILD_DIR)/test.o:
	g++ $(FLAGS) -c $(TEST_DIR)/Test.cpp -o $(BUILD_DIR)/test.o
	
run: 
	./bin/main
	
runtest:
	./bin/test

clean:
	rm -f build/*.o
	rm -f bin/main
	rm -f bin/test
