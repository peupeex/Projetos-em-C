#include <stdio.h>
void tabuada(int n)
{
        for(int i = 1; i <= 9; i ++)
        {
            int resultado = n * i;
            printf("\n%d * %d = %d\n ", n, i, resultado);
            /*o \n no começo é apenas estético*/
        }
}


int main()
{
    int n;
    while(1)
    {
    printf("escreva um numero para imprimir a tabuada: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("qualquer numero multiplicado por 0 vai ser igual a 0.");
        break;
    }
    tabuada(n);
    }
system("pause");
return 0;

}

/*exercício 2 aula 4*/