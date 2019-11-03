
void pause(){
  printf("\n Aperte ENTER para continuar ...");
  getchar();
}

void clear(){
  system("cls");
  system("clear");
}

int menu(){
  int escolha;

  printf("===============================================================\n");
  printf("============ BEM-VINDO A CENTRAL DE VENDAS! ===================\n\n");
  printf("\t1 - CENTRAL DE VENDAS \n");
  printf("\t2 - CONTROLE DE ESTOQUE \n");
  printf("\t3 - SISTEMA FINANCEIRO \n");
  printf("\t4 - SAIR \n");
  scanf("%d", &escolha);

  return escolha;
}
