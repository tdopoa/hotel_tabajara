#include "ListaHotel.hpp"
#include "ListaFuncionario.hpp"
#include "Funcionario.hpp"
#include "Hotel.hpp"
#include <iostream>
#include <stdlib.h>

void ListaHotel::adicionaHotel() {
    int id;
    string nome;
    string telefone;
    string estado;

    system("cls");
    printf("================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                      Inserir Hotel \n");
    printf("================================================================\n");

    printf("Nome......: ");
    cin >> nome;

    printf("Telefone..: ");
    cin >> telefone;

    printf("Estado....: ");
    cin >> estado;

    hoteis.push_back(Hotel(nome, telefone, estado));
}

vector<Funcionario> ListaHotel::getFuncionarios() {
    return this->funcionarios;
}

void ListaHotel::listaHotel() {
    Hotel hotel;
    system("cls");
    printf("\n================================================================\n");
    cout << "Total de " << hoteis.size() << " Hotel(is) \n";
    printf("================================================================\n");
    for (int i = 0; i < hoteis.size(); i++)
    {
        cout << "| Id.........: [" << hoteis[i].getId() << "]" << endl
            << " | Nome.......: " << hoteis[i].getNome() << endl
            << " | Telefone...: " << hoteis[i].getTelefone() << endl
            << " | Estado.... : " << hoteis[i].getEstado() << endl;
    }
}


void ListaHotel::adicionaFuncionario(ListaHotel listaHotel) {
    int id;
    string nome;
    string endereco;
    string telefone;
    string estado;

    system("cls");
    printf("================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                    Inserir Funcionario  \n");
    printf("================================================================\n");
    printf("Nome.......: ");
    cin >> nome;

    printf("Telefone...: ");
    cin >> telefone;

    listaHotel.getFuncionarios().push_back(Funcionario(nome, telefone));
}


Hotel ListaHotel::getHotel(int id) {
    for (int i = 0; i < hoteis.size(); i++)
    {
        if (hoteis[i].getId() == id) {
            return hoteis[i];
        }
    }
}

/*
void ListaHotel::consultarHotel() {
    int idHotel;
    string nome;
    string opt;
    system("cls");
    printf("\n================================================================\n");
    printf("          Sistema de Controle para Times Esportivos \n");
    printf("                    CONSULTAR Hotel \n");
    printf("================================================================\n");
    printf("Voce deseja consultar por codigo ou por nome? (C) Codigo| (N) Nome..:");
    cin >> opt;

    if (opt == "C") {
        printf("\nInforme o codigo do Hotel..: ");
        cin >> idHotel;
        for (int i = 0; i < Hotel.size(); i++) {
            if (Hotel[i].getId() == idHotel) {
                cout << "\n Id: [" << Hotel[i].getId() << "] | Nome: " << Hotel[i].getNome() << " | Categoria: " << Hotel[i].getCategoria() << " | Salario Bruto: " << Hotel[i].getSalarioBruto() << endl;
            }
        }
    }
    else {
        printf("\nInforme o nome do Hotel..: ");
        cin >> nome;
        for (int i = 0; i < Hotel.size(); i++) {
            if (Hotel[i].getNome() == nome) {
                cout << "\n Id: [" << Hotel[i].getId() << "] | Nome: " << Hotel[i].getNome() << " | Categoria: " << Hotel[i].getCategoria() << " | Salario Bruto: " << Hotel[i].getSalarioBruto() << endl;
            }
        }
    }

}

*/