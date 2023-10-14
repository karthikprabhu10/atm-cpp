#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
float bal=2000.0;
int pin=2468;
class atm
{
private:
    int choice,pin_ver,votp,gpin1,gpinf,step,ced,back;
    float camt,with_amt,dep_amt;
    
public:
   // int choicef();
    float with_money();
    float dep_money();
    int gpin();
    int verf(int pinv);
    int balc();
    
    
};

atm p4;
//ATM PIN VERIFICATION
int atm::verf(int pinv)
{
    if(pin==pinv)
    {
        return 1;
    }
        else
    {    
        return 0;
    }
}


//green pin genration
int atm::gpin() {
    //atm p2;
    step=0;
   loc2:
   if(step==1)
   {
        step=1;
         
   }   
   else
        system("CLS");
       

   cout << "Enter your OTP: ";
   cin >> votp;

   // ####otp verification###
   system("CLS");
   cout << "Enter your new green PIN: ";
   cin >> gpin1;
   system("CLS");
   cout << "Re-Enter your green PIN: ";
   cin >> gpinf;

   if (gpin1 == gpinf) {
       pin = gpinf;
       return 0;
   } else {
       system("CLS");
       cout << ">>>Entered PINs do not match.<<<<" << endl;
       step=1;
       goto loc2;      
}
cout<<"press 1 to go back"<<endl;
cin>>back;
if(back==1)
{
   // p2.choicef();
}
else
{
       // p2.choicef();
}
}


int atm::balc()
{   system("CLS");
    atm p2;
loc4:   cout<<"Enter you PIN"<<endl;
   cin>>pin_ver;
   switch (p2.verf(pin_ver))
   {
   case 1:
   system("CLS");
    cout<<"Your Current Balence: "<<bal<<endl;
    break;
   
   default:
   system("CLS");
   cout<<"Incorrect PIN Try Again!"<<endl;
   goto loc4;
    break;
   }
cout<<"press 1 to go back"<<endl;
cin>>back;
if(back==1)
{
   // p2.choicef();
}
else
{
        //p2.choicef();
}
return 0;
}


// withdraw money
float atm::with_money()
{  atm p2;
   system("CLS");
   cout<<"enter amount to withdarw"<<endl;
   cin>>with_amt;
   system("CLS");
loc3:   cout<<"Enter you PIN"<<endl;
   cin>>pin_ver;
   switch (p2.verf(pin_ver))
   {
   case 1:
   camt=bal-with_amt;
   system("CLS");
    cout<<"cash withdrawed successfully"<<endl;
    break;
   
   default:
   system("CLS");
   cout<<"Incorrect PIN Try Again!"<<endl;
   goto loc3;
    break;
   }
cout<<"press 1 to go back"<<endl;
cin>>back;
if(back==1)
{
   // p2.choicef();
}
else
{
       // p2.choicef();
}
return camt;
}

//deposit money
float atm::dep_money()
{
   atm p2;
   system("CLS");
   cout<<"enter amount to deposit"<<endl;
   cin>>dep_amt;
   system("CLS");
loc4: cout<<"Enter you PIN"<<endl;
      cin>>pin_ver;
      switch (p2.verf(pin_ver))
   {
   case 1:
   camt=bal+dep_amt;
   system("CLS");
    cout<<"cash deposition successfull"<<endl;
    break;
   
   default:
   system("CLS");
   cout<<"Incorrect PIN Try Again!"<<endl;
   goto loc4;
    break;
   }
cout<<"press 1 to go back"<<endl;
cin>>back;
if(back==1)
{
   // p2.choicef();
}
else
{
        //p2.choicef();
}
return camt;   
}

/*atm::~atm()
{
} */


int main()
{   atm p1;
   //atm syss;
    int choice;
    system("CLS");
   // atm p1;
//    p1.choicef();
   while (1)
   {
      loc1:  system("CLS");
    cout<<"     >>>select<<< "<<endl;
    cout<<"1. Genrate Green PIN"<<endl;
    cout<<"2. check balence"<<endl;
    cout<<"3. withdraw money"<<endl;
    cout<<"4. deposit money"<<endl;
    cin>>choice;
   
    switch (choice)
    {
    case 1:
        p1.gpin();
        break;
    case 2:
        p1.balc();
        break;
    case 3:
        bal=p1.with_money();
        break;
    case 4:
        bal=p1.dep_money();
        break;    
    default:
        cout<<"invalid input Try again";
        goto loc1;
        break;

    } }
    return 0;
}
/*


By: Karthik Prabhu
github: https://github.com/karthikprabhu10
Ver : 2.10
update : 14 Oct 2023
  -K4X


*/
