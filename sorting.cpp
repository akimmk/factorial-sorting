#include <iostream>
using namespace std;

int main(){

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if(x[j]>x[j+1]){
            int temp=x[j];
            x[j]=x[j+1];
            x[j+1]=temp;
        }
    }
}

    return 0;
}