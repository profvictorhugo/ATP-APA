#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int operacoes = 0;
    int n;
    scanf("%d", &n);
    int array[n];

    // Preenche o array com os elementos fornecidos como argumentos
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    //int array[] = {5, 2, 1, 7, 3};
    // Operação quadrática (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            operacoes++;
        }
    }

    printf("\nArray ordenado:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    printf("\nOperacoes de realizadas: %d\n", operacoes);
    return 0;
}
