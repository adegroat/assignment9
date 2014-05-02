#include <stdio.h>

int main()
{
	char addresses[10][30];
	int numAddresses = 0;
	char userInput = '\0';

	while(userInput != '3')
	{
		printf("\n1) Enter address(%d/10)\n2) List addresses\n3) Quit\n", numAddresses);
		scanf("%c", &userInput);

		switch(userInput)
		{
			case '1':
				printf("Enter Address: ");
				getchar();
				fgets(addresses[numAddresses], 29, stdin);
				getchar();
				numAddresses++;
			break;

			case '2':
				if(numAddresses <= 0)
					printf("You have not addresses.\n");
				else
				{
					printf("\nAddresses: \n");
					for(int i = 0; i < numAddresses; i++)
						printf("Address #%d: %s\n", i + 1, addresses[i]);
				}
			break;

			case '3':
			break;

			default:
				printf("Invalid choice.\n");
		}

	}

	return 0;
}