#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	
	
	printf("DIGITE 10 N�MEROS E OS VEJA EM ORDEM CRESCENTE\n\n");
	
	int valor[10],x;
	
	printf("DIGITE OS N�MEROS:\n");
	for(int i=0;i<10;i++){
		scanf("%d",&valor[i]);
	}
	
	printf("N�MEROS Digitados:\n");
	for(int i=0;i<10;i++){
		for(int a=i; a<10;i++){
			if(valor[i] > valor[a]){
				x = valor [i];
				valor[i] = valor [a];
				valor [a] = x;
			}
		}
		printf("%d", valor[i]);
	}
	
	
	
	return 0;
}
