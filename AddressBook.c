#include <stdio.h>
#include <string.h>

int main()
{
	char addresses[10][30];
	int numAddresses = 0;
	char userInput = '\0';

	while(userInput != '3')
	{
		printf("\n1) Enter address(%d/10)\n2) List addresses\n3) Quit\n", numAddresses);
		scanf("%1c", &userInput);
		getchar();

		switch(userInput)
		{
			case '1':

				if(numAddresses < 10)
				{
					printf("Enter Address: ");
					fgets(addresses[numAddresses], 29, stdin);
					numAddresses++;
					printf("Saved.\n");
				} 
				else printf("\nYou can only enter 10 addresses.");
			break;

			case '2':
				if(numAddresses <= 0) printf("\nYou have not addresses.\n");
				else
				{
					printf("\nAddresses: \n");
					for(int i = 0; i < numAddresses; i++) printf("Address #%d: %s", i + 1, addresses[i]);
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
