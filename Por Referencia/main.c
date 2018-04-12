#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

//No olvidarme de colocar los corchetes []
void cambiarEntero(int numero);
void cambiarVector(int listadoDeNumeros[]);
void cargarVectorConMenosUno(int listado[]);

int main()
{

    int edad=22;
    int edades[3];
    int listado(cantidad);


    cambiarEntero(edad);
    printf("\n%d" ,edad);

    cambiarVector(edades);
    printf("\n%d" , edades [0]);

    return 0;
}
void cargarVectorConMenosUno(int listado[])
{
    int i;

    int tamanioArray=sizeof(listado);
    printf("\nEl tamaño es: %d",tamanioArray-1);

    for(i=0;i<tamanioArray;i++)
    {
        listado[i]=-1;
    }


}

void cambiarEntero(int numero)
{
    numero=666;
}

void cambiarVector(int listadoDeNumeros[0])
{
    listadoDeNumeros[0]=666;
}
