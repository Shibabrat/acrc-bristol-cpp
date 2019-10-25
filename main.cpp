#include <iostream>
#include <string>

#include "sum.h"

using namespace std;


int main(int argc, char** argv){

    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    cout << sum(a,b) << endl;


    return 0;
}
