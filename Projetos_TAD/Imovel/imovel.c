#include <stdio.h>
#include <string.h>
#include "imovel.h"

//Imprimir informações de um vetor de imóveis.
void imprimir_informacoes(Imovel imoveis[], int tamanho){
    for (int i = 0; i < tamanho; i++) {
        printf("\n\n------ INFORMAÇOES DO IMOVEL -------");
        printf("\nProprietario: %s", imoveis[i].proprietario);
        printf("\nArea (em m²): %.1f", imoveis[i].area);
        printf("\nValor: %.1f", imoveis[i].valor);
        
        printf("\n\n\t | ENDERECO |\n");
        printf("\nRua: %s", imoveis[i].endereco.rua);
        printf("\nNumero: %d", imoveis[i].endereco.numero);
        printf("\nCidade: %s", imoveis[i].endereco.cidade);
    }
}

//Imprimir informações do imóvel mais barato de um vetor de imóveis.
void imovel_mais_barato(Imovel imoveis[], int tamanho){
    Imovel menor = imoveis[0];
    for (int i = 1; i < tamanho; i++) {
        if(imoveis[i].valor < menor.valor){
            menor = imoveis[i];
        }
    }
    
    printf("\n------ IMOVEL MAIS BARATO -------");
    printf("\nProprietario: %s", menor.proprietario);
    printf("\nArea (em m²): %.1f", menor.area);
    printf("\nValor: %.1f", menor.valor);
    
    printf("\n\n\t | ENDERECO |\n");
    printf("\nRua: %s", menor.endereco.rua);
    printf("\nNumero: %d", menor.endereco.numero);
    printf("\nCidade: %s", menor.endereco.cidade);
}

//*Capturar informações de um vetor de imóveis.
Imovel capturar_informacoes(Imovel imoveis[]){
    int posicao = 0;
    printf("Informe a posição: ");
    scanf("%d", &posicao);
    
    return imoveis[posicao];
}




