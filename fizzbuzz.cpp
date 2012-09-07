#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int count = 20;

	//Prints Fizz on multiples of 3, prints Buzz on multiples of 5
	//Prints both Fizz and Buzz for multiples of both 3 and 5
	//else prints normal number
	for(int i = 1; i <= count ; i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz\n";
		else if(i % 3 == 0)
			cout << "Fizz\n";
		else if(i % 5 == 0)
			cout << "Buzz\n";
		else
			cout << i << "\n";
	}

	return 0;
}