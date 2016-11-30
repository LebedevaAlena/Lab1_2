#include "people.h"
#include <string>
#include <iostream>
using namespace std;

people::people()
{
    //ctor
}

people::~people()
{
    cout << " This is destructor" << endl;
}

people::people(string name, int year, string nature)
{
    cout << " this is constructor" << endl;
    this->name = name;
    this->year = year;
    this->nature = nature;
}

people* people::SetName(string name)
{
    this->name = name;
}

int people::SetYear(int year)
{
    this->year = year;
}

string people::SetNature(string nature)
{
    this->nature = nature;
}

string people::GetName()
{
    return name;
}

int people::getYear()
{
    return year;
}

string people::GetNature()
{
    return nature;
}
