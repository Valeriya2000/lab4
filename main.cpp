#include <iostream>
#include <stdint.h>
#include <assert.h>
using namespace std;

char nibble_to_hex (uint8_t i)
{
    char symbols[17]="0123456789abcdef";
    return symbols[i];
}
char
bit_digit(uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
int main()
{
 cout<<nibble_to_hex (15);
 return 0;
}
