#include <iostream>
#include <string>
#include "people.h"
using namespace std;

int main()
{
    people ob("Alena", 18, "Woman");

    people b(ob);

    cout << "Name  " << ob.GetName() << endl;
    cout << "Year  " << ob.getYear() << endl;
    cout << "Gender  " << ob.GetGender() << endl;

     cout << endl;
    cout << " friend function " << endl;
    Show(ob);
    return 0;
}
