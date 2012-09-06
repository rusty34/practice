#include <iostream>

int ContChars(const char*, char*);

int main(int argc, char** argv)
{
	std::cout << "Hello world\n";

	const char* string = "aaabbcccccd";
	char c = 0;

	int count = ContChars(string, &c);

	std::cout << "Char: " << c << " Count: " << count << "\n";

	return 0;
}

//Find the longest run of the same char
//Return the number of times the char appears and set character to the char
int ContChars(const char* str, char* character)
{
	//str = "aabcccdd"

	char currentChar = str[0];

	int index = 0;
	int count = 0;
	int highestCount = 0;

	while(str[index] != '\0')
	{
		if(str[index] == currentChar)
		{
			count++;

			if(count > highestCount)
			{
				*character = currentChar;
				highestCount = count;
			}
		}
		else
		{
			currentChar = str[index];
			count = 1;
		}

		index++;
	}	

	return highestCount;
}