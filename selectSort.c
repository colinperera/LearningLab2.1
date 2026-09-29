void swap(int *, int *);
int * lowest(int *, int);

void selectSort(int * list, int size){
	for(int i = 0; i < size - 1; i++){
		int * curr = list + i;
		swap(lowest(curr, size-1-i), curr);
	}
}
