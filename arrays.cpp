#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

void traverse(int arr[], int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

cout <<endl;
}
int main() {
    int capacity = 10;
    int arr[capacity]={1,2,3,4,5};
    int size = 5;
    
    traverse(arr, size);
    
    return 0;
}
