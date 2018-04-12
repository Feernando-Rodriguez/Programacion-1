#include <stdio.h>
#include <stdlib.h>

int main()
{

    float listadoPrecios[5];
    int indice;
    float precioAux;




    indice=dameUnEnteroEntre(0,4);


    precioAux=dameUnFlotanteEntre(1,1000);


    listadoPrecios[indice]=precioAux;
































   /* int edad;
    float precio;
    int listadoEdades[5] = {22,33,44,11,55};
    float listadoPrecios[5];
    int i;

    edad=66;

    for(i=0 ; i<5 ; i++)
    {
        printf("%d: %d\n" ,i,listadoEdades[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        printf("%d:%.2f\n" ,i,listadoPrecios[i]);
    }
*/




/*

    printf("%d" , edad);


    printf("\n%d\n" ,& edad);
    printf("&listadoEdades:%d\n",&listadoEdades);
    printf("listadoEdades :%d\n" , listadoEdades);
    printf("listadoEdades [0] :%d\n" , listadoEdades);
    printf("&listadoEdades [0]:%d\n" ,& listadoEdades);
    printf("listadoEdades [4] :%d\n" ,listadoEdades);
    printf("listadoEdades [5] :%d\n" ,listadoEdades);
*/



    return 0;
}
