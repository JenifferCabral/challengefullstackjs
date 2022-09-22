#include <stdio.h>
#include <stdlib.h>


//AUTORA: CABRAL, JENIFFER VERONICA
//Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el
//nombre del empleado, la antigüedad y la cantidad de horas trabajadas en el mes. Se
//pide calcular el importe a cobrar teniendo en cuenta que al total que resulta de
//multiplicar el valor hora por la cantidad de horas trabajadas. Además, si el empleado
//tiene más de 10 años de antigüedad hay que sumarle la cantidad de años trabajados
//multiplicados por $30. Imprimir en pantalla el nombre, la antigüedad y el total a cobrar.


int main()
{
    float valorhr, antiguedad, horastrab, total;
    char nombre[20];
    printf("\n\t----------------------------------------------------------\n");
    printf("\t\t\t\tBienvenido/a\n");
    printf("\n\t----------------------------------------------------------\n");

    printf("\n\tIngrese el valor por hora: \t");
    scanf("%f",&valorhr);
    fflush(stdin);
    printf("\n\tIngrese el nombre del empleado: \t");
    gets(nombre);
    fflush(stdin);
    printf("\n\tIngrese la antiguedad: \t");
    scanf("%f",&antiguedad);
    fflush(stdin);
    printf("\n\tIngrese la cantidad de horas trabajadas en el mes: \t");
    scanf("%f",&horastrab);
    fflush(stdin);

    total= valorhr * horastrab;

    if(antiguedad>10){
        total += (antiguedad *30);
    }

    printf("\n\t----------------------------------------------------------\n");
    printf("\n\t\t\t\tEMPLEADO\t\n");
    printf("\n\tNombre: \t");
    puts(nombre);
    printf("\n\tAntiguedad: %.2f\t\n",antiguedad);
    printf("\n\tTotal a cobrar: %.2f\t\n",total);
    printf("\n\t----------------------------------------------------------\n");

    return 0;
}
