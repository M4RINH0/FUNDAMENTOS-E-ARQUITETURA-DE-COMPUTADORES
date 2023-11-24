#include <stdio.h>

int main()
{
    int n, maior = 0;
    printf("Digite quantos números devem ser lidos: ");
    scanf("%d", &n);

    int x[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(x[i] > maior){
            maior = x[i];
        }
    }
    printf("%d\n", maior);
}