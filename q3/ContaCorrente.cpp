#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente(string nomeCliente, int numero, double saldo, double salario, int limite) : 
Conta(nomeCliente, numero, saldo){
    this->salario = salario;
    this->limite = limite;
}

double ContaCorrente::getSalario(){ 
    return salario; 
}

int ContaCorrente::getLimite(){ 
    return limite; 
}

void ContaCorrente::setSalario(double salario){ 
    this->salario = salario; 
}

void ContaCorrente::setLimite(int limite){ 
    this->limite = limite; 
}

double ContaCorrente::definirLimite()
{
    limite = salario * 2;
    return limite;
}