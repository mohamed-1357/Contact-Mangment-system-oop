#include "ContactBook.h"
ContactBook::ContactBook()
{
   c = new Contact[100];
}

ContactBook::~ContactBook()
{
delete []c;
}

void ContactBook::AddUser()
{
    //sort(c,c+count);
    //sort(c,c+count,compareByName());
    char ch;
    system("Color 06");//0 6
    do
    {
        cout<<"-----------------------------------------\n";
        c[count].AddDetails_User();
        cout<<"-----------------------------------------\n";
        cout<<"Do You Want To Add Another User:[y/n] ";

        count++;
        cin>>ch;
    }
    while(ch!='n');
    system("cls");

}
//bool ContactBook::compareByName(Contact &c1,Contact&c2)
//{
//    return c1.getName()<c2.getName();
//}
void ContactBook::Show()
{
    // finally do sort of array by names tommorow
        system("Color 06");

    //count=c[].id;// 1 2 3 4 5
    for (int i=0; i<count; i++)
    {
        cout<<"=========== User info ["<<i+1<<"]==========="<<endl;
        c[i].DisplayContact();
    }


}
void ContactBook::Search()
{

    system("Color 06");
    int check;

    cout<<"Are You Need To Search By Phone Number Or Position[1-To Phone Number 2- TO Position]: ";
    cin>>check;
    if (check==1)
    {
    string userNumber;
    cout<<"Enter The Phone Number You Want To Find Information about: ";
    cin>>userNumber;
    int flag=0;
    for(int i=0;i<count;i++)
    {
        if (userNumber== c[i].ph.getPhone())
        {
            cout<<"=========== User info ["<<i+1<<"]==========="<<endl;
          c[i].DisplayContact();
          flag=1;

        }

    }
    if (flag==0)
    cout<<"This Number Does't exist"<<endl;
    }
    else if (check==2)
    {
        cout<<"Enter Position of user you want to search about: ";
        int SearchPosition;
        cin>>SearchPosition;
        cout<<"=========== User info ["<<SearchPosition<<"]==========="<<endl;

                c[SearchPosition-1].DisplayContact();
    }
}
void ContactBook::Delete()
{

    system("Color 06");
    int DeletedNumber;
    cout<<"Enter The Number OF User You Want To Delete(Position) : ";
    cin>>DeletedNumber;
    bool check=false;

            for (int i=DeletedNumber-1;i<count;i++)//1 2 3 4
             {
                 check=true;
                  c[i]=c[i+1];//
             }

             if (check==true)
              cout<<"User Deleted Successfuly"<<endl;
             else if (check==false){
                cout<<"NOT FOUND"<<endl;
                count++;
             }
            count--;

}
void ContactBook::Edit()
{

 system("Color 06");
 string EditUser;
    cout<<"Enter Phone Number of User You Want To Edit: ";
    cin>>EditUser;
    for (int i=0;i<count;i++ )
        if(EditUser==c[i].ph.getPhone())
            c[i].AddDetails_User();
}
