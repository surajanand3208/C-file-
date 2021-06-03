

# include <stdio.h>
# include <string.h>

int main( )
{

	// Declare the file pointer
	FILE *filePointer ;
	char dataToBeRead[50];

	filePointer = fopen("Test.c", "r") ;

	if ( filePointer == NULL )
	{
		printf( "Test.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;
		while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
		{

			printf( "%s" , dataToBeRead ) ;
		}

		fclose(filePointer) ;

		printf("Data successfully read from file Test.c\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
