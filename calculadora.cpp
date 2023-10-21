#include <iostream>

using namespace std;

class Calculadora{

    public:
    //int a, b;

    int soma(int _a, int _b){
        return _a + _b;
    } 

        /*
        Multiplicação: Leane
        Divisão: Erika
        Subtração: Brenndol
    */
   
   int divisao(int _a, int _b){
        return _a / _b;
   }

   int sub(int _a, int _b) {
        return _a - _b;
    }

};


int main (){
    Calculadora p;

    cout << "soma: " << p.soma(10,10) << endl;
    cout << "subtracao: " << p.sub(20,10) << endl;
    cout << "divisao: " << p.divisao(10,10) << endl;

    return 0;
}