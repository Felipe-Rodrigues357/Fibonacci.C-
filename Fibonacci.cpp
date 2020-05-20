#include<iostream>
using namespace std;
int main()
{
	int fibo=0,num1=0,num2=1,qnt,totalfibo=0;
	cout<<"Quantos termos da serie Fibonacci deseja ver? ";
	cin>>totalfibo;
	cout<<"Os termos sao: \n"<<num1<<"\n"<<num2<<"\n";
	for (qnt=1;qnt<=totalfibo;qnt++)
	{
		fibo=num1+num2;
		num1=num2;
		num2=fibo;
		cout<<fibo<<"\n";
	}
}
