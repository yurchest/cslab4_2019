#include <iostream>
#include "byteprint.h"
#include <cassert>


using namespace std;

int main()
{

    uint16_t first, second;
    char oper;
    cin >> first >> oper >> second;
    byte_calc( first, second, oper );
}
