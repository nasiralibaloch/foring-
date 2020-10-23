#include<iostream>
using namespace std;
int main()
{
	int counter=1;
	do
	{	
		cout<<counter<<endl;
		counter++;
		if(counter==28)
		continue;
		
	}
	while(counter<=32);
	
	return 0;
}
