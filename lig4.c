#include <stdio.h>
#include <stdlib.h>

void imprimirTabuleiro(int tabuleiro[6][7]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("| ");
            } else if (tabuleiro[i][j] == 1) {
                printf("|X");
            } else if (tabuleiro[i][j] == 2) {
                printf("|O");
            }
        }
        printf("|\n");
    }
    for (int i = 1; i < 8; i++) {
        printf(" %d", i);
    }
    printf("\n");
}

int inserirJogada(int tabuleiro[6][7], int coluna, int jogador) {
    if (coluna < 0 || coluna >= 7) {
        printf("Coluna inválida. Tente novamente.\n");
        return 0;
    }
    for (int i = 5; i >= 0; i--) {
        if (tabuleiro[i][coluna] == 0) {
            tabuleiro[i][coluna] = jogador;
            return 1;
        }
    }
    printf("Coluna cheia. Tente novamente.\n");
    return 0;
}

int ganhador(int tabuleiro[6][7], int jogador) {
	return 0;
}

int main() {
    int colunaEscolhida, jogadas = 0, jogador = 1, condicao = 1;
    int tabuleiro[6][7];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    imprimirTabuleiro(tabuleiro);
    while (condicao) 
    {
        printf("Jogador %d, escolha uma coluna (1-7): ", jogador);
        scanf("%d", &colunaEscolhida);

        if (inserirJogada(tabuleiro, colunaEscolhida - 1, jogador)) 
        {
            imprimirTabuleiro(tabuleiro);
            jogadas++;

            if (ganhador(tabuleiro, jogador)) 
            {
                printf("Jogador %d ganhou!\n", jogador);
                condicao = 0;
            }
            else 
            {
                if (jogadas == 42) 
                {
                    printf("Empate! O tabuleiro esta cheio.\n");
                    condicao = 0;
                }
                else 
                {
                    if(jogador == 1)
                    {
                        jogador = 2;
                    }
                    else 
                    {
						jogador = 1;
                    }
                } 
            }
        }
    }
    return 0;
}