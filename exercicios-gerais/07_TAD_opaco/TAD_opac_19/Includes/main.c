#include <stdio.h>
#include <stdlib.h>

#include "cidade.h"
#include "missil.h"
#include "defesa.h"


int main(){

    tCidade cidade;
    cidade = CriaCidade();

    LiberaCidade(cidade);

    return 0;
}
