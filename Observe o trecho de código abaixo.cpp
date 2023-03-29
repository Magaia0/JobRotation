#include <iostream>
using namespace std;

int main(){
    
    int INDICE = 13,Soma = 0,K = 0;

    while (K < INDICE){
        K = K + 1;
        Soma = Soma + K;
    }

    cout << Soma << endl;
}