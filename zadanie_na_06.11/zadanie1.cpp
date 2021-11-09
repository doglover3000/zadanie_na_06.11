#include <iostream>

using namespace std;

int main()
{
    int num, i, mas[100] = {0}, size = 0;
    cout << "Enter number: ";
    cin >> num;

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
    size = i;
 
    for (int i = size - 1; i >= 0; i--)
        cout << mas[i];
    cout << endl;

    int copy_mas[100] = {0};
    int j = 0;
    for (int i = size-1; i >= 0; i--)
    {
        copy_mas[j] = mas[i]; 
        j++;
    }
    
    int ctr = 0, flag = 0, max = 0;
    for (int i = 0; i < size; i++)
    {
        if (copy_mas[i] == 2)
            ctr = 0;
        if (copy_mas[i] == 1)
            ctr++;
        if (copy_mas[i] == 0 && flag == 1)
        {
            if (ctr > max)
                max = ctr;
            i = 0;
            ctr = 0;
            flag = 0;
        }
        if (copy_mas[i] == 0 && flag == 0)
        {
            copy_mas[i] = 2;
            ctr++;
            flag = 1;
        }
    }
    if (max == 0)
        max = ctr;
    cout << max;

    return 0;
}