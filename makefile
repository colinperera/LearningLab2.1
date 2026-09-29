testCode: unitTest.o swapFind.o selectSort.o
	gcc unitTest.o swapFind.o selectSort.o -o testCode
swapFind.o: swapFind.c
	gcc -g -Wall -Wshadow -c swapFind.c
selectSort.o : selectSort.c
	gcc -g -Wall -Wshadow -c selectSort.c
main.o: unitTest.c
	gcc -g -Wall -Wshadow -c main.c
