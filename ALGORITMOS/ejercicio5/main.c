#include <stdio.h>
#include <stdlib.h>


//AUTORA: CABRAL, JENIFFER VERONICA
//Pedir al usuario que ingrese un n�mero repetidamente hasta que ingrese un -1 y en ese
//caso se terminar� el programa.
//Al terminar, mostrar� lo siguiente:
//a. � mayor n�mero introducido
//b. � menor n�mero introducido
//c. � suma de todos los n�meros
//d. � suma de los n�meros


int main()
{
    int numero, mayor, menor, suma;
    printf("\n\t----------------------------------------------------------\n");
    printf("\t\t\t\tBienvenido/a\n");
    printf("\n\t----------------------------------------------------------\n");

    printf("\n\tIngrese un numero: \t");
    scanf("%d",&numero);
    mayor=numero;
    menor=numero;

    while(numero!=-1){
        if(numero > mayor){
            mayor=numero;
        }
        else {
            menor=numero;
        }
        suma+=numero;
        printf("\n\tIngrese un numero: \t");
        scanf("%d",&numero);
    }

    printf("\n\t----------------------------------------------------------\n");
    printf("\n\tEl mayor numero introducido es: %d\t\n",mayor);
    printf("\n\tEl menor numero introducido es: %d\t\n",menor);
    printf("\n\tLa suma de todos los numeros introducidos es: %d\t\n",suma);
    printf("\n\t----------------------------------------------------------\n");


    return 0;
}
