#include <iostream>
using namespace std;

void priv();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int main() {
		priv();
		cout << add(2, 3) << endl;
		cout << 2*subtract(2, 3) << endl;
		cout << multiply(2,3) << endl;
		return 0;
}