#include <stdio.h>

int main() {

    // MATRIZ DO TABULEIRO
    int tabuleiro[10][10];

    // VARIÁVEIS DE CONTROLE
    int linha, coluna;

    // INICIALIZA TABULEIRO COM ÁGUA (0)
    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            tabuleiro[linha][coluna] = 0;
        }
    }

    // TAMANHO DOS NAVIOS
    int tamanhoNavio = 3;

    // =========================
    // NAVIO HORIZONTAL
    // =========================

    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    if (colunaHorizontal + tamanhoNavio <= 10) {

        for (coluna = 0; coluna < tamanhoNavio; coluna++) {

            tabuleiro[linhaHorizontal][colunaHorizontal + coluna] = 3;
        }
    }

    // =========================
    // NAVIO VERTICAL
    // =========================

    int linhaVertical = 5;
    int colunaVertical = 1;

    if (linhaVertical + tamanhoNavio <= 10) {

        for (linha = 0; linha < tamanhoNavio; linha++) {

            tabuleiro[linhaVertical + linha][colunaVertical] = 3;
        }
    }

    // =========================
    // NAVIO DIAGONAL ↘
    // =========================

    int linhaDiagonal1 = 1;
    int colunaDiagonal1 = 0;

    if (linhaDiagonal1 + tamanhoNavio <= 10 &&
        colunaDiagonal1 + tamanhoNavio <= 10) {

        for (linha = 0; linha < tamanhoNavio; linha++) {

            // evita sobreposição
            if (tabuleiro[linhaDiagonal1 + linha][colunaDiagonal1 + linha] == 0) {

                tabuleiro[linhaDiagonal1 + linha][colunaDiagonal1 + linha] = 3;
            }
        }
    }

    // =========================
    // NAVIO DIAGONAL ↙
    // =========================

    int linhaDiagonal2 = 2;
    int colunaDiagonal2 = 9;

    if (linhaDiagonal2 + tamanhoNavio <= 10 &&
        colunaDiagonal2 - tamanhoNavio >= -1) {

        for (linha = 0; linha < tamanhoNavio; linha++) {

            // evita sobreposição
            if (tabuleiro[linhaDiagonal2 + linha][colunaDiagonal2 - linha] == 0) {

                tabuleiro[linhaDiagonal2 + linha][colunaDiagonal2 - linha] = 3;
            }
        }
    }

    // =========================
    // EXIBE TABULEIRO
    // =========================

    printf("===== TABULEIRO BATALHA NAVAL =====\n\n");

    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}