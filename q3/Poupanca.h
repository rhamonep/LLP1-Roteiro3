#pragma once

#include "Conta.h"

using namespace std;

class Poupanca : public Conta{

private:

    int variacao;
    double taxaRendimento;

public:

    Poupanca(std::string nome, int num, double saldo, int variacao, double taxaRendimento);

    int getVariacao();
    double getTaxaRendimento();
    
    void setVariacao(int variacao);
    void setTaxaRendimento(double taxaRendimento);

    double render();
};