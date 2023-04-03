#include "Phone.h"

Phone::Phone():phone ("unknown"),type("unknown")
{
}

void Phone::setPhone()
{
    cout<<"Enter your phone: ";
    cin>>phone;
}

void Phone::setType()
{
    cout<<"Enter type (work/home/mobile): ";
    cin>>type;

}

string Phone::getPhone()
{
	return phone;
}


void Phone::print_Ty_Ph()
{
	cout << "|Phone Number: " << phone<<"\n"<<"|Type Of Number: "<<type<<endl;

}
