#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }
    
    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita %d\n", j);
        j++;
    }
    
    // Simulação do movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);
    
    return 0;
}
