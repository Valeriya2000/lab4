#include <iostream>
#include <stdint.h>
#include <assert.h>
using namespace std;

char nibble_to_hex (uint8_t i)
{
    char symbols[17]="0123456789abcdef";
    return symbols[i];
}
int main()
{
 cout<<nibble_to_hex (15);
 return 0;
}
