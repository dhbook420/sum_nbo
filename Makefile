TARGET = sum-nbo

all: $(TARGET)

$(TARGET): main.o utils.o
	g++ -o $@ $^

main.o: main.c utils.h
		g++ -c -o main.o main.c

utils.o: utils.c utils.h
		g++ -c -o utils.o utils.c

clean:
	rm -f $(TARGET)
	rm -f *.o


