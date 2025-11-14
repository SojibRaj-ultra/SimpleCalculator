#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    char opr;
    cout<<"Enter your first number: "<<endl;
    cin>>a;
    cout<<"Enter your second number: "<<endl;
    cin>>b;
    cout<<"What do you want to work(add(+),div(/),mul(*),sub(-),percentage(%)),please choose your work or operator:"<<endl;
    cin>>opr;

    if(opr=='+')
    {
        cout<<a+b<<endl;
    }
    else if(opr=='-')
    {
        cout<<a-b<<endl;
    }
    else if(opr=='*')
    {
        cout<<a*b<<endl;
    }
     else if(opr=='/')
    {
        if(b!=0)
        {

        cout<<(float)a/(float)b<<endl;
        }
        else
            cout<<"Math Error!"<<endl;
    }
    else if(opr=='%')
    {
        cout<< (float)(a*b)/100<<endl;
    }

    else
        cout<<"Invalid operator!"<<endl;









    return 0;
}
