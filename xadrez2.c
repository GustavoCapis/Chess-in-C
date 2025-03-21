#include <stdio.h>

int main()
{
    // Declaração da variável de controle de loop
    int i;

    // Mover a torre 5x para a direita  utilizando for
    printf("Movimentação da Torre:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Mover o bispo 5 vezes para diagonal =(cima + direita) utilizando do-while
    printf("\nMovimentação do Bispo:\n");
    i = 0; // Reinicializa a variável de controle
    do
    {
        printf("Cima, Direita\n");
        i++; // Incrementa o contador para avançar no loop
    } while (i < 5); // Repete até que o Bispo tenha se movido 5 vezes

    // Mover a rainha 8x para a esquerda utilizando while
    printf("\nMovimentação da Rainha:\n");
    i = 0; // Reinicializa a variável de controle
    while (i < 8)
    {
        printf("Esquerda\n");
        i++; // Incrementa o contador para evitar um loop infinito
    }

    // Atribuíção de uma variável para simular movimento do cavalo, ela terá o trabalho de contar quantas vezes o cavalo irá se mexer
    int movimentoCavalo = 1; // Atribuir o valor de 1 significa que o cavalo vai se movimentar apenas uma vez

    printf("\nMovimentação do Cavalo\n"); // Pula uma linha

    while (movimentoCavalo--) // Após executar com o valor inicial 1 o decremento transforma o valor da variável em 0 e o loop acaba
    {
        for (int i = 0; i < 2; i++) // A variável i tem o trabalho de dizer quantas casas o cavalo vai andar dentro dessa uma movimentação
        {
            printf("Baixo \n"); // Imprime baixo 2x
        }
        printf("Esquerda \n"); // Imrpime esquerda apenas uma vez ao terminar o loop interno
    }

    // Retorna 0 para indicar que o programa finalizou com sucesso
    return 0;
}
