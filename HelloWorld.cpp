#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 100;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i] = i * i;
    }

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}