#include<stdio.h>


void primos(int n2,int n1, int cont){		
	int i,contLocal=0;

	if(n2<n1){
		printf("%d\n",cont);
		return;
	}
	for(i=2;i<=n2/2;i++){		
		if(n2%i==0){
			contLocal++;	
		}
	}
		
	if(contLocal==0){
		cont++;
	}
	
	primos(n2-1,n1,cont);
	
	if(contLocal==0){
		printf("%d ",n2);
	} 	
		
		
}

int main(){
	
	int n1,n2,n3=0;
	
	scanf("%d %d", &n1, &n2);
	
	primos(n2,n1,n3);
	return 1;
}
