#include "printv.h"

#include <stdio.h>

int main()
{
    printv();
    printv("Hello World!\n");
    printv($("123456\n"));
    printv($(123456)"\n");
    printv($(1)$(2)$(3)$(4)$(5)$(6)"\n");

    int a = 123; 
    int b = 456;
    printv("a:"$(a)" b:"$(b)"\n");
    return 0;
}