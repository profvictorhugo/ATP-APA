#include <stdio.h>
#include <stdlib.h>

unsigned long long operacoesMultiplicacao = 0;

void multiplicarMatrizes(int **matrizA, int **matrizB, int **resultado, int linhasA, int colunasA, int linhasB, int colunasB) {
    if (colunasA != linhasB) {
        printf("Erro: As dimensões das matrizes não são compatíveis para multiplicação.\n");
        return;
    }

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
                operacoesMultiplicacao++;
            }
        }
    }
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Informe o valor de n durante a execução.\n\nUso: %s <valor de n>\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    int colunasA, linhasB, colunasB, linhasA;
    colunasA = linhasB = colunasB = linhasA = n;

    // Aloca memória para as matrizes
    int **matrizA = (int **)malloc(linhasA * sizeof(int *));
    int **matrizB = (int **)malloc(linhasB * sizeof(int *));
    int **resultado = (int **)malloc(linhasA * sizeof(int *));
    for (int i = 0; i < linhasA; i++) {
        matrizA[i] = (int *)malloc(colunasA * sizeof(int));
        resultado[i] = (int *)malloc(colunasB * sizeof(int));
    }
    for (int i = 0; i < linhasB; i++) {
        matrizB[i] = (int *)malloc(colunasB * sizeof(int));
    }

    // Preenche as matrizes com valores arbitrários
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            matrizA[i][j] = i * colunasA + j + 1;
        }
    }

    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            matrizB[i][j] = i * colunasB + j + 1;
        }
    }

    // Multiplica as matrizes
    multiplicarMatrizes(matrizA, matrizB, resultado, linhasA, colunasA, linhasB, colunasB);


    // Libera a memória alocada
    for (int i = 0; i < linhasA; i++) {
        free(matrizA[i]);
        free(resultado[i]);
    }
    for (int i = 0; i < linhasB; i++) {
        free(matrizB[i]);
    }
    free(matrizA);
    free(matrizB);
    free(resultado);
    // Imprime o número de operações de multiplicação
    printf("\nOperacoes de multiplicacao realizadas: %e\n", (double)operacoesMultiplicacao);

    return 0;
}
