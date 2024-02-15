#include <stdio.h>
#include <stdlib.h>

int operacoes_merge = 0;  // Contador global para operações de merge

// Função auxiliar para mesclar duas sub-listas ordenadas
void merge(int array[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = array[l + i];
    for (j = 0; j < n2; j++)
        R[j] = array[m + 1 + j];

    // Mescla as sub-listas de volta no array[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        operacoes_merge++;  // Incrementa a contagem de operações
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

// Função principal do Merge Sort que ordena o array[l..r] usando a função merge()
void mergeSort(int array[], int l, int r) {
    if (l < r) {
        // Encontra o ponto médio do array
        int m = l + (r - l) / 2;

        // Ordena as duas metades
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);

        // Mescla as metades ordenadas
        merge(array, l, m, r);
    }
}

// Função de impressão do array
void imprimirArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int array[n];

    // Preenche o array com os elementos fornecidos como argumentos
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array original:\n");
    imprimirArray(array, n);

    // Chamada da função Merge Sort
    mergeSort(array, 0, n - 1);

    printf("\nArray ordenado:\n");
    imprimirArray(array, n);

    printf("\nOperacoes de merge realizadas: %d\n", operacoes_merge);

    return 0;
}
