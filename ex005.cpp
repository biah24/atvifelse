//Escreva um programa que verifique se um ano informado pelo usu�rio � bissexto ou n�o.
#include<stdio.h>

int main(){
	int ano;
	printf("Digite o ano: ");
	scanf("%i", &ano);
	
	if (ano % 4 == 0){
		printf("O ano eh bissexto");
	}else{
		printf("O ano nao eh bissexto");
	}
}
