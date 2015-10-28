#include <iostream>

using namespace std;

int main()
{
	int N,fib=0,fib1=1,i;
	
	cout << "N=";
	cin>>N;
	
	for(i=1;i<=N;i++)
	{
		fib+=fib1;
		fib1=fib-fib1;
		
		cout <<fib<<"\n";
	}
	cout<<"Die "<<N<<".te Fibonacci-Zahl ist "<<fib<<endl;
	
	return 0;
}
