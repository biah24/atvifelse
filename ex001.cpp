#include<stdio.h>
//Fa�a um programa que receba um n�mero e informe se ele � positivo, negativo ou zero.

int main (){
	float num;
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if (num > 0){
		printf("Positivo");
	}else if (num < 0){
		printf("Negativo");
	}else {
		printf("zero");
	}
	
	
}

