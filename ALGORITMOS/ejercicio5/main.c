#include <stdio.h>
#include <stdlib.h>


//AUTORA: CABRAL, JENIFFER VERONICA
//Pedir al usuario que ingrese un número repetidamente hasta que ingrese un -1 y en ese
//caso se terminará el programa.
//Al terminar, mostrará lo siguiente:
//a. – mayor número introducido
//b. – menor número introducido
//c. – suma de todos los números
//d. – suma de los números


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
