#include <iostream>
using namespace std;

void fact(int n){
int total=1;
    for (int i=1;i<=n;i++){
	total*=i;

}
cout<<"The factorial of "<<n<<" = "<<total;
}

int main(){

    int n;
    cout<<"Enter the number you wanna calculate Factorial : ";
    cin>>n;
     fact(n);
    return 0;
}