#include <iostream>
#include <fstream>
#include "table.h"

using namespace std;

int _complementDNA(int x);

void skipLine(ifstream& file) {
    string line;
    getline(file, line);
}

int main( int argc, char* argv[] ) {

    //printf( "This is just starter code. It just prints all CL arguments.\n" );
    //printf( "Number of args: %d\n", argc );
    //for ( int i = 0; i < argc; i++ ) {
    //  printf( "arg%d: %s\n", i, argv[i] );
    //}

    //ifstream inputFile;
    //inputFile.open("./data/rna.fa");
    //if (!inputFile) {
    //    cerr << "Unable to open ./data/rna.fa" << endl;
    //    return 1;
    //}

    //char x;
    //int z = 0;
    //while (inputFile >> x) {
    //    if ( x == '>') {
    //        skipLine(inputFile);
    //        inputFile >> x;
    //    }
    //    cout << x;
    //    z++;
    //    if (z == 100) {
    //        break;
    //    }
    //}


    for (auto it = DNAToProteinMap.begin(); it != DNAToProteinMap.end(); it++) {
        std::cout << it->first << " ";
        std::cout << it->second << std::endl;
    }

    //inputFile.close();


    int a = _complementDNA(1);
    int b = _complementDNA(2);
    int c = _complementDNA(3);
    int d = _complementDNA(4);
    int e = _complementDNA(5);

    printf("%d %d %d %d %d\n", a, b, c, d, e);

    return 0;
}