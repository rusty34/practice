
int LongestRun(char* str, char* out)
{

//str -> "aabacccd"

int count = 0;
int highestCount = 0;
int index = 0;

char currentChar = str[0];

while(str[index] != '\0')
{

	if(currentChar == str[index])
	{
		count++;

		if(count > highestCount)
		{
			highestCount = count;
			*out = currentChar;
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