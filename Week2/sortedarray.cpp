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
        int key =0;
        cin>>key;
        int l=0;
        int h=n-1;
        int flag=0;
        while(l<=h)
        {
            int mid=(l+h)/2;

            if(a[mid]==key)
            {
                flag=1;
                break;
            }
            else if(a[mid]<key)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        if(flag==0)
        {
            cout<<endl<<"NOT PRESENT";
        }
        else
        {
            // finding first index
            l=0;
            h=n-1;
            int ans=0;
            while(l<=h)
            {
                int mid=(l+h)/2;
                if(a[mid]==key)
                {
                    ans=mid;
                    h=mid-1;
                }
                else if(a[mid]<key)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
            int ans2=0;
            l=0;
            h=n-1;
             while(l<=h)
            {
                int mid=(l+h)/2;
                if(a[mid]==key)
                {
                    ans2=mid;
                    l=mid+1;
                }
                else if(a[mid]<key)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
            cout<<"PRESENT- "<<ans2-ans+1;
        }

        t--;
    }
    return 0;
}