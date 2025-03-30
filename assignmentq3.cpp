#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    cout<<"enter a number: ";
    cin>>i;
    int var=i;
    do{
        sum=sum+var%10;
        var=var/10;
    }while(var!=0);
    cout<<sum;
return 0;

}