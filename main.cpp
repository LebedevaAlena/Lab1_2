#include <iostream>
#include <string>
#include "people.h"
using namespace std;

int main()
{
    people ob("Alena", 18, "Woman");

    people b(ob);

    cout << "name  " << ob.GetName() << endl;
    cout << "year  " << ob.getYear() << endl;
    cout << "nature  " << ob.GetNature() << endl;

    cout << " friend function " << endl;
    Show(ob);
    return 0;
}
