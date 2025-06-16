#include <stdio.h>
// Constantes para quantidade de movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Documentação inicial
    printf("Simulador de Movimentação de Peças (MateCheck)\n\n");

    // ==============================
    // Movimentação do Bispo
    // ==============================
    // O bispo se move 5 vezes na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        // Simula a movimentação para a diagonal superior direita
        printf("Movimento %d: ", i);
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // ==============================
    // Movimentação da Torre
    // ==============================
    // A torre se move 5 casas para a direita
    printf("Movimentação da Torre:\n");
    int contadorTorre = 0;
    while (contadorTorre < MOV_TORRE) {
        contadorTorre++;
        printf("Movimento %d: Direita\n", contadorTorre);
    }
    printf("\n");

    // ==============================
    // Movimentação da Rainha
    // ==============================
    // A rainha se move 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    int contadorRainha = 0;
    do {
        contadorRainha++;
        printf("Movimento %d: Esquerda\n", contadorRainha);
    } while (contadorRainha < MOV_RAINHA);
    printf("\n");

    return 0;
