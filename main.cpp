#include <iostream>
#include<conio.h>
#include <iomanip>
#include<algorithm>
//#include<bits/stdc++.h>
#include "ContactBook.h"
using namespace std;
int main()
{
    // Contact c;
    ContactBook CB;
    system("cls");
    system("Color F2");// F backround white / 2 text green
    cout << "\n\n\n\n\n\n\n\t\t\t\t          *Hello I'm Mohamed*";
    cout << "\n\t\t\t\t WELCOME TO MY CONTACT SYSTEAM MAGEMEANT ";
    getch();
    while (true)
    {
        system("cls");
        system("Color 01");
        cout<< "\nCOUNTACT MANAGEMENT SYSTEM\n";
        cout<< "=================================================\n";
        cout<< "[1] Add a New Contact" <<setw(28)<<"|"<< endl
            << "[2] Display All Contacts" <<setw(25)<<"|"<< endl
            << "[3] Search For contact" <<setw(27)<<"|"<< endl
            << "[4] Delete a Contact" <<setw(29)<<"|"<< endl
            << "[5] Edit a Contact" <<setw(31)<<"|" <<endl
            << "[0] Exit" <<setw(41)<<"|" <<endl;
        cout<< "==================================================\n";
        cout<< "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            CB.AddUser();
            break;
        case 2:
            system("cls");
            CB.Show();
            break;
        case 3:
            system("cls");
            CB.Search();
            break;
        case 4:
            system("cls");
            CB.Delete();
            break;
        case 5:
            system("cls");
            CB.Edit();
            break;
        case(0):
            system("cls");
            system("Color 02");
            cout<<"\n\n\n\n\t\t\t^_^Thank You For Using My systeam^_^\n\n\n";
            break;

        default:
            continue;

        }
        int tryagain;
        system("Color 02");//0 backround Black / 2 text green
        cout << "..::Enter [1] To Main Manue [0] To Exit ::..\n";
        cin >> tryagain;
        if (tryagain == 1)
            continue;
        else if (tryagain == 0)
            cout<<"\n\n\t\t\t(: Good Bye :)\n\n";
            return 0;

    }

}
