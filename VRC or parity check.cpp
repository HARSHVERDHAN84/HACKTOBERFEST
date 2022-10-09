#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,j,counter=0;
    cout<<"enter a integer number :";
    cin>>n;
    int reminder[100];
    while(n>0)
    {

        reminder[i]=n%2;
        n=n%2;
        i++;

    }
    cout<<"binary number is:";
    for(j=i-1;j>0;j--)
    {
        cout<<reminder[j];
        if(reminder[j] ==1)
        {
            counter++;
        }
    }
    if(counter%2==0)
        cout<<"it is even parity check";
    else
        cout<<"it is odd parity check";
}
