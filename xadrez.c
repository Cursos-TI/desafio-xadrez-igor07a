#include <stdio.h>


void mover_torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}
void mover_bispo(int casas, int passos) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    mover_bispo(casas - 1, passos + 1);
}
void mover_rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}
void mover_cavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}
void mover_bispo_loops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("Cima, Direita\n");
        }
    }
}
int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
// Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre(casas_torre);
    printf("\n");
// Movimento do Bispo
    printf("Movimento do Bispo:\n");
    mover_bispo(casas_bispo, 0);
    printf("\n");
// Movimento da Rainha
    printf("Movimento da Rainha:\n");
    mover_rainha(casas_rainha);
    printf("\n");
// Movimento do Cavalo
    mover_cavalo();
    printf("\n");
// Movimento do Bispo com loops aninhados
    mover_bispo_loops(casas_bispo);
    printf("\n");

    return 0;
}
