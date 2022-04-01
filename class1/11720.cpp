#include <iostream>
using namespace std;

int main(){
    int loop, num, sum = 0;

    cin>>loop;
    cin>>num;

    for(int i = 0; i < loop; i++){
        sum += num % 10;
        num /= 10;
    }

    cout<<sum<<endl;

    return 0;
}