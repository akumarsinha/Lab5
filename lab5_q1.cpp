// program to find maximum between two numbers
#include<iostream>
using namespace std;

//main function
int main()
{
             //declaring variables
             int a, b;
	cout<<"find maximum between two numbers"<< endl;
	cout<<" enter number:" <<endl;
        cin>>a>>b;
	if(a>b)
	{
		cout << a << "is maximum between" << a <<" and " << b << endl;
	}
	else
	{	
	cout<< b << " is maximum between" << a <<" and " << b << endl;
}
        return 0;
}           
