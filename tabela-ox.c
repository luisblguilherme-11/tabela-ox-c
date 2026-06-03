#include <stdio.h>

#include "function_validar.c"

int main(int argc, char *argv[])
{
    char tabela[3][3];

    if(argc == 10)
    {
        int k = 1;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                tabela[i][j] = argv[k++][0];

                if(!validar(tabela[i][j]))
                {
                    printf("caractere invalido\n");
                    return 1;
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                do
                {
                    printf(
                        "Digite o caractere da linha %d coluna %d: ",
                        i + 1,
                        j + 1
                    );

                    scanf(" %c", &tabela[i][j]);

                    if(!validar(tabela[i][j]))
                        printf("caractere invalido\n");

                } while(!validar(tabela[i][j]));
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(
                "Linha %d Coluna %d: %c\n",
                i + 1,
                j + 1,
                tabela[i][j]
            );
        }
    }

    printf("Criado por Luís Guilherme\n");
    return 0;
}
