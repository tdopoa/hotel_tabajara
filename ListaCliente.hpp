#ifndef ListaCliente_hpp
#define ListaCliente_hpp

#include "Cliente.hpp"
#include <vector> // vetor dinamico

class ListaCliente
{
  public:
    void adicionaCliente();
    void listaClientes();
    void alterarCliente();
    //void relatorioClientes();

  private:
    vector<Cliente> clientes;
};

#endif