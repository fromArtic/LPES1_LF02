#include <stdio.h>
#include <stdlib.h>

int main(){
    int custo_teatro, custo_convite, SemLucroOuPrejuizo, lucro23_convite;
    float lucro23_dinheiro;

    custo_teatro = 2665;
    custo_convite = 65;

    SemLucroOuPrejuizo = custo_teatro/custo_convite;
    lucro23_dinheiro = 23.0f*2665/100+custo_teatro;
    lucro23_convite = lucro23_dinheiro/custo_convite;

    printf("O gasto total com o espetaculo foi de %d reais e o preco de entrada estabelecido foi de %d reais por convite.\n\n", custo_teatro, custo_convite);
    printf("Para que o custo do espetaculo seja alcancado, deve-se vender ao menos %d convites.\n\n", SemLucroOuPrejuizo);
    printf("Para que haja um lucro de 23 porcento, equivalente a %.1f reais, devem ser vendidos %d ingressos.\n\n", lucro23_dinheiro, lucro23_convite);

    system("PAUSE");
    return 0;
}
