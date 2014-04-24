#include <stdio.h>

int main()
{	
	char addresses[10][30];
	int numAddresses = 0;
	int userInput = 0;

	do
	{
		userInput = 0;
		printf("1. Enter Address\n2. List Addresses(%d total)\n3. Quit\n", numAddresses);
		scanf("%1d", &userInput);

		fflush(stdin);

		if(userInput == 1)
		{
			printf("Address: ");
			fgets(addresses[numAddresses], 29, stdin);
		}

		if(userInput == 2)
		{

		}

	} while(numAddresses < 10 && userInput != 3);

	return 0;
}