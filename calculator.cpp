#include <iostream>
using namespace std;
int main() {
	char op;
	double a,b;
    cout << "*****************************CAlCULATOR*****************************" << endl;
	cout << "Pls choose an operator (+, -, *, /): ";
	cin >> op;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	switch(op){
case '+':
		cout << a+b <<" Is the sum"<< endl;
		break;
case '-':
		cout << a-b <<" Is the difference"<< endl;
		break;
case '*':
		cout << a*b <<" Is the product"<< endl;
		break;
case '/':
		cout << a/b <<" Is the quotient"<< endl;
		break;
	}
	return 0;
}