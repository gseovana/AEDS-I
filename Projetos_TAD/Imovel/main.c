/******************************************************************************

Faça o programa principal (main) para testar o TAD
criado. Utilize alocação dinâmica para criar 4 imóveis.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "imovel.h"

int main(){
    Imovel *imoveis;
    Imovel imovel1, imovel2, imovel3, imovel4;
    
    imoveis = (Imovel *) malloc(4*sizeof(Imovel));
    
    strcpy(imovel1.proprietario, "Ana");
    imovel1.area = 4450.5;
    imovel1.valor = 101000000;
    strcpy(imovel1.endereco.rua, "Pitangas");
    imovel1.endereco.numero = 10;
    strcpy(imovel1.endereco.cidade, "São Paulo");    
    
    imoveis[0] = imovel1;
   
    strcpy(imovel2.proprietario, "Paulo");
    imovel2.area = 44.2;
    imovel2.valor = 10500;
    strcpy(imovel2.endereco.rua, "Palmeira");
    imovel2.endereco.numero = 101;
    strcpy(imovel2.endereco.cidade, "Belo Horizonte");

    imoveis[1] = imovel2;
    
    strcpy(imovel3.proprietario, "Joaquina");
    imovel3.area = 100.2;
    imovel3.valor = 40410;
    strcpy(imovel3.endereco.rua, "Governador Pedrito");
    imovel3.endereco.numero = 10;
    strcpy(imovel3.endereco.cidade, "Palmas");
    
    imoveis[2] = imovel3;
    
    strcpy(imovel4.proprietario, "Benedito");
    imovel4.area = 50000.5;
    imovel4.valor = 50000;
    strcpy(imovel4.endereco.rua, "Secular");
    imovel4.endereco.numero = 14;
    strcpy(imovel4.endereco.cidade, "Belém");
    
    imoveis[3] = imovel4;
    
    Imovel esp = capturar_informacoes(imoveis);
    
    printf("\n------ IMOVEL ESPECIFICADO -------");
    printf("\nProprietario: %s", esp.proprietario);
    printf("\nArea (em m²): %.1f", esp.area);
    printf("\nValor: %.1f", esp.valor);
    
    printf("\n\n\t | ENDERECO |\n");
    printf("\nRua: %s", esp.endereco.rua);
    printf("\nNumero: %d", esp.endereco.numero);
    printf("\nCidade: %s", esp.endereco.cidade);
    
    imprimir_informacoes(imoveis, 4);
    imovel_mais_barato(imoveis, 4);
    
    free(imoveis);

}

