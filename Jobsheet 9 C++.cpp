#include <iostream>
using namespace std;
int main()
{
	int i;
	char nama[20]={'P','R','A','S'};
	char nama2[20]="PRAS";
	cout<<"Array per karakter = ";
	for(i=0;i<5;i++)
	{
		cout<<nama[i];
		
	}
	cout<<endl;
	cout<<"Array string = "<<nama2<<endl<<endl;
	return 0;
}
