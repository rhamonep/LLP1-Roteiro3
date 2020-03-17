/*
    1-)
    R.: O Polimorfismo é o princípio pelo qual duas ou mais classes que herdam de uma mesma superclasse 
    podem invocar métodos que têm a mesma assinatura, mas comportamentos distintos, específicos 
    para cada classe, usando uma referência de um objeto do tipo da superclasse. 
    A decisão sobre qual o método que deve ser selecionado, de acordo com o tipo da classe, 
    é tomada em tempo de execução. 
*/

#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Papagaio.h"
#include <vector>

using namespace std;

int main(){

    Animal* animais[3];
    Animal* animalAtual = new Cachorro();
    
    animais[0] = animalAtual;

    animalAtual = new Papagaio();

    animais[1] = animalAtual;

    animais[2] = new Gato();

    for(Animal* atual : animais){
        atual->fazerRuido();
    }
    
    return 0;
}