#include<iostream>

using namespace std;

int main()
{

	int num1, num2,result;
	int operation; //i�lem de�eri toplamam i�in 1, ��karma i�in 2, �arpma i�in 3, bolme i�in 4 �eklindedir.

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