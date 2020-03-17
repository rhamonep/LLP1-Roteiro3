#pragma once

#include "ContaCorrente.h"

using namespace std;

class ContaEspecial : public ContaCorrente{

    public:

        ContaEspecial(string nomeCliente, int numero, double saldo, double salario, int limite);

        double definirLimite();
};