#include <stdio.h>

int main() {

    // MATRIZ DO TABULEIRO
    
    int tabuleiro[10][10];
    
    // VARIÁVEIS DE CONTROLE
    
    int linha, coluna;

    // INICIALIZA TABULEIRO COM 0
    
    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            tabuleiro[linha][coluna] = 0;
        }
    }

    // DEFINIÇÃO DOS NAVIOS

    int tamanhoNavio = 3;

    // NAVIO HORIZONTAL
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    // NAVIO VERTICAL
    int linhaVertical = 5;
    int colunaVertical = 1;
    
    // VALIDAÇÃO SIMPLES

    // Verifica se cabe horizontalmente
    if (colunaHorizontal + tamanhoNavio <= 10) {

        for (coluna = 0; coluna < tamanhoNavio; coluna++) {

            tabuleiro[linhaHorizontal][colunaHorizontal + coluna] = 3;
        }
    }

    // Verifica se cabe verticalmente
    if (linhaVertical + tamanhoNavio <= 10) {

        for (linha = 0; linha < tamanhoNavio; linha++) {

            tabuleiro[linhaVertical + linha][colunaVertical] = 3;
        }
    }

    // EXIBE TABULEIRO

    printf("===== TABULEIRO BATALHA NAVAL =====\n\n");

    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}