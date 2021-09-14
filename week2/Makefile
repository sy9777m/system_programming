test: main.o read.o write.o
	gcc -o test main.o read.o write.o

main.o: io.h main.c
	gcc -c main.c

read.o: io.h read.c
	gcc -c read.c

write.o: io.h write.c
	gcc -c write.c


all:
	gcc -Wall -O -o bit_swap bit_swap.c
	gcc -Wall -O -o arch_checker arch_checker.c

clean:
	rm bit_swap arch_checker *.o
