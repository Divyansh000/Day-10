#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double sqrt,temp;
    cin>>n;
    if(n==0)
    {
        cout<<"false";
    }
    else if(n==1)
    {
        cout<<"true";
    }
    else
    {
    sqrt=n/2;
    while(temp!=sqrt)
    {
        temp=sqrt;
        sqrt=((n/temp)+temp)/2;
    }
    cout<<sqrt<<endl;
    int flr=floor(sqrt);
    int x=flr*flr;
    cout<<"x = "<<x<<endl;
    if(x==n)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


    }
    return 0;
}
