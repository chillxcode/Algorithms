#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randArray(int*, int);
void printArray(int*, int);
void sortArray(int*, int);

int main(int argc, char const *argv[]){
	srand(time(NULL));
	int array[10];
	int lenght =( sizeof(array) / sizeof(array[0]) );

	randArray(array, lenght);
	printArray(array, lenght);
	sortArray(array, lenght);
	printArray(array, lenght);

	return 0;
}

void randArray(int* array, int lenght){
	for (int i = 0; i < lenght; i++){
		array[i] = rand() % 30;
	}
}

void printArray(int* array, int lenght){
	for (int i = 0; i < lenght; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void sortArray(int* array, int lenght){
	int tmp, j;
	for (int i = 1; i < lenght; ++i){
		tmp = array[i];
		j = i - 1;
		while(j >= 0 && (array[j] > tmp)){
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = tmp;
	}
}