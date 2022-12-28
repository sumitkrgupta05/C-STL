// basic input output program in vector
#include <bits/stdc++.h>
using namespace std;

// OUTPUT CODE
int printVector(vector<int> a)
{
    cout << "Size of vector: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// INPUT CODE
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // O(1)
    }
    printVector(v);
    return 0;
}