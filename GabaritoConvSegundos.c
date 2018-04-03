#include <stdio.h>

int conversor(int a,int b,int c){
    int resultado;
    //Formula: 1 Hora = 3600 segundos e 1 Minuto = 60 segundos

    a=a*3600;
    b=b*60;

    resultado=a+b+c;
    printf("\nA hora convertida em segundos eh: %d",resultado);

    return a,b,c;

}


int main(){

    int hora, min, seg;

    printf("Conversor de Horas para segundos\n");

    printf("Digite as hora:\n");
    scanf("%d",&hora);
    printf("Digite os minutos:\n");
    scanf("%d",&min);
    printf("Digite os segundos:\n");
    scanf("%d",&seg);

    conversor(hora,min,seg);

    return 0;
}

