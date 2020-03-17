#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta(string nomeCliente, int numero, double saldo){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}

string Conta::getNomeCliente(){ 
    return nomeCliente; 
}
int Conta::getNumero(){ 
    return numero; 
}
double Conta::getSaldo(){ 
    return saldo; 
}
void Conta::setNomeCliente(string nomeCliente){ 
    this->nomeCliente = nomeCliente; 
}
void Conta::setNumero(int numero){ 
    this->numero = numero;
}
void Conta::setSaldo(double saldo){ 
    this->saldo = saldo;
}

void Conta::sacar(double valor){
    if(valor > saldo){
        cout << "Saldo indisponivel." << endl;
    }else{
        saldo -= valor;
    }
}

void Conta::depositar(double valor){
    saldo += valor;
}