#include <stdio.h>
#include <stdlib.h>

#include "cidade.h"
#include "missil.h"
#include "defesa.h"


int main(){

    tCidade cidade;

    char c;
    scanf("%c", &c);

    while (c != 'F') {

        if(c == 'C'){
            cidade = CriaCidade();
            LiberaCidade(cidade);
       }
    }

    return 0;
}
