#include<iostream>

using namespace std;

int main()
{

	int num1, num2,result;
	int operation; //iþlem deðeri toplamam için 1, çýkarma için 2, çarpma için 3, bolme için 4 þeklindedir.

	cout << "Enter Number1:";
	cin >> num1;
	cout << "Enter Number2:";
	cin >> num2;

	cout << "Select the operation:";
	cin >> operation;

	if(operation==1)
	{
		result = num1 + num2;
		//cout << "The result=" << result;
	}
	else if (operation == 2) 
	{
		result = num1 - num2;
		//cout << "The result=" << result;
	}
	else if (operation == 3)
	{
		result = num1 * num2;
		//cout << "The result=" << result;
	}
	else if (operation == 4)
	{
		result = num1 / num2;
		//cout << "The result=" << result;
	}else
	{
		cout << "You entered undefined operation";
	}
	     
	cout << "The result=" << result << endl;

	return 0;

}