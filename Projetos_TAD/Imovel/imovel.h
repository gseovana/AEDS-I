typedef struct Endereco_Est{
    char rua[201];
    int numero;
    char cidade[50];
}Endereco;

typedef struct Imovel_Est{
    char proprietario[101];
    float area;
    float valor;
    Endereco endereco;
}Imovel;


//Imprimir informações de um vetor de imóveis.
void imprimir_informacoes(Imovel imoveis[], int tamanho);

//Imprimir informações do imóvel mais barato de um vetor de imóveis.
void imovel_mais_barato(Imovel imoveis[], int tamanho);

//*Capturar informações de um vetor de imóveis.
Imovel capturar_informacoes(Imovel imoveis[]);