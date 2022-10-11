#include<iostream>
using namespace std;
int main()
{
	enum meal{ breakfast, lunch, dinner};
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;
	
	cout<<(dinner==1);
	return 0;
}