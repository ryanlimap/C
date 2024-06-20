#include <stdio.h>
#include <math.h>

// Definindo a estrutura para armazenar pontos no plano cartesiano
typedef struct {
    int x;
    int y;
} Ponto;

// Definindo a estrutura para representar segmentos de reta
typedef struct {
    Ponto ponto1;
    Ponto ponto2;
} SegmentoReta;

// Função para calcular a distância entre dois pontos
double calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Função para determinar o comprimento de um segmento de reta
double comprimentoSegmento(SegmentoReta segmento) {
    return calcularDistancia(segmento.ponto1, segmento.ponto2);
}

int main() {
    // Declarando e inicializando uma variável do tipo SegmentoReta
    SegmentoReta segmento = {{0, 0}, {3, 4}};

    // Calculando o comprimento do segmento de reta
    double comprimento = comprimentoSegmento(segmento);

    // Exibindo o comprimento do segmento de reta
    printf("O comprimento do segmento de reta é: %lf\n", comprimento);

    return 0;
}
