#include <stdio.h>
#include <stdlib.h>

//AUTORA: CABRAL, JENIFFER VERONICA
//1. Pide un número por teclado e indica si es un número primo o no. Un número primo es
//aquel que solo puede dividirse entre 1 y sí mismo. Por ejemplo: 25 no es primo, ya que
//25 es divisible entre 5, sin embargo, 17 si es primo.


int main()
{
    int i, numero=0, cont=0;
    printf("\n\t----------------------------------------------------------\n");
    printf("\t\t\t\tBienvenidos\n");
    printf("\t\tVamos a calcular si un numero es primo");
    printf("\n\t----------------------------------------------------------\n");

    printf("\n\tIngrese un numero: \t");
    scanf("%d",&numero);

    for(i=1; i<=numero; i++){
        if(numero%i==0){
            cont++;
        }
    }
    if(cont>2){//si es divisible por mas numeros...
        printf("\n\tUPS!! El numero ingresado no es primo\n");
    }
    else {//es divisible por 1 y por si mismo...
        printf("\n\tFelicidades!! El numero ingresado es primo\n");
    }
    return 0;
}

