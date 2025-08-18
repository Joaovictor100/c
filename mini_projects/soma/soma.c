#include <stdio.h>

extern int soma(int a, int b);

int main() {
    int resultado = soma(5, 7);
    printf("Resultado: %d\n", resultado);
    return 0;
}
