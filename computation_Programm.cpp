#include <iostream>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;
struct comp {
    string name;
    float ppayds=0;
} p[10];
int main ()
{   double onepay;
    float np, totalpayds, previousdept=0,c=0, counter = 0;
    cout<<"Welcome to FAST COMPUTATION program"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"How many friend in this computation ?"<<endl;
    cin>>np;
    for (int i=1; i<=np; i++ )
    {   cout<<"place enter "<<i<<". participants name :"<<endl;
        cin>>p[i].name;
        cout<<"place enter all payments of ["<<p[i].name<<"] one by one like :"<<endl<<"one payment >> enter ."<<endl<<"when all payments did finish enter 0 to continue"<<endl;
        do {
            cout<<"enter one payment : ";
            cin>>onepay;
            p[i].ppayds= c+onepay;
            c= p[i].ppayds;
        } while ( onepay != 0 );
        c=0;
        totalpayds = previousdept+p[i].ppayds;
        previousdept = totalpayds;
        system("cls");
    }
    system("cls");
    float avg = totalpayds/np;
    cout<<"The total payments are equal to >>> "<<totalpayds<<endl<<"Debt amount per person is >>> "<<avg<<endl<<"-------------------------------------------------------------"<<endl;
    for (int i=1; i<=np; i++ )
    {
        if (p[i].ppayds>avg)
            cout<<p[i].name<<"   paid "<<p[i].ppayds<<"   his computation is +"<<p[i].ppayds-avg<<endl;
        else
            cout<<p[i].name<<"   paid "<<p[i].ppayds<<"   his computation is -"<<avg-p[i].ppayds<<endl;
    }
    return 0;
}