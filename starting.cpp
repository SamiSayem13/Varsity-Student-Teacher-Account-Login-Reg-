#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void display()
{
    string text = "Welcome to BUBT Annex";
    int width = 120;
    int padding = (width - text.length()) / 2;

    for (int i = 0; i < padding; ++i)
    {
        cout << " ";
    }

    for (int i = 0; i < text.length(); ++i)
    {
        cout <<text[i];
        Sleep(100);
    }
}
