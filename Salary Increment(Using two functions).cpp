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

int criterias(int &x,int &y,int &z,int &a)
{
    int criteria=0;
    if(x>1){
        criteria=criteria+1;
    }
    if(y>1){
        criteria=criteria+1;
    }
    if(z>=100000){
        criteria=criteria+1;
    }
    if(a>1){
        criteria=criteria+1;
    }
    return criteria;
}



int main() {
    int Projects_completed;
    int Publications;
    int profits;
    int new_projects;
    int salary;
    int criterias_fulfilled;
    
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
    
    criterias_fulfilled=criterias(Projects_completed,Publications,profits, new_projects);
    
    if(criterias_fulfilled>=3){
        increment(salary);
    }
    else{
        cout<<endl;
        cout<<"You are not qualified for an Increment yet";
    }

}

/* Output :
Enter your current salary: 75000
Enter the number of  projects completed: 5
Enter the number of Publications: 2
Enter the number of project profits: 120000
Enter the number of current projects: 3

Congratulations ! you are eligible for an increment ! your new salary will be: 90000 with an increment of 15000

Enter your current salary: 75000
Enter the number of  projects completed: 1
Enter the number of Publications: 1
Enter the number of project profits: 95000
Enter the number of current projects: 2

You are not qualified for an Increment yet

*/



