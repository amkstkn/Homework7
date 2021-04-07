#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
namespace MyLib
{

    bool pullarray(float arr[], size_t size)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 30 - 15;
        }
        return true;

    };

    int printarray(float arr[], size_t size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    };

    int calcplusminus(float arr[], size_t size)
    {
        int plus = 0;
        int minus = 0;

        for (size_t i = 0; i < size; i++)
            if (arr[i] > 0)
                plus += 1;
            else
                minus += 1;
        cout << "Negativ number - " << minus << endl << "Pozitiv number - " << plus << endl;

        return 0;
    }

#define SWAP(a,b) swap(a,b)

    int sortarray(int arr[], size_t size)
    {
        return 0;
    }
}