#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_21
// Circle Area Along The Circumference.

float ReadCircumference()
{
    float L;
    cout << "Please Enter Circumference A " << endl;
    cin >> L;
    return L;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589;
    float Area = pow(L,2) / (4 * PI);
    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));

    return 0;
}
