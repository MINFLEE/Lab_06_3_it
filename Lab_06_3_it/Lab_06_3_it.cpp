// Lab_06_3_it

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void CreateArrayWithRandomElements(int* x, int numberOfElements, int Low, int High);
void PrintArray(int* x, const int numberOfElements);
int FindMax(int* x, int numberOfElements);
template <typename T>
T FindMaxTemplate(T* x, int numberOfElements);

int main() 
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int x[n];

    int Low = -17;
    int High = 53;
    CreateArrayWithRandomElements(x, n, Low, High);

    cout << "Array with Random elements:" << endl;
    PrintArray(x, n);
    cout << endl;

    int maxElement = FindMax(x, n);
    cout << "Maximum element: " << maxElement << endl;
    cout << endl;

    int maxElementTemplate = FindMaxTemplate(x, n);
    cout << "Maximum element (template): " << maxElementTemplate << endl;

    return 0;
}

void CreateArrayWithRandomElements(int* x, int numberOfElements, int Low, int High) 
{
    for (int i = 0; i < numberOfElements; i++) 
    {
        x[i] = Low + rand() % (High - Low + 1);
    }
}

void PrintArray(int* x, const int numberOfElements) 
{
    for (int i = 0; i < numberOfElements; i++) 
    {
        cout << setw(4) << x[i];
    }
    cout << endl;
}

int FindMax(int* x, int numberOfElements) 
{
    int maxElement = x[0];
    for (int i = 1; i < numberOfElements; i++) 
    {
        if (x[i] > maxElement) 
        {
            maxElement = x[i];
        }
    }
    return maxElement;
}

template <typename T>
T FindMaxTemplate(T* x, int numberOfElements) 
{
    T maxElement = x[0];
    for (int i = 1; i < numberOfElements; i++) 
    {
        if (x[i] > maxElement) 
        {
            maxElement = x[i];
        }
    }
    return maxElement;
}
