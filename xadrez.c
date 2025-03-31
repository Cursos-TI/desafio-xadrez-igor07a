#include <stdio.h>

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_cavalo_vertical = 2; // Duas casas para baixo
    int casas_cavalo_horizontal = 1; // Uma casa para a esquerda

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);

    printf("\n");

    // Movimento do Cavalo (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < casas_cavalo_vertical; i++) {
        printf("Baixo\n");
    }

    int l = 0;
    while (l < casas_cavalo_horizontal) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
