#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>

using namespace std;
class people
{
    public:
        people();
        virtual ~people();
        people(string name, int year, string nature);
        people* SetName(string);
        int SetYear(int);
        string SetNature(string);
        string GetName();
        int getYear();
        string GetNature();
    protected:

    private:
        string name;
        int year;
        string nature;
        friend void Show(people&);
};

#endif // PEOPLE_H
