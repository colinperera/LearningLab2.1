#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


void swap(int *, int *);
int * lowest(int *, int);
void selectSort(int *, int);

void swapTest(int * data, int ind1, int ind2){
	int original1 = *(data + ind1);
	int original2 = *(data + ind2);

	swap((data + ind1), (data + ind2));

	if(original1 != *(data + ind2) || original2 != *(data + ind1)){
		printf("ERROR: FAILED SWAPPING TEST\n");
	}
}

void lowestTest(int * data, int size){
	int lowestVal = data[0];
	for(int i = 1; i < size; i++){
		if(data[i] < lowestVal){
			lowestVal = data[i];
		}
	}

	int * lowestPtr = lowest(data, size);

	if(*lowestPtr != lowestVal){
		printf("ERROR: FAILED FINDING LOWEST VALUE\n");
	}
}

int main(int argc, char ** argv){
	//Used to generate random numbers
	srand(time(0)); 

	int list[100];
	for(int i = 0; i < 100; i++){
		list[i] = rand() % 100;;
	}
	
	swapTest(list, rand() % 100, rand() % 100);
	lowestTest(list, 100);

	//Ollie was here

	return EXIT_SUCCESS;
}
