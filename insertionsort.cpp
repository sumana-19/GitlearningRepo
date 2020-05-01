#include <bits/stdc++.h>

using namespace std;
#define f1(a,b,c) for(a=b;a<=c;a++)
#define f(a,b,c) for(a=b;a<c;a++)
int main()
{
    int n,ar[1000],i,j;
    cin>>n;
    f1(i,0,n)
    cin>>ar[i];

    int m=ar[n-1];
    i=n-2;
    while(ar[i]>m)
    {  
        ar[i+1]=ar[i];
        i--;
        f1(j,0,n)
        cout<<ar[j]<<" ";
        cout<<endl;
    }
    ar[i+1]=m;
     f1(j,0,n)
        cout<<ar[j]<<" ";
        cout<<endl;


}


#include <bits/stdc++.h>
#include<string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

#define f1(a,b,c) for(a=b;a<=c;a++)
#define f(a,b,c) for(a=b;a<c;a++)

int main()
{
   int t;
   cin>>t;
   while(t--)
   {   int i,j,k=0,a[10000],b[10000],l=0,m=0;
       string s,rev;
       cin>>s;
       
     int flag=0;
       int n=s.length();
       
       f(i,0,(n)/2)
       {    int k=n-i-1;
            if(abs(s[i+1]-s[i])!=abs(s[k]-rev[k-1]));
              {cout<<"Not Funny"<<endl;
               flag=1;
                break;         
              }
       }
       

       
       if(flag==0) cout<<"Funny"<<endl;
         






   }


}
