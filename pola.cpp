#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	
	cout<<"masukkan nilai n : ";
	cin>>n;
	
    cout<<"Pola 1"<<endl;
    cout<<"=============="<<endl;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"Pola 2"<<endl;
	cout<<"=============="<<endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<"Pola 3"<<endl;
	cout<<"=============="<<endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout<<"*";
		}

		cout<<endl;
	}
	cout<<"pola 4"<<endl;
	cout<<"============="<<endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j <= i;  j++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}

