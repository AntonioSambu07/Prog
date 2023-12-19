#include <stdio.h>
#include <stdlib.h>

#include "cidade.h"
#include "missil.h"
#include "defesa.h"


/**
 * @brief Estrutura que representa uma cidade.
 * 
 * A estrutura tCidade contem o nome da cidade, a quantidade de misseis e defesas, e as listas de misseis e defesas.
 * 
 */
struct cidade {

    int X;
    int Y;
    char nomeCidade[50];
    int quantMisseis;
    int quantDefesas;
    tMissil listaMisseis[10];
    tDefesa listaDefesas[10];

};
/**
 * @brief Cria uma nova cidade.
 * 
 * @return tCidade Ponteiro para a cidade criada.
 */

tCidade CriaCidade() {
    tCidade cidade = (tCidade)malloc(sizeof(struct cidade));
    LeEntrada(cidade);
    return cidade;
}


/**
 * @brief Le a entrada do usuario e preenche a cidade com as informacoes lidas.
 * 
 * @param cidade Ponteiro para a cidade que sera preenchida.
 * @return tCidade Ponteiro para a cidade preenchida.
 */
tCidade LeEntrada(tCidade cidade){

    if (cidade != NULL) {
        scanf("%d%d", &(cidade->X), &(cidade->Y));
    }

}

/**
 * @brief Imprime as informacoes da cidade.
 * 
 * @param cidade Ponteiro para a cidade que sera impressa.
 */
void ImprimeCidade(tCidade cidade){

}

/**
 * @brief Libera a memória alocada para a cidade.
 * 
 * @param cidade Ponteiro para a cidade que tera a memoria liberada.
 */
void LiberaCidade(tCidade cidade){
    if(cidade != NULL)
        free(cidade);

}

/**
 * @brief Processa os ataques na cidade.
 * 
 * @param cidade Ponteiro para a cidade que sera atacada.
 */
void ProcessaAtaques(tCidade cidade){

}

/**
 * @brief Imprime os dados finais da cidade.
 * 
 * @param cidade Ponteiro para a cidade que tera os dados impressos.
 */
void ImprimeDados(tCidade cidade){

}
