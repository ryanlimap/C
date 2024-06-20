#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct horario {
    int hora;
    int min;
    int seg;
}horario;


int main() {
    horario h1 = {10,20,30};

    printf("%02d:%02d:%02d", h1.hora, h1.min, h1.seg);


    return 0;
};