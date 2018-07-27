#include <iostream>
//Given a list of unique integers, return all possible permutations of it.


#include <vector>
#include <unordered_set>
using namespace std;

int fact(int n) {
    return ( n == 0 || n == 1) ? 1 : n*fact(n-1);
}

// decimal: the decimal number that we want to convert
// base   : the max "base" of the factorial base system to use
// Precondition is that: 0 <= decimal <= base! - 1
vector<int> decimalToFact(int decimal, int base) {
    vector<int> out;
    out.resize(base, 0);
    int r;
    for (int b = 1; b <=base ; b++) {
        r = decimal % b;
        decimal = decimal / b;
        out[base - b] = r;    
    }
    return out;    
}

// Given and inputList and a factoradic permutation,
// applied the factoradic permutation to the inputList
vector<int> applyPerm(vector<int>& permMap, vector<int> inputList) {
    vector<int> out; out.resize(inputList.size());
    vector<int> taken; taken.resize(inputList.size(), -1);
    for (int i = 0; i < inputList.size(); i++) {
        int sourceInt = inputList[i];
        int targetIndex = permMap[i];
        int numFree = 0;
        for (int j = 0; j < inputList.size(); j++) {
            if (taken[j] == -1) {
                numFree++;
            }
            if (numFree - 1 == targetIndex) {
                out[j] = sourceInt;
                taken[j] = +1;
                break;
            }
        }
    }
    return out; 
}

// Returns all permutations of inputList array
vector<vector<int>> permutationsOfArray(vector<int> inputList) {
    int n = inputList.size();
    int nFact = fact(n);
    vector<vector<int>> ret;
    ret.resize(nFact);
    for (int i = 0; i < nFact; i++) {
        vector<int> permMap = decimalToFact(i, n);
        vector<int> onePerm = applyPerm(permMap, inputList);
        ret[i] = onePerm;
    }
    return ret;
}

int main() {
    vector<int> test = {1,2,3,4};

    vector<vector<int>> perms = permutationsOfArray(test);

    for (vector<int> v : perms) {
        for (int j : v ) { cout << j << " "; }
        cout << endl;
    }


    return 0;
}
