#include <iostream>
using namespace std;
int main()
{
	int i;
	for ( i = 1; i <= 50; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && 1 % 7 == 0)
			cout << "FizzBuzzWoof" << endl;
		else
			if (i % 3 == 0)
				cout << "Fizz" << endl;
			else
				if (i % 5 == 0)
					cout << "Buzz" << endl;
				else if (i % 7 == 0)
					cout << "Woof" << endl;
				else cout << i << endl;
	}
	return 0;
}
