#include <stdio.h>

int main() {
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if (a % 2 != 0) {
        printf("O numero é impar\n");
    } else {
        printf("O numero é par\n");
    }

    return 0;
}