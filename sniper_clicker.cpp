// sniper_clicker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
int main()
{
    std::cout << "Hello World!\n";
    while (true)
    {
        if (GetAsyncKeyState(VK_MBUTTON))
        {
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
            Sleep(270);
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(1);
            mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(1);
            while (GetAsyncKeyState(VK_MBUTTON))
            {
                Sleep(0);
            }
        }
        // Run program: Ctrl + F5 or Debug > Start Without Debugging menu


    }
}
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
///GetAsyncKeyState(VK_MBUTTON)
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
