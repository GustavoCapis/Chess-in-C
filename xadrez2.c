#include <stdio.h>

// Função que move a torre para a direita
void moverTorre(int casas)
{
    // Verifica se ainda há casas para mover
    if (casas > 0)
    {
        printf("Direita \n");  // Imprime a direção do movimento
        moverTorre(casas - 1); // Chama a função recursivamente, decrementando o número de casas
    }
}

// Função que move a rainha para a esquerda
void moverRainha(int casas)
{
    // Verifica se ainda há casas para mover
    if (casas > 0)
    {
        printf("Esquerda \n");  // Imprime a direção do movimento
        moverRainha(casas - 1); // Chama a função recursivamente, decrementando o número de casas
    }
}

// Função que move o bispo em um padrão diagonal
void moverBispo(int casas)
{
    // Loop externo para controlar o movimento vertical (linhas)
    for (int i = 0; i < casas; i++)
    {
        // Loop interno para controlar o movimento horizontal (colunas)
        for (int j = 0; j < casas; j++)
        {
            // Verifica se estamos na diagonal (posição onde linha e coluna são iguais)
            if (i == j)
            {
                printf("Cima, Direita \n"); // Imprime a direção do movimento do bispo
            }
        }
    }
}

// Função principal do programa
int main()
{
    moverTorre(5);  // Chama a função para mover a torre 5 casas para a direita
    moverBispo(5);  // Chama a função para mover o bispo em um padrão diagonal
    moverRainha(8); // Chama a função para mover a rainha 8 casas para a esquerda

    return 0; // Indica que o programa terminou com sucesso
}