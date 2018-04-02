#include<stdio.h>
#include<string.h>
char palavra[50];

char funcaouppercase(){

strupr(palavra);

printf("\n A palavra em letras Maiusculas: %s", palavra);

return(palavra);
}

int main(){

printf("\n Entre com uma palavra em minusculo \n ");
gets(palavra);

funcaouppercase(palavra);

return 0;
}
