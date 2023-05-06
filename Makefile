FILENAME       =
SOURCE_FOLDER  =
SOURCE_FILE    = $(SOURCE_FOLDER)$(FILENAME).c
BUILD_FILE     = ./build/$(FILENAME)
COMPILER       = gcc
COMPILER_FLAGS = -Wall

default: compile run

compile:
	$(COMPILER) $(COMPILER_FLAGS) $(SOURCE_FILE) -o $(BUILD_FILE)

clean:
	rm -f ./build/*

run:
	$(BUILD_FILE)
