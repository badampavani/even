//this is a program to check whether given number is even or odd
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<" is a even number"<<endl;
	}
	else
	{
		cout<<n<<"is not a even numer"<<endl;
	}
	return 0;
}
