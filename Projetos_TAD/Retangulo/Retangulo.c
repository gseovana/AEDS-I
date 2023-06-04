#include <stdio.h>
#include "Retangulo.h"

void capturar_informacoes(Retangulo *r){
    printf("A altura do retangulo e: %.2f\n", r->altura);
    printf("A largura do retangulo e: %.2f", r->largura);
}

float calcular_perimetro(Retangulo *r){
    return r->altura*2+r->largura*2;
}

float calcular_area(Retangulo *r){
    return r->altura*r->largura;
}
