#include<bits/stdc++.h>
using namespace std;

void transver(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
     cout<<a[i];
    }
}
void update(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=-1;
        }
    }
}
void delete1(int a[],int &n)
{
      for(int i=0;i<n;i++)
      {
        if(a[i]<0)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n=n-1;
        }
      }
}
      

int main()
{
    int n;
    cout<<"value of n"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //transver(a,n);
    //update(a,n);
   // transver(a,n);
    delete1(a,n);
    transver(a,n);
    int t=sizeof(a)/sizeof(a[0]);
    cout<<"size"<<t;
}
