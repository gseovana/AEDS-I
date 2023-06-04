/******************************************************************************

Implemente um TAD na linguagem C para
representar um pet. Cada pet contém os campos
nome (até 30 caracteres), idade (inteiro) e sexo (‘M’
para macho, ‘F’ para fêmea).
Posteriormente, implemente operações para o TAD:
◦ Capturar informações de 1 pet.
◦ Imprimir informações de 1 pet.
◦ Calcular a média de idade de um vetor de pets para um
determinado sexo, ou seja, media de idades de machos
ou de fêmeas.
Faça o programa principal (main) para testar o TAD
criado. Utilize alocação dinâmica para criar 3 pets.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pet.h"

int main()
{
    Pet teca;
    Pet pequena;
    Pet bob;
    Pet *pets;

    pets = (Pet*) malloc(3*sizeof(Pet));
    
    //TEQUINHA DE MAMAE
    strcpy(teca.nome, "Tecamiamor");
    teca.idade = 13;
    teca.sexo = 'F';
    pets[0] = teca;
    
    //PIQUITINHA
    strcpy(pequena.nome, "Pequituxa");
    pequena.idade = 10;
    pequena.sexo = 'F';
    pets[1] = pequena;

    
    //BOBINHO
    strcpy(bob.nome, "Bobson");
    bob.idade = 1;
    bob.sexo = 'M';
    pets[2] = bob;


    imprimir_informacoes(teca);
    imprimir_informacoes(pequena);
    imprimir_informacoes(bob);
    
    printf("\nMédia de idades de animais do sexo informado é: %.1f", calcular_media_idades(pets, 'M', 3));
    
    free(pets);
    
    return 0;
}

