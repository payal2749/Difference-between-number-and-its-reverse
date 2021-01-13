#include <bits/stdc++.h>
using namespace std;

int func(int a,int b,int k)
{
  int count=0,r,j;
  for(int i=a;i<=b;i++)
  {
     int sum=0;
     int temp=i;
     while(temp!=0)
     {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
     }
    
     j=abs(sum-i);
     if(j%k==0)
         count++;
     
         
  }
  cout<<count<<endl;
   
}

int main()
{
   int a=20,b=23,k=6;
   func(a,b,k);
   
   return 0;    
}