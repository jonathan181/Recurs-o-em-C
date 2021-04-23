#include<stdio.h>
#include<stdlib.h>

void multiplos(int n,int q,int aux, int * soma){
	*soma = *soma + q;
	printf("%d ", q);
	if(n > 1){
		multiplos (n-1,q+aux,aux,soma);
		
	}
		
}

int main(){
	int n,q,aux;
	int somaTT = 0;
	int * soma;
	
	scanf("%d %d", &n,&q);
	
	aux = q;
	soma = &somaTT;
	
	
	multiplos(n,q,aux,soma);
	
	printf("\n");
	printf("%d\n", *soma);

	return 0;
}
