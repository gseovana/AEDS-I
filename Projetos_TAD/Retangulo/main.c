#include <stdio.h>
#include <stdlib.h>
#include "Retangulo.h"

/*Faça o programa principal (main) para testar o TAD criado.
Utilize alocação dinâmica para criar 2 retângulos.*/

int main()
{
    Retangulo *r1;
    Retangulo *r2;
    float perimetro, area;

    r1 = (Retangulo*) malloc (sizeof(Retangulo));
   
    r1->altura = 10;
    r1->largura = 10.5;

    printf("Perimetro: %.2f", calcular_perimetro(r1));
    printf("\nArea: %.2f\n", calcular_area(r1));
    capturar_informacoes(r1);
   
    r2 = (Retangulo*) malloc (sizeof(Retangulo));


    r2->altura = 2;
    r2->largura = 4;

    printf("\n\nPerimetro: %.2f", calcular_perimetro(r2));
    printf("\nArea: %.2f\n", calcular_area(r2));
    capturar_informacoes(r2);

   return 0;
}

