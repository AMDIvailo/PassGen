#include <iostream>
#include <stdlib.h>
#include <ctime>
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


char CON[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};

char random;

srand(time(NULL));
for(int NumbCount = 0; NumbCount < Lenght; NumbCount++)
{
random = rand() % 10;
std::cout << CON[random]; 
}
std::cout << std::endl;
return CON[random];
}
};
