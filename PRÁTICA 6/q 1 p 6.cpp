#include <stdio.h>

int main(){
	printf("Digite 10 numeros e veja os numeros pares em ordem de trá pra frente");
	
	int num[10];
	
	printf("\nDigite seus numeros\n");
	for(int i=0; i<10;i++){
		scanf("%d",&num[i]);
	}
	
	printf("numeros pares escolhidos por voce: ");
	for(int j=9;j>=0;j--){
		if(num[j]%2==0){
			printf("\n%d", num[j]);
		}
	}
	
	
	
	return 0;
}
