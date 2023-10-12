#include<iostream>
#include "question4.h"
using std::cout; using std::cin;
int main()
{
    double choice = 0;
    auto exit = 'n';
	std::string grade;
    do
    {
    cout<<"Enter your gpa \n\n";
	cin>>choice;
    if(choice > 0.0 && choice <= 4.0)
    {
    grade = gpa_to_letter_grade(choice);
    cout<<grade<<"\n\n";
    }
    else
    {
        cout<<"Grade invalid\n\n";
    }
    
	
	cout<<"Do you want to exit? (y/n)\n";
	cin>>exit;
    } while (exit == 'n' || exit == 'N');
    return 0;
}