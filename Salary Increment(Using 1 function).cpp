//EXPERIMENT-10
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

void increment(int &y){
    
        cout<<endl;
        cout<<"Congratulations ! you are eligible for an increment ! your new salary will be: "<<y + 2*y/10<<" with an increment of "<<2*y/10<<endl;
    
}
int main() {
    int Projects_completed;
    int Publications;
    int profits;
    int new_projects;
    int salary;
    int criteria = 0;
    
    cout<<"Enter your current salary: ";
    cin>>salary;
    cout<<"Enter the number of  projects completed: ";
    cin>>Projects_completed;
    cout<<"Enter the number of Publications: ";
    cin>>Publications;
    cout<<"Enter the number of project profits: ";
    cin>>profits;
    cout<<"Enter the number of current projects: ";
    cin>>new_projects;
    
    if(Projects_completed>1){
        criteria=criteria+1;
    }
    if(Publications>1){
        criteria=criteria+1;
    }
    if(profits>100000){
        criteria=criteria+1;
    }
    if(new_projects>1){
        criteria=criteria+1;
    }
    if(criteria>=3){
        increment(salary);
    }

}
/*Output :
Enter your current salary: 75000
Enter the number of  projects completed: 2
Enter the number of Publications: 6
Enter the number of project profits: 1000000
Enter the number of current projects: 5

Congratulations ! you are eligible for an increment ! your new salary will be: 90000 with an increment of 15000

*/





