#include "Poupanca.h"

using namespace std;

Poupanca::Poupanca(string nomeCleinte, int numero, double saldo, int variacao, double taxaRendimento) : 
Conta(nomeCleinte, numero, saldo){
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao(){ 
    return variacao; 
}

double Poupanca::getTaxaRendimento(){ 
    return taxaRendimento; 
}

void Poupanca::setVariacao(int variacao){ 
    this->variacao = variacao; 
}

void Poupanca::setTaxaRendimento(double taxaRendimento){ 
    this->taxaRendimento = taxaRendimento; 
}

double Poupanca::render(){
    if(variacao == 1){
        taxaRendimento += 0.5;
    }

    return saldo*taxaRendimento;
}