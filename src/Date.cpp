#include "Date.h"

Date::Date():year("unknown"),month("unknown"),day("unknown")
{
    //ctor
}

Date::~Date()
{
    //dtor
}
void Date::setDate()
{
    cout<<"*Enter date of today"<<endl;
    cout<<"Enter year: ";
    cin>>year;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter day: ";
    cin>>day;
}
void Date::getDate()
{
    cout<<"|Date: "<<year<<"/"<<month<<"/"<<day<<"\n";
}
