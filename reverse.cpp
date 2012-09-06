#include <string.h>
#include <iostream>

int reverseString(char* string, int size);

int main(int argc, char** argv)
{

	char string[] = "asdf";
	int length = strlen(string);

	std::cout << "Original String: " << string << "\n";
	reverseString(string, length);
	std::cout << "Reversed String: " << string << "\n";

	return 1;

}

int reverseString(char* string, int size)
{

	//Swap around string
	//"asdf"
	//to
	//"fdsa"

	if(size == 0) {
		return 0;
	}
	else if(size == 1) {
		return 1;
	}

	int startIndex = 0;
	int endIndex = size-1;
	char temp = 0;

	while(startIndex < endIndex)
	{
		temp = string[startIndex];
		string[startIndex] = string[endIndex];
		string[endIndex] = temp;

		startIndex++;
		endIndex--;
	}

	return 1;

}