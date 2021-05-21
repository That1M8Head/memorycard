/* memorycard.c - insert a memory card

== Usage ==
memorycard <blocks>

== Info ==
The value of blocks can be any integer.
For the program to exit successfully, blocks must be equal to 25 or over.
A memory overflow will be simulated if blocks is over 100.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Did you insert a memory card?\n");
        return 0xDEDA5FAC;
    }
    else if (!isdigit(argv[1][0])) /* if the first character of the argument is not a number */
    {
        printf("Is your memory card set correctly?\n");
        return 0x0DEADA55;
    }
    else if (atoi(argv[1]) < 25) 
    {
        printf("You don't have enough memory in the memory card!\n");
        return 69;
    }
    else if (atoi(argv[1]) > 100)
    {
        printf("Is your memory card set correctly?\n");
        return 0x8BADF00D;
    }
    else
    {
        printf("Memory card loaded -- %d blocks free\n", atoi(argv[1]));
        return 0;
    }
}