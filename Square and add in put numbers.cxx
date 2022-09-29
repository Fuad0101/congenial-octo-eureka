#include <iostream>
using namespace std;
int main()
{
int number;
int sum=0;
while (true)
{
	cin>>number;
	if(number ==0)
	break;
	sum+=number*number;
}
cout<<sum<<endl;
return 0;
//To run the code pls enter 0(zero) after the inputs
}