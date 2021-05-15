#ifndef ListaHotel_hpp
#define ListaHotel_hpp

#include "Hotel.hpp"
#include "Funcionario.hpp"
#include <vector> // vetor dinamico

class ListaHotel
{
    public:
        void listaHotel();
        void adicionaHotel();
        void adicionaFuncionario(ListaHotel listaHotel);
        void consultarHotel();

        vector<Funcionario> getFuncionarios();
        Hotel getHotel(int id);

    private:
        vector<Hotel> hoteis;
        vector<Funcionario> funcionarios;
        int static ultimoId;
};

#endif
