#include <stdio.h>
#include <stdlib.h>


//AUTORA: CABRAL, JENIFFER VERONICA
//Escribe una aplicaci�n que solicite al usuario que ingrese una contrase�a cualquiera.
//Despu�s se le pedir� que ingrese nuevamente la contrase�a, con 3 intentos. Cuando
//acierte ya no pedir� m�s la contrase�a y mostrar� un mensaje diciendo �Felicitaciones,
//record�s tu contrase�a�. Si falla luego de 3 intentos se mostrar� el mensaje �Tenes que
//ejercitar la memoria�. Los mensajes quedar�n en pantalla a la espera que el usuario
//presione una tecla, luego de esto se cerrar� el programa.


int main()
{
    int i, contrasenia, nuevamente;

    printf("\n\t----------------------------------------------------------\n");
    printf("\t\t\t\tBienvenido/a\n");
    printf("\n\t----------------------------------------------------------\n");

    printf("\n\tIngrese una contrasenia numerica: \t");
    scanf("%d",&contrasenia);

    for(i=1;i<=3;i++){
        printf("\n\tIngrese nuevamente la contrasenia: \t");
        scanf("%d",&nuevamente);
        if(nuevamente==contrasenia){
            printf("\n\tFelicitaciones, recordas tu contrasenia. \n");
            break;
        }
        if(i==3){
            printf("\n\tTenes que ejercitar la memoria. \n");
        }
    }
    return 0;
}
