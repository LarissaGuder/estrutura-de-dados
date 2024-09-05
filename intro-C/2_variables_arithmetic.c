#include <stdio.h>


/* Tipos de dados em C
Type	Description
char	character - a single byte
short	short integer
long	long integer
double	double-precision floating point */

int main()
{
    /* Em C, todas as variáveis ​​devem ser declaradas antes do uso, geralmente no início da função, 
    antes de qualquer instrução executável. Se você esquecer uma declaração, 
    receberá um diagnóstico do compilador. Uma declaração consiste em um tipo e 
    uma lista de variáveis ​​que possuem esse tipo */
    
    int lower, upper, step;
    float fahr, celsius;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}