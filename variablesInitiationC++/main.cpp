#include <iostream>
#include <string>

using namespace std;

int main()
{
    //déclaration de varialbes
    int age = 44;

        //refrerence
    int& ageReference = age;

    string friendName = "jo";
    cout << "Hello " << friendName << " I'm " << age << " years old !" << endl;

        //reference works ?
    age = 42;
    cout << "Hello " << friendName << " I'm " << ageReference << " years old by reference!" << endl;

    return 0;
}
