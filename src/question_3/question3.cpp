#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int num)
{
    int elmnt2 = 0;
    int elmnt1 = 1;
    for(int i = 0; i < num; i++)
    {
        elmnt2 = elmnt2 + elmnt1;
        elmnt1 = elmnt2 - elmnt1;
    }
    return elmnt2;
}