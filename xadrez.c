#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Movimentação do Bispo com função recursiva e loops aninhados
void movimento_bispo(int movimento) {
    printf("Movimento do Bispo \n");
    for (int i = 1; i <= movimento; i++) {
        for (int j = 1; j < 2; j++)
        {
            printf("Direita\n");
        }
        
        printf("baixo \n");
        
    }
}

// Movimentação da Torre com função recursiva e loops
void movimento_torre(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        movimento_torre(movimento - 1); // Chamada recursiva para simular o movimento da Torre
    }
}

// Movimentação da Rainha com função recursiva e loops
void movimento_rainha(int movimento) {
    if (movimento > 0) {
        printf("Esquerda\n");
        movimento_rainha(movimento - 1); // Chamada recursiva para simular o movimento da Rainha
    }
}

void movimento_cavalo(int movimento_horizontal, int movimento_vertical) {
    printf("Movimento do Cavalo \n");
    for (int i = 1; i <= movimento_horizontal; i++) {
        for (int j = 1; j <= movimento_vertical; j++) {
            printf("Cima \n");
        }
        printf("Direita\n");
        printf("\n");
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_BISPO; // O Bispo pode se mover até 7 casas em diagonal
    const int MOVIMENTO_TORRE;  // A Torre pode se mover até 7 casas na horizontal ou vertical
    const int MOVIMENTO_RAINHA; // A Rainha pode se mover até 7 casas em qualquer direção
    const int movimento_horizontal = 1; // Variável para controle de movimentação horizontal do Cavalo
    const int movimento_vertical = 2;   // Variável para controle de movimentação vertical do Cavalo
    const int num1 = 1; // Variável para controle de movimentação da Torre
    const int num2 = 1; // Variável para controle de movimentação da Rainha


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Quantas casas o Bispo pode se mover? \n");
    scanf("%d", &MOVIMENTO_BISPO);
    movimento_bispo(MOVIMENTO_BISPO);

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Quantas casas a Torre pode se mover? \n");
    scanf("%d", &MOVIMENTO_TORRE);
    printf("Movimento da Torre \n");
    movimento_torre(MOVIMENTO_TORRE);

    printf("\n");
    printf("Movimento da Rainha \n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Quantas casas a Rainha pode se mover? \n");
    scanf("%d", &MOVIMENTO_RAINHA);
    printf("Movimento da Rainha \n");
    movimento_rainha(MOVIMENTO_RAINHA);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    movimento_cavalo(movimento_horizontal, movimento_vertical);
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
