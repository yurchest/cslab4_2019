
#ifndef BYTEPRINT_H_INCLUDED
#define BYTEPRINT_H_INCLUDED

#include <iostream>

using namespace std;

    char nibble_to_hex(uint8_t i);
    void print_in_hex(uint8_t byte);
    void print_in_hex(const void* data, size_t size);
    char bit_digit(uint8_t byte, uint8_t bit);
    void print_in_binary(uint8_t byte);
    void print_in_binary(const void* data, size_t size);



#endif
