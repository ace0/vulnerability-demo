#include <stdio.h>
#include <string.h>


greeting( char* temp1, char* temp2 )
{
	char name[400];
	memset(name, 0, 400);
	strcpy(name, temp2);
	printf( "Hi %s %s\n", temp1, name );
}


int main(int argc, char* argv[] ) 
{
	greeting( argv[1], argv[2] );
	printf( "Bye %s %s\n", argv[1], argv[2] );
}

