#include "people.h"
#include <string>
#include <iostream>
using namespace std;

people::people()
{

}

people::~people()
{
    cout << " \nThis is destructor" << endl;
}

people::people(string name, int year, string gender)
{
    cout << " This is param.constructor" << endl;
    this->name = name;
    this->year = year;
    this->gender = gender;
    cout << "Name:  " << name << endl;
    cout << "Year:  " << year << endl;
    cout << "Gender:  " << gender << endl;
}

people::people(const people &ob)
{
    cout << "\nThis copy constructor" << endl;
}

people* people::SetName(string name)
{
    this->name = name;
}

int people::SetYear(int year)
{
    this->year = year;
}

string people::SetGender(string gender)
{
    this->gender = gender;
}

string people::GetName()
{
    return name;
}

int people::getYear()
{
    return year;
}

string people::GetGender()
{
    return gender;
}


void Show(people& obj)
{
    cout << "\nName  "  << obj.name << '\t' << "Year  " << obj.year << '\t' << "Gender  " << obj.gender << endl;
}


