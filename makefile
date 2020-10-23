all: 
	gcc -o main main.c

run: main
	./main

clean:
	rm *.o
