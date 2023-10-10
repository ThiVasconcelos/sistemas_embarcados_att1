#include <stdio.h>

void inputMatriz(int matriz[][1920], int linhas, int colunas) {
    printf("Valores digitados para a matriz (por linha):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void inverterImagem(int matriz[][1920], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 255 - matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[][1920], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    printf("Número de linhas: ");
    scanf("%d", &linhas);
    printf("Número de colunas: ");
    scanf("%d", &colunas);

    int matriz[1080][1920];
    inputMatriz(matriz, linhas, colunas);
    inverterImagem(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}
