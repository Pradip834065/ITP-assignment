#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"enter the length of the three sides of the triangle:";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3)
      cout<<"equilateral triangle";
    else if(s1==s2 || s2==s3 || s1==s3)
      cout<<"isosceles triangle";
    else 
      cout<<"scalene triangle";
return 0;
}