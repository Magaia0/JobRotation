#include <iostream>
#include <string>

using namespace std;

int main()
{
    string StringUser = "Exemplo";

    string StringInvertida = "";

    for (int i = StringUser.length() - 1; i >= 0; i--)
    {
        StringInvertida += StringUser[i];
    }
    cout << StringInvertida << endl;

    return 0;
}