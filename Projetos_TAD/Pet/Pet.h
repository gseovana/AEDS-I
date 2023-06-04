/*Cada pet contém os campos
nome (até 30 caracteres), idade (inteiro) e sexo (‘M’
para macho, ‘F’ para fêmea).
Posteriormente, implemente operações para o TAD:
◦ Capturar informações de 1 pet.
◦ Imprimir informações de 1 pet.
◦ Calcular a média de idade de um vetor de pets para um
determinado sexo, ou seja, media de idades de machos
ou de fêmeas.*/

typedef struct Pet_Est{
    char nome[31];
    int idade;
    char sexo;
}Pet;

void imprimir_informacoes(Pet p);
const char* get_nome(Pet p);
int get_idade(Pet p);
char get_sexo(Pet p);
float calcular_media_idades(Pet pets[], char sexo, int tamanho);