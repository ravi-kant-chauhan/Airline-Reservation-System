#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:

        Management()
        {
            mainMenu();
        }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t           XYZ Airlines  \n"<<endl;
    cout<<"\t___________Main Menu_________"<<endl;

    cout<<"\t_______________________________"<<endl;
    cout<<"\t|\t|\t|\t|\t|\t|\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration   \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges   \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit   \t|"<<endl;
    cout<<"\t|\t|\t|\t|\t|\t|"<<endl;
    cout<<"\t________________________________"<<endl;

    cout<<"Enter teh choice : ";
    cin>>lchoice;
    
    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1;
            {
                cout<<"______Customers______\n"<<endl;
                d.information()
                cout<<"Press 1 to go back to Main menu";
                cin>>back;
                
            }
    }
}


int main()
{
    Management Mobj;
    return 0;
}