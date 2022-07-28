#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(){
    char nome[MAX];
    int idade;
    char sexo;

    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    getchar();
    printf("Digite seu sexo: ");
    sexo = getch();
    //getch: sem enter, getchar: apenas apos o enter

    printf("\nSeu nome eh: %s\ - Sua idade eh: %d - Seu sexo: %c\n", nome, idade, sexo);

    system("PAUSE");
    return 0;
}
