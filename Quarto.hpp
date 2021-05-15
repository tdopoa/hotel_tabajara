#ifndef Quarto_hpp
#define Quarto_hpp

#include <vector>
#include<iostream>

using namespace std;

class Quarto
{
  public:
    Quarto(string tipo, int camas, string tipo_camas);

    string getTipo();
    void setTipo(string Tipo);

    int getCamas();
    void setCamas(int camas);

    string getTipoCamas();
    void setTipoCamas(string tipo_cama);

    int getId();
    void setId(int id);

    int geraId();


  private:
    int id;
    int static ultimoId;
    string tipo;
    int camas;
    string tipo_camas;
};

#endif 