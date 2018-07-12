#include <iostream>
#include "table.h"

int main( int argc, char* argv[] ) {

	printf( "This is just starter code. It just prints all CL arguments.\n" );

	printf( "Number of args: %d\n", argc );

	for ( int i = 0; i < argc; i++ ) {
		printf( "arg%d: %s\n", i, argv[i] );
	}

    std::map<std::string, char>::iterator it;

    for (it = DNAToProteinMap.begin(); it != DNAToProteinMap.end(); it++) {
        std::cout << it->first << " ";
        std::cout << it->second << std::endl;
    }

	return 0;
}