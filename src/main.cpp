#include <iostream>
using namespace std;

void priv();
int add(int a, int b);
int subtract(int a, int b);

int main() {
		priv();
		cout << add(2, 3) << endl;
		cout << subtract(2, 3) << endl;

		return 0;
}