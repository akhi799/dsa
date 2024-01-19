#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[10]={2,3,6,3,3,2,4,3,3,3};
    int n=10;
    int count=1;
    int majorityElement=0;
    for(int i=1;i<n;i++){
        arr[i]==arr[majorityElement]?count++:count--;
        if(count==0){
            majorityElement=i;
            count=1;
        }
    }
    cout<<arr[majorityElement]<<endl;
    return 0;
}