#include <stdio.h>

int main(){
    int i;
	char vChar[5];
	int vInt[5];
	double vDouble[5];
	
	printf("\n endereco de vChar = %ld", (long int)vChar);
	for (i = 0; i < 5; i++){
		printf("\n endereco de vChar[%d] = %ld", i, (long int)&vChar[i]);
	}
	
	printf("\n\n endereco de vInt = %ld", (long int)vInt);
	for (i = 0; i < 5; i++){
		printf("\n endereco de vInt[%d] = %ld", i, (long int)&vInt[i]);
	}
	
	printf("\n\n endereco de vDouble = %ld", (long int)vDouble);
	for (i = 0; i < 5; i++){
		printf("\n endereco de vDouble[%d] = %ld", i, (long int)&vDouble[i]);
	}
	
	return 0;
}