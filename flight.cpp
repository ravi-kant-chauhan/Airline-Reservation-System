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

class Details
{
    public:
    
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID : ";
        cin>>cId;
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\nEnter the age : ";
        cin>>age;
        cout<<"\nAddress : ";
        cin>>add;
        cout<<"\nGender : ";
        cin>>gender;
        cout<<"Your details are saved with us\n"<<endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:

    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for(int a = 0; a<6; a++)
        {
            cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }

        cout<<"\nWelcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"________________Welcome to Dubai Emirates____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. DUB - 498"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
                cout<<"2. DUB - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
                cout<<"3. DUB - 508"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=14000;
                    cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=9000;
                    cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 2:
            {
                cout<<"________________Welcome to Canadian Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. CA - 209"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 34000"<<endl;
                cout<<"2. CA - 658"<<endl;
                cout<<"\t09-01-2022 4:00AM 12hrs Rs. 18000"<<endl;
                cout<<"3. CA - 508"<<endl;
                cout<<"\t11-01-2022 11:00AM 11hrs Rs. 14000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=34000;
                    cout<<"\nYou have successfully booked the flight CA - 209"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=18000;
                    cout<<"\nYou have successfully booked the flight CA - 658"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=14000;
                    cout<<"\nYou have successfully booked the flight CA - 508"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 3:
            {
                cout<<"________________Welcome to UK Airways____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. CA - 209"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 34000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }

            case 4:
            {
                cout<<"________________Welcome to US Airways____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. US - 219"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 42000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=42000;
                    cout<<"\nYou have successfully booked the flight US - 219"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 5:
            {
                cout<<"________________Welcome to Australian Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. AS - 209"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 45000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=45000;
                    cout<<"\nYou have successfully booked the flight AS - 209"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            case 6:
            {
                cout<<"________________Welcome to European Airlines____________\n"<<endl;
                cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                cout<<"Following are the flights\n"<<endl;
                cout<<"1. EU - 208"<<endl;
                cout<<"\t08-01-2022 8:00AM 10hrs Rs. 39000"<<endl;

                cout<<"\nSelect the flight you want to book : ";
                cin>>choice1;

                if(choice1==1)
                {
                    charges=39000;
                    cout<<"\nYou have successfully booked the flight EU - 208"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                
                else{
                    cout<<"Invalid input, shifting to the previous menu"<<endl;
                    flights();
                }
                
                cout<<"Press any key to go back to the main menu"<<endl;
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            default :
            {
                cout<<"Invalid input, Redirecting you to the main menu !"<<endl;
                mainMenu();
                break;
            }
        }
    }
};

float registration::charges;
int registration::choice;

Class ticket : public registration, Details
{
    public:
        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {   
                outf<<"__________XYZ Airlines_________"<<endl;
                outf<<"______________Ticket___________"<<endl;
                outf<<"_______________________________"<<endl;

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription"<<endl;

                if(registration::choice ==1)
                {
                    destination="Dubai";
                }
                else if(registration::choice==2)
                {
                    destination="Canada";
                }
                else if(registration::choice==3)
                {
                    destination="UK";
                }
                else if(registration::choice==4)
                {
                    destination="USA";
                }
                else if(registration::choice==5)
                {
                    destination="Australia";
                }
                else if(registration::choice==6)
                {
                    destination="Europe";
                }
                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost :\t\t"<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
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
                d.information();
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
            t.dispbill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket ";

            cin>>back;

            if(back==1)
            {

                t.dispBill();
                cout<<"Press any key to go back to main menu:";
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t_________Thank You_______"<<endl;
            break;
        }
        default :
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }
}


int main()
{
    Management Mobj;
    return 0;
}