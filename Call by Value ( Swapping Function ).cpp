//EXPERIMENT-10
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp =x;
    x=y;
    y=temp;
    return ;
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

//Note : In this function , the values do not get swaped because when the function returns the values to the main body , the values resets and the original values are restored

/*Output :
Original value of a is: 5
Original value of b is: 10
Swapped value of a is: 5
Swapped value of b is: 10
*/
