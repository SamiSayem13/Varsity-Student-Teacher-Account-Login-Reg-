#include<bits/stdc++.h>
#include<windows.h>
#include<iomanip>
using namespace std;

int n;

void choosingOption();
void display();
void studentLogin();
void teacherLogin();
void BoxForloginpage();
void uniqcodelogin();
void checkuniqcode();
void RorL();
void studentr();
void teacherr();
void sforgot();
void tforgot();


//TO display the Welcome To BUBT Annex
void display()
{
     vector<string>Dp=
    {
        " __          ________ _      _____ ____  __  __ ______   _______ ____    ____  _    _ ____ _______            _   _ _   _ ________   __",
        " \\ \\        / /  ____| |    / ____/ __ \\|  \\/  |  ____| |__   __/ __ \\  |  _ \\| |  | |  _ \\__   __|     /\\   | \\ | | \\ | |  ____\\ \\ / /",
        "  \\ \\  /\\  / /| |__  | |   | |   | |  | | \\  / | |__       | | | |  | | | |_) | |  | | |_) | | |       /  \\  |  \\| |  \\| | |__   \\ V / ",
        "   \\ \\/  \\/ / |  __| | |   | |   | |  | | |\\/| |  __|      | | | |  | | |  _ <| |  | |  _ <  | |      / /\\ \\ | . ` | . ` |  __|   > <  ",
        "    \\  /\\  /  | |____| |___| |___| |__| | |  | | |____     | | | |__| | | |_) | |__| | |_) | | |     / ____ \\| |\\  | |\\  | |____ / . \\ ",
        "     \\/  \\/   |______|______\\_____\\____/|_|  |_|______|    |_|  \\____/  |____/ \\____/|____/  |_|    /_/    \\_\\_| \\_|_| \\_|______/_/ \\_\\"
    };

     for (int i = 0; i < Dp.size(); i++)
    {

            for(int i=0;i<5;i++)
            {
                cout<<"          ";
            }
        string line = Dp[i];

    for (int j = 0; j < line.length(); j++)
    {

            char character = line[j];
            cout << character;
            cout.flush();
            Sleep(0);                       //sleep option
    }
        cout << endl;

    }
}
//end of TO display the Welcome To BUBT Annex


//Display for funtions
void tempDisplay()
{
     vector<string>Dp=
    {
        " __          ________ _      _____ ____  __  __ ______   _______ ____    ____  _    _ ____ _______            _   _ _   _ ________   __",
        " \\ \\        / /  ____| |    / ____/ __ \\|  \\/  |  ____| |__   __/ __ \\  |  _ \\| |  | |  _ \\__   __|     /\\   | \\ | | \\ | |  ____\\ \\ / /",
        "  \\ \\  /\\  / /| |__  | |   | |   | |  | | \\  / | |__       | | | |  | | | |_) | |  | | |_) | | |       /  \\  |  \\| |  \\| | |__   \\ V / ",
        "   \\ \\/  \\/ / |  __| | |   | |   | |  | | |\\/| |  __|      | | | |  | | |  _ <| |  | |  _ <  | |      / /\\ \\ | . ` | . ` |  __|   > <  ",
        "    \\  /\\  /  | |____| |___| |___| |__| | |  | | |____     | | | |__| | | |_) | |__| | |_) | | |     / ____ \\| |\\  | |\\  | |____ / . \\ ",
        "     \\/  \\/   |______|______\\_____\\____/|_|  |_|______|    |_|  \\____/  |____/ \\____/|____/  |_|    /_/    \\_\\_| \\_|_| \\_|______/_/ \\_\\"
    };

     for (int i = 0; i < Dp.size(); i++)
    {

            for(int i=0;i<5;i++)
            {
                cout<<"          ";
            }
        string line = Dp[i];

    for (int j = 0; j < line.length(); j++)
    {

            char character = line[j];
            cout << character;
            cout.flush();

    }
        cout << endl;

    }

}
//end of tempDisplay


//TO choose option between a teacher and student
void choosingOption()
{

    cout<<endl<<endl<<endl;
    cout<<"                                                                    ";
    cout<<"1.Are you a Student?";
    cout<<"                                                               ";
    cout<<"2.Are You a Teacher?"<<endl<<endl<<endl<<endl;
    cout<<"                                                                                                      ";

    while(true)
    {
    cout<<"    Press the number to choose: ";
    cin>>n;

    if(n==1)
    {
        RorL();
        break;
    }
    else if(n==2)
    {
        RorL();
        break;
    }
    else
    {
                                            cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t                         +------------------------------------------------+"<<endl;
        cout<<"                                                                                                 |You choose the wrong option please try again....|"<<endl;
                                                              cout<<"\t\t\t\t\t\t\t\t\t                         +------------------------------------------------+";
        cout<<endl<<endl<<endl<<endl;
        cout<<"                                                                                                      ";
    }

    }


}
//end of TO choose option between a teacher and student


//Registration or log in option check
void RorL()
{
    int a;

    cout<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t          1.Register?         2.Log in?"<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t               3.Forgot Password?"<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t               Choose you option:";
    cin>>a;

  while(true)
  {


    if(a==1)
    {
        cout<<endl<<endl;
        uniqcodelogin();
        break;
    }
    else if(a==2)
    {
     if(n==1)
    {
        studentLogin();
        break;
    }
    else if(n==2)
    {
        teacherLogin();
        break;
    }
    }
    else if(a==3)
    {
    if(n==1)
    {
        sforgot();
        break;
    }
    else if(n==2)
    {
        tforgot();
        break;
    }
    }
    else
    {  cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t                          +-------------------------------------------------+"<<endl;
                   cout<<"\t\t\t\t\t\t\t\t\t                          |You choose the wrong option please try again.....|"<<endl;
                   cout<<"\t\t\t\t\t\t\t\t\t                          +-------------------------------------------------+"<<endl;
                   cout <<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t               Choose you option:";
                   cin >> a;
    }
   }

  }
//end of Registration or login option check


//student login function
void studentLogin()
{
        string Sid;
        string Spass;

        system("cls");
        tempDisplay();



        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t     ";

        BoxForloginpage();
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t             Student Login";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      Type Your id:";
        cin>>Sid;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      Type your password:";
        cin>>Spass;

        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t     ";
        BoxForloginpage();

        string storedid,storedpass;

        ifstream readfile(Sid + ".txt");

        if(readfile.is_open())
        {
            getline(readfile,storedid);
            getline(readfile,storedpass);
            readfile.close();

        if(Sid==storedid&&Spass==storedpass)
        {
            cout<<"Log in successful!"<<endl;
        }
        else
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t                      Incorrect ID or Password."<<endl;
            Sleep(2500);
            studentLogin();
        }

        }
        else
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t     User Not Found! Try again......"<<endl;
        }


}
//end of student login function


//Teacher login funtion
void teacherLogin()
{
        string Tid;
        string Tpass;

        system("cls");
        tempDisplay();

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";

        BoxForloginpage();
        cout<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t                    Teacher Login";
        cout<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type Your Teacher Code:";
        cin>>Tid;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type your password:";
        cin>>Tpass;

        cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";
        BoxForloginpage();

        string storedid,storedpass;

        ifstream readfile(Tid + ".txt");

        if(readfile.is_open())
        {
            getline(readfile,storedid);
            getline(readfile,storedpass);
            readfile.close();

        if(Tid==storedid&&Tpass==storedpass)
        {
            cout<<"Log in successful!"<<endl;
        }
        else
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t\t\t\t                      Incorrect ID or Password."<<endl;
            Sleep(2500);
            teacherLogin();
        }

        }
        else
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t      User Not Found! Try again......"<<endl;
        }

}
//end of teacher login function


//login page ascii art
void BoxForloginpage()
{
    string str="+----------------------------------------+";
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i];
        Sleep(1);
    }
}
//end of login page ascii art


//start of uniqccode
void uniqcodelogin()
{
    string check;
    string filecode;
    bool ch=false;

    cout<<"\t\t\t                                                                             Type The unique code given by the Authority:";
    cin>>check;

    ifstream file("code.txt");

    while(getline(file,filecode))
    {
        if(check==filecode)
        {
            ch=true;
            break;
        }
    }

    file.close();

    if(ch&&n==1)
    {
        studentr();
    }
    else if(ch&&n==2)
    {
        teacherr();
    }
    else
    {   cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t                                                +-------------------------------------+"<<endl;
                    cout<<"\t\t\t\t\t\t                                                        |Try Again you may type the wrong code|"<<endl;
                    cout<<"\t\t\t\t\t\t                                                        +-------------------------------------+"<<endl<<endl;
        uniqcodelogin();

    }

}
//end of uniqcode


//student register
void studentr()
{

        string Spass;
        string sregister;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";

        BoxForloginpage();
        cout<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t                    Student Register";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type Your id:";
        cin>>sregister;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type your password:";
        cin>>Spass;

        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";
        BoxForloginpage();



        ofstream writefile(sregister+".txt");

        writefile<<sregister<<endl<<Spass<<endl;

        writefile.close();

        studentLogin();



}
//end of student register


//Teacher register
void teacherr()
{
        string tpass;
        string tregister;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";

        BoxForloginpage();
        cout<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t                    Teacher Register";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type Your id:";
        cin>>tregister;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type your password:";
        cin>>tpass;

        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";
        BoxForloginpage();



        ofstream writefile(tregister+".txt");

        writefile<<tregister<<endl<<tpass<<endl;

        writefile.close();

        teacherLogin();
}
//end of Teacher register


//student forgot
void sforgot()
{
        string Spass;
        string sregister;
        string storedId, storedPass, newPass;

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";

        BoxForloginpage();
        cout<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t                Student Password Change";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type Your id:";
        cin>>sregister;

        ifstream readfile(sregister+".txt");

        if(!readfile.is_open())
        {

        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       ID not found!" << endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t                      ";
        BoxForloginpage();
        system("cls");
        tempDisplay();
        RorL();
        }
       getline(readfile, storedId);
       getline(readfile, storedPass);
       readfile.close();


    if (storedId==sregister)
    {

        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       Type your new password: ";
        cin >> newPass;


        ofstream writefile(sregister + ".txt");
        writefile<<sregister<<endl<<newPass<<endl;
        writefile.close();

        cout << endl << endl << "\t\t\t\t\t\t\t\t\t\t\t\t      ";
        BoxForloginpage();
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t       Password changed successfully!" << endl;
    }
    else
    {
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       ID mismatch! Please try again." << endl;
    }

    studentLogin();

}
//student forgot end here


//Teacher forgot
void tforgot()
{
        string Spass;
        string tregister;
        string storedId, storedPass, newPass;

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t      ";

        BoxForloginpage();
        cout<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t                Teacher Password Change";
        cout<<endl<<endl<<endl<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       Type Your id:";
        cin>>tregister;

        ifstream readfile(tregister+".txt");

        if(!readfile.is_open())
        {

        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       ID not found!" << endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t                      ";
        BoxForloginpage();
        system("cls");
        tempDisplay();
        RorL();
        }
       getline(readfile, storedId);
       getline(readfile, storedPass);
       readfile.close();


    if (storedId==tregister)
    {

        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       Type your new password: ";
        cin >> newPass;


        ofstream writefile(tregister + ".txt");
        writefile<<tregister<<endl<<newPass<<endl;
        writefile.close();

        cout << endl << endl << "\t\t\t\t\t\t\t\t\t\t\t\t      ";
        BoxForloginpage();
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t       Password changed successfully!" << endl;
    }
    else
    {
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t       ID mismatch! Please try again." << endl;
    }

    teacherLogin();

}
//Teacher forgot end here
