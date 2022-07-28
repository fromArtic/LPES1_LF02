#include <stdio.h>
#include <stdlib.h>

int main(){
    float km_por_litro, tempo, combustivel_gasto;
    int velocidade_media;

    printf("Quantos km por litro faz seu automovel? ");
    scanf("%f", &km_por_litro);
    printf("- %.1f km por litro.\n\n", km_por_litro);

    printf("Quanto tempo durou sua viagem, em horas? ");
    scanf("%f", &tempo);
    printf("- %.1f horas.\n\n", tempo);

    printf("E qual foi sua velocidade media durante o percurso, em km/h? ");
    scanf("%d", &velocidade_media);
    printf("- %d km/h.\n\n", velocidade_media);

    combustivel_gasto = tempo*velocidade_media/km_por_litro;
    printf("Foram gastos %.1f litros de combustivel com a viagem.\n", combustivel_gasto);

    system("PAUSE");
    return 0;
}
