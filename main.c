#include<stdio.h>
#include<stdlib.h>

void selectSort(int *, int);

int main(int argc, char ** argv){
	int list[5] = {5, 3, 2, 1, 4};
	selectSort(list, 5);

	for(int i = 0; i < 5; i++){
		printf("%d\t", list[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
