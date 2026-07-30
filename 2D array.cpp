//implementation of 2D arrays using functions.
#include<iostream>
using namespace std;
//receive by reference double pointer, by-reference 'rows', and by-reference 'cols'
void allocateMem(int**& arr, int& r, int& c)
{
    r = 3, c = 4; //you can get input from user
    arr = new int* [r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }
}
//since this function should be used to get input from user and we don't want pointer to point to any other memory so receive
//by-reference const double pointer to integer where other parameters are also by-reference const intgeres i.e.,(read only).
void fillArr(int** const& arr, const int& r, const int& c)
{
    int k = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = ++k; //you can get this input from user
        }
    }
}
//this function should be used to print the data on console
void print(int** const& arr, const int& r, const int& c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
//release the memory. it should receive by-reference double pointer.
void releaseRes(int**& arr, int r)
{
    // since it is a 2D array so you need to delete the memory allocated to each row first then you can delete the overall array.
    for (int i = 0; i < r; i++)
        delete arr[i]; //de-allocating the memory of each row
    delete[] arr; // delete the overall array.
    arr = NULL; //to avoid dangling pointer issue.
}
int main()
{
    // In dynamic 2D arrays you need to declare a double pointer and similarly when you are passing this array into a function then
    // that function should also receive a double pointer.
    int** arr, r, c;
    allocateMem(arr, r, c);
    fillArr(arr, r, c);
    print(arr, r, c);
    releaseRes(arr, r);
    system("pause");
}