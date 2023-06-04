#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED



#endif // RETANGULO_H_INCLUDED
/*Implemente um TAD na linguagem C para representar um
retângulo. Cada retângulo contém um campo (real) para
representar a largura e outro (real) para representa a altura.*/

typedef struct Retangulo_Est{
    float largura;
    float altura;
}Retangulo;

/*Posteriormente, implemente as seguintes operações para o
TAD:
◦ Capturar informações de 1 retângulo.
◦ Retornar o perímetro do retângulo (a soma de todos os lados).
◦ Retornar a área do retângulo (a multiplicação da altura pela
largura).*/

void capturar_informacoes(Retangulo *r);

float calcular_perimetro(Retangulo *r);

float calcular_area(Retangulo *r);
