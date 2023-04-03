#include "Contact.h"
int Contact::id=0;

Contact::Contact():name("unknown"),lastName("unknown"),email("unknown"),address("unknown")
{
    id++;
}
void Contact::AddDetails_User()
{
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your Last Name: ";

    cin>>lastName;
    cout<<"Enter Gender [1] to Male [2] To Female: ";
    cin>>gender;
    ph.setPhone();
    ph.setType();
    cout<<"Enter your Email: ";
    cin>>email;
    cout<<"Enter Your Address: ";
    cin>>address;
    date.setDate();
    //
}
string Contact::getName()
{
    return name;
}



void Contact::DisplayContact()
{

    system("Color 06");
    cout<<"|Name: "<<name<<" "<<lastName<<"\n"<<"|Email: "<<email<<endl;
    cout<<"|Gender: "<<(gender==1?"Male":"Female")<<endl;
    cout<<"|Address: "<<address<<endl;
    date.getDate();
    ph.print_Ty_Ph();
    cout<<"=====================================\n";
    cout<<"--------------------------------------------------\n";

}

Contact::~Contact()
{
    //dtor
}
