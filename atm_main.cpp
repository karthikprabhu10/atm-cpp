#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class atm
{
private:
    int choice,with_amt,dep_amt,pin_ver,votp,gpin1,gpinf,pin,step;
    float bal;
public:
    int choicef();
    int with_money();
    int dep_money();
    int gpin();

};
//selecting choice (screen 1)
atm::choicef(/* args */)
{   
    system("CLS");
    cout<<"     >>>select<<< "<<endl;
    cout<<"1. Genrate Green PIN"<<endl;
    cout<<"2. check balence"<<endl;
    cout<<"3. withdraw money"<<endl;
    cout<<"4. deposit money"<<endl;
    cin>>choice;
    return choice;
}
//green pin genration
int atm::gpin() {
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
}
// withdraw money
atm::with_money()
{
   system("CLS");
   cout<<"enter amount to withdarw"<<endl;
   cin>>with_amt;
   system("CLS");
   cout<<"Enter you PIN"<<endl;
   cin>>pin_ver;
   return 0;
}

//deposit money
atm::dep_money()
{
   system("CLS");
   cout<<"enter amount to deposit"<<endl;
   cin>>dep_amt;
   system("CLS");
   cout<<"Enter you PIN"<<endl;
   cin>>pin_ver;
   return 0;
}

/*atm::~atm()
{
} */

int main()
{
    system("CLS");
    atm p1;
    int choice1;
   loc1: choice1= p1.choicef();
    switch (choice1)
    {
    case 1:
        p1.gpin();
        break;
    case 2:
        p1.dep_money();
        break;
    case 3:
        p1.with_money();
        break;
    case 4:
        p1.dep_money();
        break;    
    default:
        cout<<"invalid input Try again";
        goto loc1;
        break;

    }
    return 0;
}
