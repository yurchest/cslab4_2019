#include <iostream>
#include "byteprint.h"
#include <cassert>

using namespace std;

char nibble_to_hex(uint8_t i){
    assert(0x0 <= i && i <= 0xf);
    char digits[] = "0123456789abcdef";
    return digits[i];
}

void
print_in_hex(uint8_t byte) {
    cout << nibble_to_hex(byte >> 4)
         << nibble_to_hex(byte & 0xf);
}

void print_in_hex(const void* data, size_t datasize){

    const uint8_t* bytes = reinterpret_cast<const uint8_t*>(data);
    for( size_t i = 0; i < datasize; i++ ){
        print_in_hex( bytes[i] );
        if ( (i + 1) % 16 == 0)
            cout << '\n';
        else
            cout << ' ';
    }
}

