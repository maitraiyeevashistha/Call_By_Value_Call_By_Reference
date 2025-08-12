//EXPERIMENT-9
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x=y;
    y=temp;
}

int main() {
    int a = 5; 
    int b = 10;
    cout<<"Original value of a is:"<<" "<<a<< endl;
    cout<<"Original value of b is:"<<" "<<b<< endl;
    swap(a,b);
    cout<<"Swapped value of a is:"<<" "<<a<< endl;
    cout<<"Swapped value of b is:"<<" "<<b<< endl;
}

/*Output:
Original value of a is: 5
Original value of b is: 10
Swapped value of a is: 10
Swapped value of b is: 5
*/
