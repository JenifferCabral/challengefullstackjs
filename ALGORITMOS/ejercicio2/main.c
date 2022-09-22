#include <stdio.h>
#include <stdlib.h>


//AUTORA: CABRAL, JENIFFER VERONICA
//Escribe una aplicación que solicite al usuario que ingrese una contraseña cualquiera.
//Después se le pedirá que ingrese nuevamente la contraseña, con 3 intentos. Cuando
//acierte ya no pedirá más la contraseña y mostrará un mensaje diciendo “Felicitaciones,
//recordás tu contraseña”. Si falla luego de 3 intentos se mostrará el mensaje “Tenes que
//ejercitar la memoria”. Los mensajes quedarán en pantalla a la espera que el usuario
//presione una tecla, luego de esto se cerrará el programa.


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
