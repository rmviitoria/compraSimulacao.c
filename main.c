/******************************************************************************

Crie um programa que lê o preço de um determinado produto. 
Em seguida, simule a compra de X produtos (onde X deve ser solicitado para o usuário pelo teclado), 
imprimindo o valor total da compra com 2 casas decimais e com o símbolo de reais na frente do valor ("R$").
Caso a quantidade de produtos indicada seja negativa, não realize a conta e imprima uma mensagem de erro.


*******************************************************************************/
#include <stdio.h>


int main() {
    float preco_produto;
    int quantidade;
    float total;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco_produto);

    if (preco_produto < 0) {
        printf("Erro: O preço do produto não pode ser negativo.\n");
        return 1; 
    }

    printf("Digite a quantidade de produtos a serem comprados: ");
    scanf("%d", &quantidade);

    if (quantidade < 0) {
        printf("Erro: A quantidade de produtos não pode ser negativa.\n");
        return 1;
    }

    total = preco_produto * quantidade;

    printf("O valor total da compra é: R$%.2f\n", total);

    return 0;
}
