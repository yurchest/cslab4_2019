#include <iostream>
#include "byteprint.h"
#include <cassert>


using namespace std;

int main()
{

    uint8_t u8 = 42;
    cout << "u8 bytes: ";
    print_in_binary(&u8, sizeof(u8));
    cout << '\n';

    uint16_t u16 = 42;
    cout << "u16 bytes: ";
    print_in_binary(&u16, sizeof(u16));
    cout << '\n';

    uint32_t u32 = 42;
    cout << "u32 bytes: ";
    print_in_binary(&u32, sizeof(u32));
    cout << '\n';
    return 0;

}
