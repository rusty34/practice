#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> testArray;

	int count = 10;

	for(int i = 1; i <= count; i++)
	{
		testArray.push_back(i);
	}

	srand(time(NULL));
	int swapNumber = 0;

	//Shuffle
	//Iterator way
	for(vector<int>::iterator it = testArray.begin(); it != testArray.end(); it++)
	{
		swapNumber = rand() % count;
		int temp =	testArray[swapNumber];
		testArray[swapNumber] =	*it;
		*it = temp;
	}

	//Int way
	/*for(int i = 0; i < testArray.size(); i++)
	{
		swapNumber = rand() % count;
		int temp = testArray[swapNumber];
		testArray[swapNumber] = testArray[i];
		testArray[i] = temp;
	}*/

	for(vector<int>::iterator it = testArray.begin(); it != testArray.end(); it++)
	{
		cout << *it << "\n";
	}

	return 0;
}