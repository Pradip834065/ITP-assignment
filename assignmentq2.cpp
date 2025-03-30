#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter a number: ";
    cin>>i;
    if(i>0)
      cout<<"positive"<<endl;
    else if (i<0)
       cout<<"negative"<<endl;
    else
       cout<<"zero"<<endl;
return 0;
}