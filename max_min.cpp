#include <bits/stdc++.h>
using namespace std;

pair<int, int> FindmaxMin(int A[], int low, int high)
{
    if (low == high)
    {
        return (A[low], A[low]);
    }
    else if (high == low + 1)
    {
        if (A[low] < A[high])
        {
            return (A[high], A[low]);
        }
        else
        {
            return (A[low], A[high]);
        }
    }
    else{
        int mid=(low+high)/2;
        pair<int, int> left = FindmaxMin(A, low, mid);
        pair<int, int> right = FindmaxMin(A, mid+1, high);
        int finalMax=max(left.first,right.first);
        int finalMin=min(right.first,right.second);
        return (finalMax, finalMin);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> result = FindmaxMin(arr, 0, n - 1);
    cout << "Max: " << result.first << endl;
    cout << "Min: " << result.second << endl;
    return 0;
}