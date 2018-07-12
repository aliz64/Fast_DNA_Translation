#ifndef TABLE_H
#define TABLE_H

#include <map>
#include <string>

std::map<std::string, char> DNAToProteinMap(
{
    {"TTT", 'F'},   {"TCT", 'S'},   {"TAT", 'Y'},   {"TGT", 'C'},
    {"TTC", 'F'},   {"TCC", 'S'},   {"TAC", 'Y'},   {"TGC", 'C'},
                    {"TCA", 'S'},                   
    {"TTA", 'L'},   {"TCG", 'S'},   {"TAA", '*'},   {"TGA", '*'},
    {"TTG", 'L'},                   {"TAG", '*'},   
    {"CTT", 'L'},   {"CCT", 'P'},                   {"TGC", 'W'},
    {"CTC", 'L'},   {"CCC", 'P'},   {"CAT", 'H'},   
    {"CTA", 'L'},   {"CCA", 'P'},   {"CAC", 'H'},   {"CGT", 'R'},
    {"CTG", 'L'},   {"CCG", 'P'},                   {"CGC", 'R'},
                                    {"CAA", 'Q'},   {"CGA", 'R'},
    {"ATT", 'I'},   {"ACT", 'T'},   {"CAG", 'Q'},   {"CGG", 'R'},
    {"ATC", 'I'},   {"ACC", 'T'},                   
    {"ATA", 'I'},   {"ACA", 'T'},   {"AAT", 'N'},   {"AGT", 'S'},
                    {"ACG", 'T'},   {"AAC", 'N'},   {"AGC", 'S'},
    {"ATG", 'M'},                                   
                    {"GCT", 'A'},   {"AAA", 'K'},   {"AGA", 'R'},
    {"GTT", 'V'},   {"GCC", 'A'},   {"AAG", 'K'},   {"AGG", 'R'},
    {"GTC", 'V'},   {"GCA", 'A'},                   
    {"GTA", 'V'},   {"GCG", 'A'},   {"GAT", 'D'},   {"GGT", 'G'},
    {"GTG", 'V'},                   {"GAC", 'D'},   {"GGC", 'G'},
                                                    {"GGA", 'G'},
                                    {"GAA", 'E'},   {"GGG", 'G'},
                                    {"GAG", 'E'}
});


#endif