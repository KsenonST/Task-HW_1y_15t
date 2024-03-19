TARGET = Zadanie1-3-output
CC = g++

$(TARGET) : Zadanie1-3.o CountSort.o WriteRes.o foo.o
	$(CC) Zadanie1-3.o CountSort.o WriteRes.o foo.o -o $(TARGET)

Zadanie1-3.o : Zadanie1-3.cpp
	$(CC) -c Zadanie1-3.cpp -o Zadanie1-3.o

CountSort.o : CountSort.cpp
	$(CC) -c CountSort.cpp -o CountSort.o

WriteRes.o : WriteRes.cpp
	$(CC) -c WriteRes.cpp -o WriteRes.o

foo.o : foo.cpp
	$(CC) -c foo.cpp -o foo.o

clean : 
	rm $(TARGET) *.o 

