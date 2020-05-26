#include <iostream>
#include "byteprint.h"
#include <cassert>


using namespace std;

int main()
{
    uint8_t u8 = 0x42;
    uint16_t u16 = 0x42;
    uint32_t u32 = 0x42;

    cout << "u8 bytes: ";
    print_in_hex( &u8, sizeof(u8) );
    cout << '\n';

    cout << "u16 bytes: ";
    print_in_hex( &u16, sizeof(u16) );
    cout << '\n';

    cout << "u32 bytes: ";
    print_in_hex( &u32, sizeof(u32) );
    cout << '\n';

}
