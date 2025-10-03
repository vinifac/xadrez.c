#include <stdio.h>

int main() {
    // ========================
    // Declaração de Variáveis
    // ========================
    // Define o número de casas que cada peça irá se mover.
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // Variáveis de controle para os laços while e do-while.
    int contador_bispo = 0;
    int contador_rainha = 0;
    
    printf("--- Movimento das Peças de Xadrez ---\n\n");

    // --- Movimento da Torre (usando for) ---
    // Simula o movimento da Torre casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n----------------------------------------\n\n");

    // --- Movimento do Bispo (usando while) ---
    // Simula o movimento do Bispo casas na diagonal.
    printf("--- Movimento do Bispo ---\n");
    while (contador_bispo < movimentosBispo) {
        printf("Cima, Direita\n");
        contador_bispo++; // Incrementa o contador para o laço terminar.
    }

    printf("\n----------------------------------------\n\n");

    // --- Movimento da Rainha (usando do-while) ---
    // Simula o movimento da Rainha casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    do {
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador.
    } while (contador_rainha < movimentosRainha);


    return 0;
}