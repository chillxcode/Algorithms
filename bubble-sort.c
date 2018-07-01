#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int*, int);
void randArray(int*, int);
void bubbleSort(int*, int);

int main(){
	srand(time(NULL));
	int array[10];
	int arrayLenght = sizeof(array) / sizeof(array[0]);

	randArray(array, arrayLenght);
	printArray(array, arrayLenght);
	bubbleSort(array, arrayLenght);
	printArray(array, arrayLenght);

	return 0;
}

void printArray(int* array, int arrayLenght){
	for(int i = 0; i < arrayLenght; i ++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void randArray(int* array, int arrayLenght){
	for (int i = 0; i < arrayLenght; i++ ){
		array[i] = rand() % 30;
	}
}

void bubbleSort(int* array, int arrayLenght){
	int tmp, i, j;
	for (i = 0; i < arrayLenght - 1; i++){
		for(j = 0; j < arrayLenght - i - 1; j++){
			if(array[j] > array[j + 1]){
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}