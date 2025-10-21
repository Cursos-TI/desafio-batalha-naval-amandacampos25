#include <stdio.h>

int main()
{

    char linha[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;

    for (int i = 0; i < 10; i++){
        for (char j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Adicionando o navio horizontal

    for (int i = 0; i < 3; i++){
        tabuleiro[3][7 + i] = 3;
    }

    // Adicionando o navio vertical

    for (int i = 0; i < 3; i++){
        tabuleiro[5 + i][3] = 3;
    }

    // Exibindo o tabuleiro

    printf("BATALHA NAVAL\n");

    for (int j = 0; j < 10; j++){
        printf("%c ", linha[j]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}