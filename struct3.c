#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct voo {
    char origem[100];
    char dest[100];
}voo;


int main() {
    // Inicializando uma variável do tipo Voo diretamente
    //voo pr = {"RJ", "SP"};

    //Inicializando uma variável do tipo voo ponto a ponto
    voo pr;

    snprintf(pr.origem, sizeof(pr.origem), "Sao Paulo");
    snprintf(pr.dest, sizeof(pr.dest), "Rio de Janeiro");

    printf("Origem: %s\nDestino: %s", pr.origem, pr.dest);

    return 0;
};