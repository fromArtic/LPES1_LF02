#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor_kw, qtd_consumida, PagamentoResidencia, PagamentoResidencia_15, diferenca;

    printf("Qual o valor, em reais, do quilowatt de energia em sua residencia? ");
    scanf("%d", &valor_kw);

    printf("Qual a quantidade de energia consumida em um mes pela residencia, em quilowatts? ");
    scanf("%d", &qtd_consumida);

    PagamentoResidencia = valor_kw*qtd_consumida;
    PagamentoResidencia_15 = PagamentoResidencia-(15*PagamentoResidencia/100);
    diferenca = PagamentoResidencia - PagamentoResidencia_15;

    printf("\nO valor a ser pago pela energia eletrica eh de %d reais.\n\nCaso aplicado um desconto de 15 porcento, equivalente a uma diferenca de %d reais, o novo valor a ser pago totaliza %d reais.\n\n", PagamentoResidencia, diferenca, PagamentoResidencia_15);

    system("PAUSE");
    return 0;
}
