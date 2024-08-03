#include <iostream>
#include "Log.cpp"

void Log(const char *message);

int main()
{
    for (int i = 0; i < 5; i++) {
    Log("Hello World!");
    }
    std::cin.get();
}
