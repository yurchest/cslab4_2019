#include <iostream>
#include "byteprint.h"
#include <cassert>


using namespace std;

int main()
{
    uint32_t u32 = 0x42;
cout << "u32 bytes: ";
print_in_hex(&u32, sizeof(u32));
cout << '\n';





}
