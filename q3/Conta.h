#pragma once

#include <string>

using namespace std;

class Conta{

    protected:

        string nomeCliente;
        int numero;
        double saldo;

    public:

        Conta(string nomeCliente, int numero, double saldo);

        string getNomeCliente();
        int getNumero();
        double getSaldo();

        void setNomeCliente(std::string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);

        void sacar(double valor);
        void depositar(double valor);
};