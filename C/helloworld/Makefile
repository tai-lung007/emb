# Compiler to use
CC = gcc

# Target binary file
TARGET = hello

# Build the target
all: $(TARGET)

$(TARGET): helloworld.o
	$(CC) -o  $(TARGET)  helloworld.o

helloworld.o: helloworld.c
	$(CC) -c helloworld.c

# Clean the build directory
clean:
	rm -f *.o $(TARGET)


