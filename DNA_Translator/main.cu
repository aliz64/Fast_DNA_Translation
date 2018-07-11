#include <iostream>

int main( int argc, char* argv[] ) {

	printf( "This is just starter code. It just prints all CL arguments.\n" );

	printf( "Number of args: %d\n", argc );

	for ( int i = 0; i < argc; i++ ) {
		printf( "arg%d: %s\n", i, argv[i] );
	}

	return 0;
}