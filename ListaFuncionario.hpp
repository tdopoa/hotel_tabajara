#ifndef ListaCliente_hpp
#define ListaCliente_hpp

#include "Funcionario.hpp"
#include "ListaHotel.hpp"
#include <vector> // vetor dinamico

class ListaFuncionario
{
  public:
    void adicionaFuncionario(ListaHotel listaHotel);
    void listaFuncionario();

  private:
    vector<Funcionario> funcionarios;
};

#endif