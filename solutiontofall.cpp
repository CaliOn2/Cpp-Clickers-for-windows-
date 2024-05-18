// solutiontofall.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <windows.h>
int main()
{
    std::cout << "Hello World!\n";
    while (true)
    {
        if (GetAsyncKeyState(VK_MBUTTON)) //          middle mouse button
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(2);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(1);
        }



    }
}

