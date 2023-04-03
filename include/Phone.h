#include<iostream>
using namespace std;
#ifndef PHONE_H
#define PHONE_H

class Phone
{
private:
	string phone;
	string type;

public:
	Phone();
	void setPhone();
	void setType();

	string getPhone();// because i will use it in search and delete

	void print_Ty_Ph();
};

#endif // PHONE_H
