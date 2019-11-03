#include <stdio.h>
#include <stdlib.h>

#define ICMS = 1.17;

#include "main_bib.h"
#include "financeiro.h"


int main(int argc, char const *argv[]) {
  int opcao;
  float caixa= 500.50 ,lucro=100.2;

  /* Aqui fica a função de login e loading de dados!*/


  while(opcao!=4){
    clear();
    opcao=menu();
    switch (opcao) {
      case 1:
      //central_vendas();
      break;

      case 2:
      controle_estoque();
      break;

      case 3:
      financeiro(&caixa,&lucro);
      break;

      case 4:
      //sair();
      break;

    }

  }
  return 0;
}
