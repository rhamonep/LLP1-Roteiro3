#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nomeCleinte, int numero, double saldo, double salario, int limite) : 
ContaCorrente(nomeCleinte, numero, saldo, salario, limite){

}

double ContaEspecial::definirLimite(){
    limite = salario * 4;
    
    return limite;
}