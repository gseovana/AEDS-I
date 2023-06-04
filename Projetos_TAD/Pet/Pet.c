#include "Pet.h"
#include <stdio.h>
#include <string.h>

const char* get_nome(Pet p){
    return strdup(p.nome);
}

int get_idade(Pet p){
    return p.idade;
}

char get_sexo(Pet p){
    return p.sexo;
}

void imprimir_informacoes(Pet p){
    printf("\n------- INFORMAÇÕES DO PET -------\n");
    printf("Nome do pet: %s", get_nome(p));
    printf("\nIdade do pet: %d", get_idade(p));
    printf("\nSexo do pet: %c\n", get_sexo(p));
}

float calcular_media_idades(Pet pets[], char sexo, int tamanho){
    float soma = 0;
    float cont = 0;
    for (int i = 0; i < tamanho; i++) {
        if(pets[i].sexo==sexo){
            soma += pets[i].idade;
            cont++;
        }
    }
    return (soma/cont);
}