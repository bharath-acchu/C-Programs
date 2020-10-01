#include <iostream>
using namespace std;
int main()
{
	int arr[5],temp;
	cout<<“Enter the elements”<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<5;i++)
	{
		for(int j=i;j>=1;j–)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
            		else
			break;
		}
	}
	cout<<“sorted array”<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}