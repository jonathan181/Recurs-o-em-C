#include<stdio.h>

void imprime(int n){
	if(n > 1){
		imprime(n-1);
	}
	
	printf("%d ", n);
	
	
}


int main(){
	int n,i;
	scanf("%d", &n);
	
	imprime(n);
	printf("\n");
	//printf("teste\n");
	return 0;
}
