#include "question2.h"
#include <iostream>
using std::cout;
bool test_config()
{
    return true;
}

std::vector<double> get_cookie_ingredients(int cookies)
{
    std::vector<double> cookielist = {1.5/48, 1.0/48, 2.75/48};
    
    for(int i = 0; i < 3; i++)
    {
        cookielist[i] = cookielist[i] * cookies;
    }
    return cookielist;
}