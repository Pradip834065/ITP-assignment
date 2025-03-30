#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"enter operator +,-,*,%,/: ";
    cin>>op;
    switch(op){
        case '+':
          cout<<"result="<<a+b;
          break;
        case '-':
          cout<<"result="<<a-b;
          break;
        case '*':
          cout<<"result="<<a*b;
          break;
        case '/':
          if(b!=0)
            cout<<"result="<<a/b;
          else
            cout<<"not defined";
          break;
        case '%':
          if(b!=0)
           cout<<"result"<<a%b;
          else
           cout<<"not defined";
          break;
    }
    return 0;
}