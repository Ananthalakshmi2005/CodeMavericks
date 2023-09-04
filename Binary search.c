#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of elements: "<<endl;
     cin>>n;
     int x[n];
     cout<<"Enter the elements: "<<endl;
     for(int i = 0; i < n; i++)
     {
         cin>>x[i];
     }
     int k;
     cout<<"Enter the value to look for: "<<endl;
     cin>>k;
     int lower = 0, upper = n-1, mid;
     while(true)
     {
         mid = (upper + lower) / 2;
         if(lower == upper)
         {
             cout<<"Not found";
             break;
         }
         if(x[mid] > k)
         {
             upper = mid - 1;
         }
         else if(x[mid] < k)
         {
             lower = mid + 1;
         }
         else
         {
             cout<<mid+1;
             break;
         }
     }
     return 0;
}
