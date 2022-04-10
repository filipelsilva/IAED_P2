/* 
 * Ficheiro: hash.c
 * Autor: Filipe Ligeiro Silva, 95574
 * Descricao: definicao da funcao de hash para as tabelas de dispersao
 */

#include "hash.h"

int hash(char *v, int num) {
    /* Soma ponderada de todos os caracteres, modulo num */
    int sum = 0, mul = 127;
    while (*v != '\0') {
        sum = (mul * sum + *v) % num;
        v++;
    }
    return sum;
}