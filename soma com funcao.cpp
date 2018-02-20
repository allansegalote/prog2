#include <stdio.h>
int soma(int a, int b){
 int soma;
 soma = a + b;
 printf("%d", soma);
 return 0;
}


int main(){
int a, b;
printf("\n Entre com o Valor de A: \n");
scanf("%d", &a);
printf("\n Entre com o Valor de b: \n");
scanf("%d", &b);
    
	
soma(a,b);


	
	return 0;
}
