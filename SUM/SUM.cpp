#include <iostream>
#include "Header.h"
extern "C" __declspec(dllexport) int MYSUM(int x, int y)
{
    return (x + y);
}
extern "C" __declspec(dllexport) int MAKESTEP(int step)
{
    STEP++;
    return STEP;
}