targets = lab04.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I.src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab04.bin
lab04.bin: src/lab04.c
	$(CC) $(C_OPTS) $< -o ./dist/$@ 
run: clean prep compile
	./dist/lab04.c
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

