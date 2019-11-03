
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
  printf("============ Bem-vindo a Central de Vendas! ===================\n\n");
  printf("\t1 - Central de Vendas \n");
  printf("\t2 - Controle de Estoque \n");
  printf("\t3 - Sistema Financeiro \n");
  printf("\t4 - Sair \n");
  scanf("%d", &escolha);

  return escolha;
}
