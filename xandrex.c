#include <stdio.h>

// ========================
// Funções recursivas desafio nível mestre
// ========================

// Torre - horizontalmente para a direita
void moverTorre(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; 
    printf("Direita\n");                 
    moverTorre(movimentosRestantes - 1); 
}

// Rainha - horizontalmente para a esquerda
void moverRainha(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; 
    printf("Esquerda\n");                 
    moverRainha(movimentosRestantes - 1);
}

// Bispo - diagonal para cima e à direita usando recursão + loops aninhados
void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes <= 0) return; 
    for (int vertical = 0; vertical < 1; vertical++) {      
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(movimentosRestantes - 1);
}


int main() {
    // ========================
    // Declaração de Variáveis
    // ========================
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // Variáveis para Cavalo
    const int movimentosCavaloVertical = 2;  // Duas casas para cima
    const int movimentosCavaloHorizontal = 1; // Uma casa para a direita

    printf("--- Movimento das Peças de Xadrez ---\n\n");

    // --- Torre ---
    printf("--- Movimento da Torre ---\n");
    moverTorre(movimentosTorre);
    printf("\n----------------------------------------\n\n");

    // --- Bispo ---
    printf("--- Movimento do Bispo ---\n");
    moverBispo(movimentosBispo);
    printf("\n----------------------------------------\n\n");

    // -- Rainha ---
    printf("--- Movimento da Rainha ---\n");
    moverRainha(movimentosRainha);
    printf("\n----------------------------------------\n\n");

    // --- Cavalo ---
    printf("--- Movimento do Cavalo ---\n");
    // Loops complexos com múltiplas variáveis e controle de fluxo
    for (int l_move = 0; l_move < 1; l_move++) { 
        int contador_vertical = 0;
        while (contador_vertical < movimentosCavaloVertical) {
            printf("Cima\n");
            contador_vertical++;
            if (contador_vertical >= movimentosCavaloVertical) break; 
        }

        int contador_horizontal = 0;
        while (contador_horizontal < movimentosCavaloHorizontal) {
            printf("Direita\n");
            contador_horizontal++;
            if (contador_horizontal >= movimentosCavaloHorizontal) continue; 
        }
        break; 
    }

    return 0;
}