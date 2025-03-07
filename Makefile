CC := /usr/bin/gcc

all: task1 task2 task3 task4

task1:
	$(CC) -o task1 src/task1.c

task2:
	$(CC) -o task2 src/task2.c

task3:
	$(CC) -o task3 src/task3.c

task4:
	$(CC) -o task4 src/task4.c -lm

clean:
	rm -rf task*
