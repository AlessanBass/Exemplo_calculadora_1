#include <iostream>

using namespace std;

class Calculadora(){

    public:
    int a, b;

    int soma(int _a, int _b){
        return a + b;
    } 

        /*
        Multiplicação: Leane
        Divisão: Erika
        Subtração: Brenndol
    */
   
   int divisao(int _a, int _b){
        return a / b;
   }

   int sub(int _a, int _b) {
        return a - b;
    }

};


int main (){
    Calculadora p;

    return 0;
}