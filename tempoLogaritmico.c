#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Informe o valor de n durante a execução.\n\nUso: %s <valor de n>\n", argv[0]);
        return 1;
    }
    long long n = atoll(argv[1]);
    int operacoes = 0;
    // Operação logarítmica (dividir pela metade até n ser 1)
    while (n > 1) {
        printf("%lld\n", n);
        n /= 2;
        operacoes++;
    }
    printf("Operações realizadas: %d\n", operacoes);
    return 0;
}
