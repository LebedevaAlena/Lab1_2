#include <iostream>
#include <string>
#include "people.h"
using namespace std;

int main()
{
    people ob("Alena", 18, "Woman");

    cout << "name  " << ob.GetName() << endl;
    cout << "year" << ob.getYear() << endl;
    cout << "nature" << ob.GetNature() << endl;
    return 0;
}
