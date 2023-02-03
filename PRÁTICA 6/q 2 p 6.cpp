#include <stdio.h>

int main(){
	printf("\n\tDigite dez numeros");
	
	int valor[10];
	printf("\n\nDigite os numeros");
	
	
	for (int i=0; i<10; i++){
		scanf("%d", &valor[i]);
	if (valor[i]%2==0){
		valor[i] = 1;
	}else{ 
		valor[i] = -1;
		}
	}
	for (int i=0; i<10; i++){
		printf("%d ", valor[i]);
	}
	return 0;
}
