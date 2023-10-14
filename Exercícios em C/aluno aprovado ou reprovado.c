#include <stdio.h>
int main()
{
    int alunos;
    printf("informe o numero de alunos: ");
    scanf("%d", &alunos);
    for(int i = 1; i <= alunos; i++)
    {
        float nota;
        printf("digite a nota do aluno %i (de 0 a 100): ", i);
        scanf("%f", &nota);
        if(nota > 100)
        {
            printf("numero invalido.");
            break;
        }
        if(nota >= 60)
        {
            printf("aluno %d aprovado\n", i);
            
        }
        else
        {
            printf("aluno %d reprovado\n", i);
        }

    }
system("pause");
return 0;
}


/*exercício 1 aula 4*/