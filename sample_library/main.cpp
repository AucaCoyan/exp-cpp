#include <iostream>
#include "Log.cpp"

void Log(const char *message);

int main()
{
    Log("Hello World!");
    std::cin.get();
}