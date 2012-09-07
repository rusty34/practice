#include <string.h>
#include <iostream>

int longestPalindrome(char* str, int length);

int main(int argc, char** argv)
{
	//Test palindrome
	char* test = "aabaacdcaa";

	int strLength = strlen(test);
	int testLength = longestPalindrome(test, strLength);

	std::cout << "Longest Palindrome Length : " << testLength << "\n";

	return 0;
}

int longestPalindrome(char* str, int length)
{

	if(length == 0 || length == 1)
	{
		return length;
	}
	else if(length < 0)
	{
		return -1;
	}

	int longestPalindrome = 1;
	int currentPalindrome = 1;
	int currentIndex = 0;
	int leftIndex = -1;
	int rightIndex = 1;

	while(currentIndex < length)
	{
		//Search for double appearance of chars
		if(rightIndex < length && str[currentIndex] == str[rightIndex])
		{
			currentPalindrome = 2;

			//Need to shift right index to the right one.
			//So for acbbca
			//leftIndex = first c
			//rightIndex = right b (at the start)
			//Need to shift right index to second c
			rightIndex++;

			//Double chars
			//Search outwards for palindrome
			if(leftIndex > 0)
			{
				while(str[leftIndex] == str[rightIndex])
				{
					leftIndex--;
					rightIndex++;

					currentPalindrome+=2;

					if(leftIndex < 0 || rightIndex >= length)
						break;
				}
			}

			if(currentPalindrome > longestPalindrome)
				longestPalindrome = currentPalindrome;
		}
		else if (leftIndex >= 0 && rightIndex < length && str[leftIndex] == str[rightIndex])
		{
			currentPalindrome = 3;

			leftIndex--;
			rightIndex++;

			//char1 char2 char1
			//Search outwards for palindrome
			while(str[leftIndex] == str[rightIndex])
			{
				leftIndex--;
				rightIndex++;

				currentPalindrome+=2;

				if(leftIndex < 0 || rightIndex >= length)
					break;

			}

			if(currentPalindrome > longestPalindrome)
				longestPalindrome = currentPalindrome;

		}

		currentIndex++;
		leftIndex = currentIndex - 1;
		rightIndex = currentIndex + 1;
	}

	return longestPalindrome;

}