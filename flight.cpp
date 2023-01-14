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

    cout<<"Enter the choice : ";
    cin>>lchoice;
    
    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
            {
                cout<<"______Customers______\n"<<endl;
                d.information()
                cout<<"Press any key to go back to Main menu";
                cin>>back;
                
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
            }
        case 2:
        {
            cout<<"_______Book a flight using this system______"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_______GET YOUR TICKET_______\n"<<endl;
            t.bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";
        }
    }
}


int main()
{
    Management Mobj;
    return 0;
}