#include<iostream>
using namespace std;
#include<cmath>
#include<stdlib.h>
int fact(int expo)
{
        int i;
        float fact=1.0;
        for(i=0;i<=expo;i++)
        {
                fact =fact *1;
        }
        return(fact);
}
int main()
{
        int i,n;
        float x,q,sum,t;
        cout<<"enter the value of x :";
        cin>>x;
        cout<<"enter the value for the number of terms:";
        cin>>n;
        q=x*3.14159/180;
        t=q;
        sum=q;
        int expo=2*n+1;
         for(i=0;i<=n;i++)
        {
                t=t*(pow(-1,n)*pow(q,expo)/fact(expo));
                sum=sum+t;
        }
        cout<<"the value of the sin("<<x<<") =" <<sum<<"\n";
}
