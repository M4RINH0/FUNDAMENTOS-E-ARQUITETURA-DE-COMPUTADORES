#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, V; // Número de aeroportos (A) e número de voos (V)
    int i, X, Y;

    int teste = 1; // Número do teste

    do {
        scanf("%d %d", &A, &V);

        if (A == 0 && V == 0) {
            break; // Saia do loop se A e V forem ambos zero
        }

        // Aloca dinamicamente o array para armazenar o tráfego de cada aeroporto
        int *trafego = (int *)malloc((A + 1) * sizeof(int));

        // Inicializa o tráfego de cada aeroporto como zero
        for (i = 1; i <= A; i++) {
            trafego[i] = 0;
        }

        // Lê os voos e atualiza o tráfego de cada aeroporto
        for (i = 0; i < V; i++) {
            scanf("%d %d", &X, &Y);
            trafego[X]++;
            trafego[Y]++;
        }

        // Encontra o aeroporto com o maior tráfego
        int max_trafego = 0;
        for (i = 1; i <= A; i++) {
            if (trafego[i] > max_trafego) {
                max_trafego = trafego[i];
            }
        }

        // Imprime o resultado
        printf("\nTeste %d\n", teste++);
        for (i = 1; i <= A; i++) {
            if (trafego[i] == max_trafego) {
                printf("%d ", i);
            }
        }
        printf("\n\n");

        // Libera a memória alocada
        free(trafego);

    } while (A != 0 || V != 0);

    return 0;
}
