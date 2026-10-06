#include<stdio.h>

int main(){
	
	int idade;
	char nome[25];
	
	while (idade != 0) {
		printf("\nInsira seu nome: ");
		scanf("%s", nome);
		printf("\nInsira sua idade: ");
		scanf("%d", &idade);
		
		if(idade >= 18){
			printf("\nVoce e de maior!");
		} else{
			printf("\nVoce e de menor!");
		}

        printf("\nDigite 0 para sair: ");
        scanf("%d", &idade);
	}
    printf("\nSeu sistema foi finalizado!");
	return 0;
}
