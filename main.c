#include <stdio.h>
#include "menu.h"

int main(int argc, char const *argv[]) {
  int opcao;

// Nicoleti é boi
  /* Aqui fica a função de login e loading de dados!*/


  for(;;){
    system("cls");
    opcao=menu();
    switch (opcao) {
      case 1:
      //central_vendas();
      break;

      case 2:
      //controle_estoque();
      break;

      case 3:
      //financeiro();
      break;

      case 4:
      //sair();
      break;

    }
  }
  return 0;
}
