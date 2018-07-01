#include <stdio.h>

#define MAX 20

int intArray[MAX] = {1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66};

void search(int sayi){
	int i=0;
	while( (i < MAX) && (intArray[i] != sayi) ){
		i++;
	}
	if(i < MAX)
		printf("\nSayı %d Bulundu.\n", intArray[i]);
	else
		printf("\nBulunamadı\n");
}

int main(){
	int sayi;
	printf("Sayı: ");
	scanf("%d", &sayi);
	search(sayi);
	return 0;
}