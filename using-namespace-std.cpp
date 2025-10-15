#include <iostream>
#include <string>
using std::cout;

int main()
{
    cout<< "what is your name?\n";
    std::string name;
    std::cin>>name;
    cout<< "your name is "<<name<<"."<<std::endl;
    system("pause");
    return 0;
}
