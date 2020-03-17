#pragma once

#include "Conta.h"

using namespace std;

class ContaCorrente : public Conta{
    
    protected:

        double salario;
        int limite;

    public:

        ContaCorrente(string nomeCleinte, int numero, double saldo, double salario, int limite);

        double getSalario();
        int getLimite();

        void setSalario(double salario);
        void setLimite(int limite);

        double definirLimite();
};