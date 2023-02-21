//Write program to count even and odd numbers in an array....

#include<iostream>
using namespace std;
int main()
{
	int i,k,m;
	int arr[5];
	cout<<"Enter the values in array : "<<endl;
	     for(i=0;i<5;i++)
	     {
	     	cout<<"Enter value "<<i+1<<" : ";
	     	cin>>arr[i];
		 }
		 	k=0;
		 for(i=0;i<5;i++)
		 {
		 	if(arr[i]%2==0)
		 	k++;
         }
         	m=0;
         for( i=0; i<5 ; i++)
		 {
		 	if(arr[i]%2!=0)
		 	m++;
         }
         cout<<"Even number occurs "<<k<<" times in array "<<endl;
         cout<<"Odd numbers occurs "<<m<<" times in array "<<endl;
         return 0;
}