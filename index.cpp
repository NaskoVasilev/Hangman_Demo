#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

    // added new comment
    if (b == 0) {
        cout << "Cannot deivide by zero";
        return 0;
    }

	cout << a / b;

    return 0;
}