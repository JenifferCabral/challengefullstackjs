#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//AUTORA: CABRAL, JENIFFER VERONICA
//Generar un número aleatorio comprendido entre 0 y 1000. Pedir, a continuación, al
//usuario adivinar el número escogido por el ordenador. Para ello, debe introducir un
//número comprendido entre 0 y 1000. Se compara el número introducido con el
//calculado por el ordenador y se muestra en la consola "es mayor" o "es menor" en
//función del caso. Se repite la operación hasta que el usuario encuentra el número.


int main()
{
    int numero_random, numero_usuario;

    printf("\n\t----------------------------------------------------------\n");
    printf("\t\t\t\tBienvenido/a!\n");
    printf("\n\t\tAdivine el numero escogido por el ordenador!\t");
    printf("\n\t----------------------------------------------------------\n");

    srand(time(NULL));
    numero_random= rand()%1000+1;

    while (numero_usuario!=numero_random){

        printf("\n\tIngrese un numero entre 0 y 1000: \t");
        scanf("%d",&numero_usuario);

        if(numero_usuario==numero_random)//adivino
        {
            printf("\n\tFELICIDADES!! ADIVINO EL NUMERO!!\t\n");
        }
        else {
            if(numero_usuario>numero_random){
                printf("\n\tEs mayor\t\n");
            }
            else{
                printf("\n\tEs menor\t\n");
            }
        }

    }
    return 0;
}
