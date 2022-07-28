#include <stdio.h>
#include <stdlib.h>

int main(){
    int diaria_valor, TotalDeDiariasNoHtl, arrecadacao_100, diferenca;
    float diaria_promocao, arrecadacao_70;

    diaria_valor = 167;
    diaria_promocao = diaria_valor-25.0f*diaria_valor/100;
    TotalDeDiariasNoHtl = 84;
    arrecadacao_100 = TotalDeDiariasNoHtl*diaria_promocao;
    arrecadacao_70 = 70*TotalDeDiariasNoHtl/100*diaria_promocao;
    diferenca = diaria_valor*TotalDeDiariasNoHtl-arrecadacao_100;

    printf("Aplicando-se um desconto de 25 porcento sobre o preco da diaria do hotel, o novo valor equivale a %.1f reais.\n\n", diaria_promocao);
    printf("Considerando a promocao, o total arrecadado caso todos os apartamentos sejam ocupados sera de %d reais.\n\n", arrecadacao_100);
    printf("Caso a ocupacao total atinja 70 porcento, o total arrecadado sera de %.1f reais\n\n", arrecadacao_70);
    printf("Assim, considerando a diferenca de fatura entre o arrecadamento recebido durante uma lotacao completa dos apartamentos, com e sem o desconto, o hotel deixara de arrecadar %d reais em virtude da promocao.\n\n", diferenca);

    system("PAUSE");
    return 0;
}
