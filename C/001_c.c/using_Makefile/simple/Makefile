CC = gcc

TARGET = strings

all: $(TARGET)

$(TARGET): strings.o
	$(CC) -o $(TARGET) strings.o
strings.o: strings.c
	$(CC) -c strings.c
clean:
	rm -f *.o $(TARGET)
