#include <iostream>
#include<string.h>
using namespace std;

class Bank
{
    int account;
    float balance;
    char name[20];
public:
    void create();
    void deposite(int);
    void withdraw(int);
    void searches(int);
    void display();
};
void Bank::create()
{
    cout<<"\nEnter Your Name : ";
    cin.ignore();
	cin.getline(name,50);
    cout<<"\nEnter Your Account Number : ";
    cin>>account;
    cout<<"\nEnter The Amount of Money : ";
    cin>>balance;
}
void Bank::deposite(int dep)
{
    int bnk;
    if(account==dep)
    {
        cout<<"\nEnter The Amount of Money : BDT ";
        cin>>bnk;
        balance = balance + bnk;
        cout<<"\n\t\tDeposite Done "<<endl;
    }
}
void Bank::withdraw(int widr)
{
    int blnc,p;
    if(account==widr)
    {
        cout<<"\nYour Current Account Balance is : BDT "<<balance<<endl<<"The Amount of Money You Want to Withdraw is : BDT ";
        cin>>blnc;
        p = balance - blnc;
        if(p<0)
        {
            cout<<"\nSorry!! There is Not Enough Money In Your Account : "<<endl;
        }
        else if(p>=0)
        {
            cout<<"\n\tYour Request to Withdraw Money Has Done :)\n";
            balance=p;
        }
    }
}
void Bank::display(void)
{
    cout<<"\n\n\t\tACCOUNT HOLDER's LIST\n\n";
	cout<<"===================================================================\n";
	cout<<"A/c no.       |            Name             |              Balance\n";
    cout<<"\n"<<account<<" \t\t "<<name<<"\t\t   "<<balance<<"\n"<<endl;
    cout<<"===================================================================\n";
}
void Bank::searches(int srch)
{
    if(account==srch)
        cout<<"\n\t\t***** Account Holder's Information *****\n"<<endl;
    cout<<"\nNAME : "<<name<<"\nAccount No : "<<account<<"\nBalance : BDT "<<balance<<"\n"<<endl;
    cout<<"\n\t\t******** ~~~~~~~~~~ ********\n\n";
}

int main()
{
    int i,dep,widr,srch,y=0;
    Bank ob[20];
    int index;
    cout<<"\t\t*****================================================*****\n";
    cout << "\n\n\t\t       $$$$$$ WELCOME TO SONALI BANK LIMITED $$$$$$" << endl;
    cout<<"\n\n\t\t*****================================================*****\n";

    while(index!=6)
    {
        cout<<"\a\nPress 1 To Create Account :~ \n";
        cout<<"\a\nPress 2 To Deposite Amount :~ \n";
        cout<<"\a\nPress 3 To Withdraw Money :~ \n";
        cout<<"\a\nPress 4 To Display Your Account :~ \n";
        cout<<"\a\nPress 5 To Search Your Account :~ \n";
        cout<<"\a\nPress 6 To Exit :~ \n";
        cout<<"\n\t\tSelect Your Option <1-6> : ";
        cin>>index;

        switch(index)
        {
        case 1:
        {
            cout<<"\nHow Many Account You Want To Open...? ";
            cin>>y;
            for(i=0; i<y; i++)
            {
                ob[i].create();
                cout<<"\n\t\t***Congratulations Account Created Successfully***\n";
            }
            break;
        }
        case 2:
        {
            cout<<"\nEnter Your Account No : ";
            cin>>dep;
            for(i=0; i<y; i++)
            {
                ob[i].deposite(dep);
            }
            break;
        }
        case 3:
        {
            cout<<"\nEnter Your Account No. : ";
            cin>>widr;
            for(i=0; i<y; i++)
            {
                ob[i].withdraw(widr);
            }
            break;
        }
        case 4:
        {
            for(i=0; i<y; i++)
            {
                ob[i].display();
            }
            break;
        }
        case 5:
        {
            cout<<"\nEnter Your Account No. ";
            cin>>srch;
            for(i=0; i<y; i++)
            {
                ob[i].searches(srch);
            }
            break;
        }
        case 6:
            {
                break;
            }
        default :
        {
            cout<<"\nYou Have Pressed The Wrong key :(:( ...  Please Enter The Valid Key!!!\n\n";
            break;
        }
        }
    }
}
