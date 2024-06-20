#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct cord {
    int x;
    int y;
}cord;

int calc_dist(cord p, cord q) {
    return (int)sqrt((pow(q.x - p.x,2)) + (pow(q.y - p.y,2)));
}

int main () {

    cord p, q;


    //ponto p
    printf("Digite o valor de x de P: ");
    scanf("%d", &p.x);
    printf("Digite o valor de y de P: ");
    scanf("%d", &p.y);

    //ponto q
    printf("Digite o valor de x de Q: ");
    scanf("%d", &q.x);
    printf("Digite o valor de y de Q: ");
    scanf("%d", &q.y);

    // Exibindo os valores armazenados na estrutura
    printf("%d", calc_dist(p,q));

    return 0;
};