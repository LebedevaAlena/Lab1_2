#include <iostream>
#include <string>
#include "people.h"
using namespace std;

int main()
{
    people ob("Alena", 18, "Woman");

    people k(ob);

     cout << endl;
    cout << " friend function " << endl;
    Show(ob);
    return 0;
}
