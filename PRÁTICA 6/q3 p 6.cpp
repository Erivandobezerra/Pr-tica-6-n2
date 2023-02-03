#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	printf("Digite 10 numeros e veja quais são pares");
	
	int n[10];
	
	printf("Digite os números:\n");
	for(int i=0; i<10; i++){
		scanf ("%d",&n[i]);
	}
	
	printf("Números pares digitados:\n");
	for(int i=0; i<10; i++){
		if(n[i]%2==0){
			printf ("%d",&n[i]);
		}
	}
	
	return 0; 
}
