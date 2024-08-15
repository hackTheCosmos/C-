#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Bonjour ! Ravis de faire votre connaissance. Comment vous appelle-t-on ?" << endl;
    string userName;
    //getline() permet de prendre en compte les espaces d'une chaîne de carachtères
    getline(cin, userName);

    cout << "Quel age avez vous ?" << endl;
    int age;
    cin >> age;

    cout << "Si j'ai bien compris, on vous appelle " << userName << " et vous avez : " << age << " ans" << endl;
    return 0;
}
