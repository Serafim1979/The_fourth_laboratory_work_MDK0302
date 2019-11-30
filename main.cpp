#include<iostream>
#include<cstdlib>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

int getValue();

int main()
{
    cout << "Enter the first number (integer, non-negative, value >2): ";
    int a = getValue();
    cout << "Enter the second number (integer, non-negative, value >2): ";
    int b = getValue();
    cout << "Specify the size of the array " << endl;
    int size_arr = getValue();

    int *my_array = new int[size_arr];
    my_array[0] = a;
    my_array[1] = b;

    int sum = a + b;

    for(int i = 2; i < size_arr; i++)
    {
        my_array[i] = sum;
        sum += my_array[i];
    }
    cout <<  endl;
    cout << "\t----------resulting array------------" << endl;

    for(int j = 0; j < size_arr; j++)
    {
        cout << my_array[j] << ' ';
    }
    cout <<  endl;
    cout <<  endl;
    cout << "\t----------reverse array--------------" << endl;
    for(int k = size_arr - 1; k >= 0; k--)
    {
        cout << my_array[k] << ' ';
    }
    cout <<  endl;
    delete[] my_array;
    my_array = nullptr;
    return 0;
}
/////////////////////////////////////////////////////////////////////////////
int getValue()
{
    while (true)
    {
        cout << "Enter a integer value: ";
        int a;
        cin >> a;

        if(cin.fail() || a <= 2)
        {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            cin.ignore(32767,'\n');

            return a;
        }
    }
}





