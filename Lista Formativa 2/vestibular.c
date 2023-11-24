#include <stdio.h>

int main()
{
    int quantidade, nota = 0;

    printf("Digite a quantidade de questões que tem a prova: ");
    scanf("%d", &quantidade);
    
    char gabarito[quantidade], respostas[quantidade];

    printf("Digite o gabarito da prova em letras maiúsculas:\n");
    scanf("%s", gabarito);

    printf("Agora digite as respostas do aluno:\n");
    scanf("%s", respostas);

    for(int i=0; i < quantidade; i++){
        if (respostas[i] == gabarito[i])
        {
            nota ++;
        }
        
    }
    printf("A nota do aluno é: %d\n", nota);

    return 0;
}
