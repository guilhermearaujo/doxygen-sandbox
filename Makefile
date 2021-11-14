build:
	gcc -o ./build/program ./src/*.c
	chmod +x ./build/program

run:
	./build/program

build-docs:
	doxygen

.PHONY: build build-docs run
