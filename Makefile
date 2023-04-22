FILENAME       =
COMPILER       = gcc
COMPILER_FLAGS = -Wall -o $(FILENAME).exe

default: compile

compile:
	$(COMPILER) $(FILENAME).c $(COMPILER_FLAGS)

clean:
	rm -f src/*/*/*.exe
