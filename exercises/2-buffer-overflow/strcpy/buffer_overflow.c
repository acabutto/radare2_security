#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[]);

void foo(const char* input)
{
    char buf[10];

    strcpy(buf, input);
}

void hacked(void)
{
    printf("Application has been hacked by a stack overflow!\n");
}

int main(int argc, char* argv[])
{
    // this makes easier to mount the attack
    printf("Address of foo = %p\n", foo);
    printf("Address of hacked = %p\n", hacked);
    if (argc != 2)
    {
        printf("Please supply a string as an argument!\n");
        return -1;
    }
    foo(argv[1]);
    return 0;
}
