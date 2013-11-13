#include <iostream>

using namespace std;


int main()
{
	int impData = 1;
	int buffer[10];

	for(int i=0;i<15;i++)
	{
		buffer[i]=7;
	}

	cout<<"after buffer overflow :"<<impData<<endl;
	return 0;
}
