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
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((a[i]+a[j])==a[k])
                    {
                        flag=1;
                        cout<<endl<<i+1<<" "<<j+1<<" "<<k+1;
                        break;
                    }
                }
            }
        }
        if(flag==0)
        {
            cout<<endl<<"NO SEQUENCE FOUND";
        }
        t--;
    }
    return 0;
}