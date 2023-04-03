#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include "Date.h"
#include "Contact.h"
#include "Phone.h"

using namespace std;

class ContactBook
{
private:
    int count=0;
    //string *arr=new string[count];
    Contact *c;// =new Contact[100]

public:

    ContactBook();
    //bool compareByName(Contact&c1,Contact&c2);



    virtual ~ContactBook();
    void Show();
    void Search();
    void Delete();
    void AddUser();
    void Edit();




};

#endif // CONTACTBOOK_H
