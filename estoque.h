

typedef struct {
  char nome[50];
  int quantidade;
  int id;
  float compra;
  float venda;
  float venda_imposto;
}estoque;

void controle_estoque(estoque *produtos){
  int escolha;
  clear();
  printf("===============================================================\n");
  printf("============ CONTROLE DE ESTOQUE ==============================\n\n");
  printf("\t1 - ADICIONAR PRODUTOS \n");
  printf("\t2 - APAGAR PRODUTOS \n");
  printf("\t3 - SISTEMA FINANCEIRO \n");
  printf("\t4 - SAIR \n");
  scanf("%d", &escolha);

}

void cria_estoque(estoque *produtos){
//cria todo o estoque zerado
    for(int i = 0; i < NUMERO_MERCADORIA; i++){
        produtos[i].nome[0] = '\0';
        produtos[i].quantidade = 0;
        produtos[i].id = 0;
        produtos[i].compra = 0;
        produtos[i].venda = 0;
        produtos[i].venda_imposto = 0;
    }

}

void cadastra_produto(estoque *produtos){
 clear();

 //printf("");
}

void apagar_estoque(estoque *produtos){
  clear();
  printf("===============================================================\n");
  printf("============ APAGAR PRODUTO ===================================\n\n");

}
