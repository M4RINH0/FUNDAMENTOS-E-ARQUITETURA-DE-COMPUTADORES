#include <stdio.h>

int main() {
    int i, j, n;
    int A[100]; // Suponha que você tenha um array A com tamanho suficiente

    // Lendo valores de i, j e n
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Relacionado a i
    i *= 4;
    i += 16; // Suponha que $s0 seja um endereço base adequado

    // Relacionado a j
    j *= 4;
    j += 16; // Suponha que $s0 seja um endereço base adequado

    // A[j]
    int Aj = A[j / 4];

    // A[j] + N
    int AjPlusN = Aj + n;

    // A[i] = A[j] + N
    A[i / 4] = AjPlusN;

    return 0;
}
