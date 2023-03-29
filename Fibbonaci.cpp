#include <iostream>
using namespace std;
// Sequência de Fibonacci
int main(){
    int UserNumber,A = 0,B = 1;
    cout << "Digite um numero: ";
    cin >> UserNumber;

    while (B <= UserNumber) {
        if (B == UserNumber) {
            cout << UserNumber << " faz parte da sequencia de Fibonacci" << endl;
            break;
        } else {
            int temp = A;
            A = B;
            B = temp + B;
        }
    }
    
    if (B > UserNumber) {
        cout << UserNumber << " nao faz parte da sequencia de Fibonacci" << endl;
    }

    return 0;
}