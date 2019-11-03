#define NUMERO_MERCADORIA 500

typedef struct {
  char nome[50];
  int quantidade;
  int id;
  float compra;
  float venda;
  float venda_imposto;
}estoque;

void controle_estoque(){
    
}

void cria_estoque(estoque *produtos[]){

    for(int i = 0; i < NUMERO_MERCADORIA; i++){
        produtos[i].nome[0] = '\0';
    }

}

void cadastra_produto(estoque *produtos[]){
 clear();

 printf("");
}