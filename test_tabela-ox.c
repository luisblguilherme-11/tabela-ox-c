#include <stdio.h>
#include <assert.h>

#include "function_validar.c"

int main()
{
    assert(validar('X') == 1);
    assert(validar('O') == 1);

    assert(validar('B') == 0);
    assert(validar('x') == 0);
    assert(validar('o') == 0);
    assert(validar('1') == 0);
    assert(validar(' ') == 0);

    printf("Criado por Luís Guilherme\n");
    return 0;
}
