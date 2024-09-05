// O objetivo aqui é executar o clássico Olá mundo.
// Para isso será necessário criar o texto do programa em algum lugar, 
// compilá-lo com sucesso, carregá-lo, executá-lo e descobrir para onde foi sua saída.

// Para executar, é necessário rodar o comando no terminal:
// cc 1_hello_world.c
// Após isso, será gerado um arquivo com a saída, chamado a.out
// Para acessar a informação, é necessário executar: ./a.out

// Para compilar, também é possível usar o gcc.
// gcc -ansi 1_hello_world.c


#include <stdio.h>
int main() {
    printf("hello, world\n");
}