#include <stdio.h>
int main(){
    int numeros[10];
    int maior=0,i;

    for(i=0;i<10;i++){
        printf("\n Entre com o numero do campo %d \n", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i]>maior)
        {
        maior=numeros[i];
        }
}
printf("\n Maior valor =%d", maior);

return 0;
}
