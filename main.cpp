#include "ListaHotel.hpp"
#include "ListaCliente.hpp"
#include "Jogador.hpp"
#include "Time.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <stdlib.h>

ListaHotel listaHotel;
ListaCliente listaCliente;

void gerenciarCliente(){
  int opcaoSubMenu = -1;
  while(opcaoSubMenu != 0){
    //system("cls");
    printf("\n\n================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                       GERENCIAR CLIENTE \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Cliente \n");
    printf("(2) - Alterar Cliente \n");
    printf("(3) - Lista de Clientes \n");
    printf("(0) - Voltar ao Menu Principal \n\n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){

        listaCliente.adicionaCliente();

    }else if(opcaoSubMenu==2){

        listaCliente.alterarCliente();

    }else if(opcaoSubMenu==3){

        listaCliente.listaClientes();

    }else if(opcaoSubMenu==0){

        return;

    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }
  printf("================================================================\n");
}


void gerenciarHotel(){
  int opcaoSubMenu = -1;
  while(opcaoSubMenu != 0){
    //system("cls");
    printf("\n\n================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                       GERENCIAR HOTEL \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Hotel \n");
    printf("(2) - Adicionar Funcionario \n");
    printf("(3) - Lista Hotel \n");
    printf("(0) - Voltar ao Menu Principal \n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){
        listaHotel.adicionaHotel();
    }
    else if (opcaoSubMenu == 2) {

        listaHotel.adicionaFuncionario(listaHotel);
    }
    else if (opcaoSubMenu == 3) {
        listaHotel.listaHotel();
    }else if(opcaoSubMenu==0){
      return;
    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }
  printf("================================================================\n");  
}


int main() {
  int opcaoMenu = -1;

  while(opcaoMenu != 0){

    system("cls");
    printf("\n================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("(1) - Gerenciar Cliente \n");
    printf("(2) - Gerenciar Hotel \n");
    printf("(3) - Reservar Quarto \n");
    printf("(4) - Relatório de Reservas \n");
    printf("(0) - Finalizar \n\n");
    printf("Digite sua opcao: ");
    cin >> opcaoMenu;

    if(opcaoMenu==1){

      gerenciarCliente();

    }else if(opcaoMenu==2){

      gerenciarHotel();

    }else if(opcaoMenu==3){
      
      //gerenciarEmpresa();
      
    }else if(opcaoMenu==0){
      cout << "FIM DO PROGRAMA! ";
      return 0;
    }else{
      cout << "OPCAO INVALIDA! ";
    }

  }

  return 0;
}
