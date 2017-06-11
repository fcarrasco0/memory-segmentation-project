#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#ifndef COMUM
#define COMUM
#include "comum.h"
#endif


processo criaProcesso(int tamanho, int id);
segmento criaSegmento(int id);

