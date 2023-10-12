//
#include "question4.h"
bool test_config()
{
    return true;
}

std::string gpa_to_letter_grade(double grade)
{
    if(grade >= 3.5)
    {
        return "A";
    }
    else if(grade >= 3)
    {
        return "B";
    }
    else if(grade >= 2)
    {
        return "C";
    }
    else if(grade >= 1)
    {
        return "D";
    }
    else{
        return "F";
    }
}