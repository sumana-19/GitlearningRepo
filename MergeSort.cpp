#include <bits/stdc++.h>

using namespace std;
#define f1(a,b,c) for(a=b;a<=c;a++)
#define f(a,b,c) for(a=b;a<c;a++)


void merge(int ar[],int l,int m,int r)
{
  int nl,nr;
  nl=m-l+1; nr=r-m;
  int larr[nl],rarr[nr];

  int i;
  f(i,0,nl)
  larr[i]=ar[l+i];

  f(i,0,nr)
  rarr[i]=ar[m+1+i];
   i=0; int j=0,k=l;
  while(i<nl && j<nr)
  {  if(larr[i]<=rarr[j])
  	{ ar[k]=larr[i];
  	 i++; k++;
  	}
  	 else 
  	 {ar[k]=rarr[j];
  	 j++;}
  	 k++ ;

  }
  while(i<nl)
  {
  	 ar[k]=larr[i];
  	 i++;
  	 k++;
  }

  while(j<nr)
  {
  	 ar[k]=rarr[j];
  	 j++;
  	 k++;
  }
}

int main()
{   void display(int ar[],int n);
    void mergesort(int ar[],int l,int r);
    
    int n,ar[1000],i,j;
    cin>>n;
    f1(i,0,n)
    cin>>ar[i];

    display(ar,n);

    mergesort(ar,0,n-1);

    display(ar,n);

}

void mergesort(int ar[],int l,int r)
{  if(l<r)
	{  int m;
       m=l+(r-1)/2;
       mergesort(ar,l,m);
       mergesort(ar,m+1,r);
       merge(ar,l,m,r);

	}
}


  void display(int ar[],int n)
  { int i;
  	f(i,0,n)
  	cout<<ar[i]<<" ";
  }













