#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int tar;
        int count=0;
        cin>>tar;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[i]-a[j])==tar||(a[j]-a[i])==tar)
                {
                    count++;
                }
            }
        }
        cout<<endl<<count;
        t--;
    }
    return 0;
}