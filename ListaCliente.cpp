 
#include "ListaCliente.hpp"
#include "Cliente.hpp"
#include "Time.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ListaCliente::adicionaCliente(){
  int id;
  string nome;
  string endereco;
  string telefone;
  string estado;

  system("cls");
  printf("================================================================\n");
  printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
  printf("================================================================\n");
  printf("                    Inserir Cliente  \n");
  printf("================================================================\n");
  printf("Nome.......: ");
  cin >> nome;

  printf("Endereco...: ");
  cin >> endereco;

  printf("Telefone...: ");
  cin >> telefone;

  printf("Estado.....: ");
  cin >> estado;

  clientes.push_back(Cliente(nome, endereco, telefone, estado));
}


void ListaCliente::listaClientes(){
  system("cls");
  printf("================================================================\n");
  printf("                       Lista de Clientes  \n");
  printf("================================================================\n");

  for(int e = 0; e < clientes.size(); e++){
    cout << " Id: [" << clientes[e].getId() << "] | Nome: " << clientes[e].getNome() << "\n";
  }


}



void ListaCliente::alterarCliente() {
    int codigo;
    string nome;
    string endereco;
    string telefone;
    string estado;

    system("cls");
    printf("================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                     Alterar Clientes  \n");
    printf("================================================================\n");

    for (int e = 0; e < clientes.size(); e++) {
        cout << "       Id: [" << clientes[e].getId() << "] | Nome: " << clientes[e].getNome() << "     \n";
    }

    printf(" Digite o codigo do cliente que deseja alterar :  \n\n");
    cin >> codigo;

    printf("\nPreencha os dados novamente: \n\n");

    printf("Nome.......: ");
    cin >> nome;

    printf("Endereco...: ");
    cin >> endereco;

    printf("Telefone...: ");
    cin >> telefone;

    printf("Estado.....: ");
    cin >> estado;

    for (int e = 0; e < clientes.size(); e++) {
        if (clientes[e].getId() == codigo) {
            clientes[e].setNome(nome);
            clientes[e].setEndereco(endereco);
            clientes[e].setTelefone(telefone);
            clientes[e].setEstado(estado);
        }
    }

}