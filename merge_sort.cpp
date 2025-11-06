#include <iostream>
#include <iomanip>
using namespace std;

void MergeArr(int arr[],int m, int n, int p){
    int i=m,j=n+1;
    while (i<j && j<=p){
        if (arr[i] <= arr[j]) {i++;}
        else {
            int x = arr[j];
            for (int k=j-1;k>=i;k--){
                arr[k+1] = arr[k];
            }
            arr[i] = x;
            i++;
            j++;
        }
    }
    for (int k=0;k<6;k++){
        cout << setw(10) << arr[k];
    }
    cout << '\n';
}
void SplitMergeArr(int arr[],int f,int l){
    if (f>=l) {return;}
    int m = (f+l)/2;
    SplitMergeArr(arr,f,m);
    SplitMergeArr(arr,m+1,l);
    MergeArr(arr,f,m,l);
    
}
void MergeSort(int arr[],int n){
    if (n<2) {return;}
    SplitMergeArr(arr,0,n-1);
    for (int k=0;k<n;k++){
        cout << setw(10) << arr[k];
    }
}
int main(){
    int l[] = {3,105,94,22,32,19};
    MergeSort(l,6);
   return 0;
}