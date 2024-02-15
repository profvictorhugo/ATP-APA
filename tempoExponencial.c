#include <stdio.h>
#include <stdlib.h>

int exemploExponencial(int n) {
    // Operação exponencial (fibonacci recursivo)
    if (n <= 1) {
        return n;
    }
    return exemploExponencial(n - 1) + exemploExponencial(n - 2);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Informe o valor de n durante a execução.\n\nUso: %s <valor de n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    int result = exemploExponencial(n);
    printf("Resultado: %d\n", result);
    return 0;
}
