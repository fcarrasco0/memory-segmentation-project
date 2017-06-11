
#define TAMANHO_MEMORIA  128
#define PROCESSOS        15
#define TMAX_SEG 		 16 // tamanho maximo de um segmento.


// tempo, com minutos e segundos, para guardar o relógio
typedef struct tempo {
	int m;
	int s;
} tempo;

// segmento da memória que guarda parte do código do processo
typedef struct segmento {
	int id;
	int tamanho;
	int endereco;
} segmento;

// processo (representado por threads no trabalho)
typedef struct processo {
	int id;
	int tamanho; 
	segmento *tabela;
	
} processo;

typedef struct memoria {
	int tamanho_disponivel = TAMANHO_MEMORIA; 	//Inicializa a memoria com o tamanho máximo livre.
	int *posicao; 								//cria um array para salvar em que posição cada segmento está alocado.
		
} memoria;

