

#include <iostream>
using namespace std;

int main()
{
    // a)
    cout << "a)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++) 
        {
            if (i<=j) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    // b)
    cout << "b)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "c)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i <= j and i+j <=11-1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "d)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j and i + j >= 11 - 1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "e)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j and i + j >= 11 - 1 or i <= j and i+j<=11-1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "f)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j and i + j <= 11 - 1 or i <= j and i+j >= 11-1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "g)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j and i + j <= 11 - 1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "h)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i <= j and i + j >= 11 - 1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "w)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i + j <= 11 - 1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
    cout << "x)" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i + j >= 11 - 1) {
                cout << "|===|";
            }
            else {
                cout << "     ";
            }
        }
        cout << endl;
    }
}
