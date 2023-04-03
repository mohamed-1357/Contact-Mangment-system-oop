#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include "Date.h"
#include "Phone.h"
#include <algorithm>
using namespace std;

class Contact
{
    public:
        Contact();
        static int id;
        void AddDetails_User();
        void DisplayContact();
        virtual~Contact();
        Date date;
        Phone ph;
        string getName();
        //string *Names=new string [100];

    private:
        int gender;
        string name;
        string lastName;
        string email;
        string address;


};

#endif // CONTACT_H
