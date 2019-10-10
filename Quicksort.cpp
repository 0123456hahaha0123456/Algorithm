#include<bits/stdc++.h>
using namespace std;
int arr[300010];
void qsort(int l,int r)
{
    srand(time(NULL));
    int key = arr[l + rand() % (r-l+1)];
    int i = l, j = r;
    while(i <= j)
    {
        while(arr[i] < key) i++;
        while(arr[j] > key) j--;
        if(i <= j)
        {
            if (i < j) swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    if (l < j) qsort(l, j);
    if (i < r) qsort(i, r);
}

int main()
{
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout);

    int n;
    cin >> n;
    for( int i=0; i<n; i++){
        cin >> arr[i];
    }

    qsort(0, n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    fclose(stdin);
    fclose(stdout);
}
