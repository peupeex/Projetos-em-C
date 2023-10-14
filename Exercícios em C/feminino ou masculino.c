#include <stdio.h>

void info() {
    int i;
    for (i = 1; i <= 15; i++) {
        char sexo;
        int idade;
        printf("pessoa %d, informe seu sexo (M ou F): \n", i);
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f') {
            printf("responda apenas com M ou F\n");
            i--;
            continue;
        }

        printf("pessoa %d, informe sua idade: \n", i);
        scanf("%d", &idade);

        printf("pessoa %d, sexo %c, %d anos \n", i, sexo, idade);
    }
}

int main() {
    info();
    system("pause");
    return 0;

}

/*atividade 3 aula 4*/