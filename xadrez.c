#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_BISPO = 5; // O Bispo pode se mover até 7 casas em diagonal
    const int MOVIMENTO_TORRE = 5;  // A Torre pode se mover até 7 casas na horizontal ou vertical
    const int MOVIMENTO_RAINHA = 8; // A Rainha pode se mover até 7 casas em qualquer direção
    int num1 = 1; // Variável para controle de movimentação da Torre
    int num2 = 1; // Variável para controle de movimentação da Rainha


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        // Simulação da movimentação do Bispo
        // Exemplo: O Bispo pode se mover para a direita e para baixo, então você pode usar um loop para incrementar as coordenadas.
        printf("Movimento do Bispo: direita, baixo %d\n", i);
        
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    while ( num1 <= MOVIMENTO_TORRE)
    {
        printf("Movimento da Torre: Direita %d\n", num1);
        num1++;
    }

    printf("\n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do {
        printf("Movimento da Rainha: Esquerda %d\n", num2);
        num2++;
    } while (num2 <+ MOVIMENTO_RAINHA);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
