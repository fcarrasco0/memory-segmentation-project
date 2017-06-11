#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "comum.h"




int main (void){

	criaMemoriaPrincipal();
	criaThreadDeCriacaoDeProcessos();
	criaThreadDeExecucao();
}
