#include <stdio.h>

int main() {
    
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }
    

    
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);
    
    return 0;
}