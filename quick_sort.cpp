#include <iostream>
#include <iomanip>
using namespace std;

void partition(int arr[],int f,int l){
    if (f >= l){return;}
    int b = arr[f];
    int m = f+1,n=l;
    while (m <= n){
        while (arr[m] <= b && m <=n) {m++;}
        while (arr[n] > b && m <=n) {n--;}
        if (m<n) {swap(arr[m],arr[n]);}
    }
    swap(arr[f],arr[n]);
    for (int k=0;k<6;k++){
        cout << setw(10) << arr[k];
    }
    cout << '\n';
    partition(arr,f,n-1);
    partition(arr,n+1,l);
}
void QuickSort(int arr[],int n){
    partition(arr,0,n-1);
}
int main(){
    int l[] = {3,105,94,22,32,19};
    QuickSort(l,6);
    
   return 0;
}