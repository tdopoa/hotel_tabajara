#include "Quarto.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int Quarto::ultimoId = 0;

Quarto::Quarto(string tipo, int camas, string tipo_camas){
  this->setId(this->geraId());
  this->setTipo(tipo);
  this->setCamas(camas);
  this->setTipoCamas(tipo_camas);
}

string Quarto::getTipo(){
  return this->tipo;
}

void Quarto::setTipo(string tipo){
  this->tipo = tipo;
}

int Quarto::getCamas() {
    return this->camas;
}

void Quarto::setCamas(int camas) {
    this->camas = camas;
}

string Quarto::getTipoCamas() {
    return this->tipo_camas;
}

void Quarto::setTipoCamas(string tipo_camas) {
    this->tipo_camas = tipo_camas;
}

int Quarto::getId(){
  return this->id;
}

void Quarto::setId(int id){
  this->id = id;
}

int Quarto::geraId()
{
    return this->ultimoId++;
}
