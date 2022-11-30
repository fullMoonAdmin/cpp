#include <iostream>
// main function returns an int
int main()
{
//prints to console
std::cout << "Enter two numbers:" << std::endl;

//declares two variables to store input 
int v1 = 0, v2 = 0;

//obtain user inpu t
std::cin >> v1 >> v2;

//prints result 
std::cout <<  v1 << " multiplied by " << v2
<< " is " << v1 * v2 << std::endl;
return 0;
}