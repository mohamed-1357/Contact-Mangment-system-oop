#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;

class Date
{
    public:
        Date();
        virtual ~Date();
        void setDate();
        void getDate();
    protected:

    private:
        string year;
        string month;
        string day;
};

#endif // DATE_H
