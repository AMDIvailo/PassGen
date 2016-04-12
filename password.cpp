#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "password.h"
class Password
{
private:
int Lenght = 0;

public:
void setPassLenght(int lenght)
{
Lenght = lenght;
}

char genRandPass()
{

char random;

srand(time(NULL));
for(int NumbCount = 0; NumbCount < Lenght; NumbCount++)
{
random = rand() % 36;
std::cout << CON[random]; 
}
std::cout << std::endl;
return CON[random];
}
};
