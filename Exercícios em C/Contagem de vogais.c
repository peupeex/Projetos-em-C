#include <stdio.h>

int count_vogais(char str[], char vogais)
{
    int cont = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == vogais)
        {
            cont++;
        }
        i++;
    }
    return cont;
}

int main()
{
    char frase[1000]; 
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    int resultado_a = count_vogais(frase, 'a');
    int resultado_e = count_vogais(frase, 'e');
    int resultado_i = count_vogais(frase, 'i');
    int resultado_o  = count_vogais(frase, 'o');
    int resultado_u = count_vogais(frase, 'u');

    int todas_vogais = resultado_a + resultado_e + resultado_i + resultado_o + resultado_u;
    printf("a letra 'a' aparece %d vezes na frase.\n", resultado_a);
    printf("a letra 'e' aparece %d vezes na frase.\n", resultado_e);
    printf("a letra 'i' aparece %d vezes na frase.\n", resultado_i);
    printf("a letra 'o' aparece %d vezes na frase.\n", resultado_o);
    printf("a letra 'u' aparece %d vezes na frase.\n", resultado_u);
    printf("as vogais aparecem um total de %d vezes na frase.\n", todas_vogais);
    system("pause");
    return 0;

}

/*exercício 3 aula 6*/