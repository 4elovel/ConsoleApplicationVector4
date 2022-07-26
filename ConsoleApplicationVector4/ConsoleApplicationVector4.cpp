#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rev(vector <int>& a, int start, int end)
{
    while (start < end)
    {
        int buff = a[start];
        a[start] = a[end];
        a[end] = buff;
        start++;
        end--;
    }
}


void solution(vector <int>& vec,int k) {
    int size = vec.size();
    rev(vec, 0, size - 1);
    rev(vec, 0, k - 1);
    rev(vec, k, size - 1);
}
int main()
{
    cout << "Before: ";
    vector <int> vec;
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
        cout << vec[i] << " ";
    }
    cout << endl;

    solution(vec, 4);

    cout << "After: ";
    for (size_t i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
}
