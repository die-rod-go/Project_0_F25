#include <stdlib.h>

char rand_string(char *outputString, size_t stringSize)
{
    const char charSet[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < stringSize; i++)
    {
        outputString[i] = charSet[rand() % 26];
    }
}