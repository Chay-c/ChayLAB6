#include<iostream>
using namespace std;

int main(){
    int N , i = 0 ,g = -1;
    while (N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N%2 == 0 && N != 0){
            i = i+1;
        }else {
            g = g+1;
        }
    }
    cout << "#Even numbers = " << i << endl;
    cout << "#Odd numbers = " << g;
    return 0;
}
