sudoku: 
	mkdir -p build
	gcc src/generator.c -o build/generator
	./build/generator

clean:
	rm build/*

test:
	gcc tests/example_test.c -o tests/results
	./tests/results
	rm ./tests/results
