#include "question1.h"
#include <iostream>

using std::cout; using std::cin;
int main()
{
    auto choice = 0;
    auto exit = 'n';
	do
	{

	cout<<"Enter a number between 1 and 512 \n\n";
	cin>>choice;
    if(choice > 0 && choice < 513)
    {
        auto hex = decimal_to_hex(choice);
        cout<<hex<<"\n\n";
    }
    else
    {
        cout<<"input not accepted. \n\n";
    }
    
	
	cout<<"Do you want to exit? (y/n)\n";
	cin>>exit;
	
	}
	while(exit == 'n' || exit == 'N');
    return 0;
}