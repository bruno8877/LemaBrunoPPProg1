#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Ejercicio 3 Falto terminar llamar la funcion en main y hardcodear
typedef struct
{
    int id;
    int precio;
    char marca[51];
    char procesador[51];
}eNotebook;

float aplicarDescuento(float precio);
int contarCaracteres(char cadena[], char caracter);
void Ordenamiento(eNotebook vec[], int tam);

int main()
{
   //Ejercicio 1 TERMINADO
  /*int precio;
   int precionDescuento;
   printf("Ingrese el precio que quiere hacer el descuento:");
   scanf("%d", &precio);
   precionDescuento = aplicarDescuento(precio);

   printf("El precio es %d y con el descuento del 5 porciento quedaria en: %d",precio, precionDescuento);*/


    //Ejercicio 2 TERMINADO
   /* char cadena[100];
    char caracter;

    printf("Escribe una cadena:\n");
    gets(cadena);

    printf("Que caracter quiere contar:\n");
    scanf("%c", &caracter);

    int ContCaracter = contarCaracteres(cadena, caracter);
    printf("El caracter a contar es %c y se repite %d veces \n",caracter, ContCaracter);*/

    return 0;
}

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
            i++;
    }
    return contador;
}

float aplicarDescuento(float precio)
{
   float precioTotal;

   precioTotal=precio-precio*0.05;

   return precioTotal;
}

void Ordenamiento(eNotebook vec[], int tam)
{
    eNotebook Aux;

     for(int i =0; i<tam - 1; i++)
    {
        for(int j = i+1; j< tam ; j++)
        {
            if(strcmp(vec[i].marca, vec[j].marca) > 0) //primer criterio
            {
                Aux = vec[i];
                vec[i] = vec[j];
                vec[j] = Aux;
            }
          else if(strcmp(vec[i].marca, vec[j].marca) == 0 && vec[i].precio > vec[j].precio)
            {
                 Aux = vec[i];
                vec[i] = vec[j];
                vec[j] = Aux;
            }

        }
    }
}
