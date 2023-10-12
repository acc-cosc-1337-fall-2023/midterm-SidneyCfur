#include "question1.h"
#include <vector>
#include <iostream>
using std::vector; using std::cout;

bool test_config()
{
    return true;
}

string decimal_to_hex(int num){

    string result = "";
    vector<int> remain;

    while(num > 16)
    {
        remain.push_back(num%16);
        num /= 16;
    }

    remain.push_back(num);

    for(int i= remain.size(); i >= 0; i-- )
    {
        if(remain[i] < 10 && remain[i] >= 0)
        {   
            string numlist = std::to_string(remain[i]);
            result.push_back(numlist[0]);
        }

        else if(remain[i] == 10)
        {
            result.push_back('A');
        }

        else if(remain[i] == 11)
        {
            result.push_back('B');
        }

        else if(remain[i] == 12)
        {
            result.push_back('C');
        }

        else if(remain[i] == 13)
        {
            result.push_back('D');
        }

        else if(remain[i] == 14)
        {
            result.push_back('E');
        }

        else if(remain[i] == 15)
        {
            result.push_back('F');
        }


    }
    if(result[0] == '0')
    {
        result.erase(0, 1);
    }
    return result;
}