#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "second degree eqaution: ax*x + bx + c = 0\n";
	int a, b, c;
	cout << "enter a: "; cin >> a; cout << endl;
	cout << "enter b: "; cin >> b; cout << endl;
	cout << "enter c: "; cin >> c; cout << endl;

	int D = pow(b,2) - 4*a*c;
	cout << "D = b*b - 4*a*c = " << D << endl << endl;
	int x = -b / (2 * a);
	int x1 = (-b + sqrt(D)) / (2 * a);
	int x2 = (-b - sqrt(D)) / (2 * a);

	if (D < 0) {
		cout << "we have D < 0 \n\n";
		cout << "the equation does not have solutions";
	}
	else if (D == 0) {
		cout << "we have D = 0\n\n";
		cout << "the eqaution has one solution is:\n\n";
		cout << "x = " << - b << " / " << 2 << " * " << a << " = " << x << endl << endl;
		cout << "S = " << "{" << "x = " << x << "}" << endl << endl;
	}
	else {
		cout << "we have D > 0 \n\n";
		cout << "the eqaution has two solution are:\n\n";
		cout << "x1 = " << "(" << - b << " + " << " sqrt (D)) " << " / (" << 2 << " * " << a << ") = " <<x1<< endl << endl;
		cout << "x2 = " << "(" << - b << " - " << " sqrt (D)) " << " / (" << 2 << " * " << a << ") = " << x2 << endl << endl;
		cout << "S = { x1 = " << x1<< ", x2 = " << x2 << " }\n";
	}
	return 0;
}