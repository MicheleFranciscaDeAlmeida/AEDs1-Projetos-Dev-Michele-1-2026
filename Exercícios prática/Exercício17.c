#include <stdio.h>

/* Exercício 11 – Tipo de triângulo

Leia três valores reais A, B e C e diga se formam um triângulo.

Regra:

A < B + C
B < A + C
C < A + B

Se formar:

TRIANGULO

Caso contrário:

NAO FORMA TRIANGULO

Esse aqui começa a exigir mais raciocínio lógico.
*/

int main()
{
    float A, B, C;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A < B + C && B < A + C && C < A + B)
    {
        printf("TRIANGULO\n");
    }
    else
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0;
}