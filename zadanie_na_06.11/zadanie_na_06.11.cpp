#include <iostream>

using namespace std;

int main()
{
    int num, i, mas[100];
    cout << "Enter number: ";
    cin >> num;

    for (i = 0; i < 100; i++)
        mas[i] = 0;

    i = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            mas[i] = 0;
            num = num / 2;
        }
        else
        {
            mas[i] = 1;
            num = num / 2;
        }
        i++;
    }
    i = i - 1;

    for (; i >= 0; i--)
        cout << mas[i];

    return 0;
}