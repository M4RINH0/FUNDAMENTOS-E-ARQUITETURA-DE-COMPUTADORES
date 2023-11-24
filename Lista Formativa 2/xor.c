#include <stdio.h>

int main()
{
    int N, X, Y;
    printf("Digite a quantidade de operações serão realizadas: ");
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        printf("Digite X e Y seguidos de um espaço \n");
        scanf("%d %d", &X, &Y);
        // 1 para falso, 2 para verdadeiro
        if(X == Y){
            printf("1\n");
        }else{
            printf("2\n");
        }

    }

    return 0;
}
