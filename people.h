#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>

using namespace std;
class people
{
    public:
        people();
        virtual ~people();
        people(string name, int year, string gender);
        people* SetName(string);
        int SetYear(int);
        string SetGender(string);
        string GetName();
        int getYear();
        string GetGender();
        people(const people &ob);// Copy constr.
    protected:

    private:
        string name;
        int year;
        string gender;
        friend void Show(people&);
};

#endif // PEOPLE_H
