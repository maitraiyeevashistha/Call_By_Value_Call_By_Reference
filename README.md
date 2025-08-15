# Calling a function in C++

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Calling functions in C + + 
---

## Aim :
*To use different ways to call a function and to make some basic functions and use pointers in them*

-----

## Introduction :
As we stuided earlier , A **pointer** in C++ is a variable that stores the **memory address** of another variable.  
Instead of holding a data value directly, a pointer stores the location of the data in memory.

A function is a feature that we use when we have to repeat an action or a part of the code multiple times . 
It allows users to reuse thier code without needing to write it again .                  

## **Theory**
- A pointer’s **data type** determines the type of variable it can point to.  
- **Address-of operator (`&`)** – Retrieves the memory address of a variable.  
- **Dereference operator (`*`)** – Accesses the value stored at the pointed memory location.
- A function's **data type** is given at the very start of the function , which should always be equal to the value being returned by the function.
- The syntax of a function is usually given as :
```cpp
void swap(int *x, int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
```

## Summary of Programs
### Program 1. to call a swapping function by it's value

*Problem Statement: To create a function to switch two values and call that function by value*
#### Program Description :
 - Create the swap function
   - Give inputs as variables a and b
   - Create a variable temp
   - temp = a
   - a = b
   - b = temp
 - Hardcode the values for the variables
 - Use the swap function by giving the values for the variables as input argument


#### Note : In this function , the values do not get swaped because when the function returns the values to the main body , the values resets and the original values are restored hence the output remains non-swaped .

### Program 2. to call a swapping function by it's reference

*Problem Statement: To create a function to switch two values and call that function by reference*
#### Program Description :
 - Create the swap function
   - Give inputs as variables a and b
   - Create a variable temp
   - temp = a
   - a = b
   - b = temp
 - Hardcode the values for the variables
 - Use the swap function by giving the address of the variables as input argument

### Program 3. to call a swapping function which works on pointers

*Problem Statement: To create a function to switch two values using pointers*
#### Program Description :
 - Create the swap function
   - Give inputs as variables a and b
   - Create a variable temp
   - temp = *a
   - *a = *b
   - *b = temp
 - Hardcode the values for the variables
 - Use the swap function by giving the values for the variables as input argument


### Program 4. Salary Increment

*Problem Statement: to create a function to increment a salary given that the user qualifies three out of four conditions*
#### Program Description :
 - Create four variables relating to the conditions
 - Take user input for the variables
 - Create a variable counter and equate it to zero
 - Create a nested if loop to check if the conditions are being met (increase the counter by one if yes)
 - Create an If Else condition to check if counter is equal to or exceeds three
 - Create a function to Increment the salary which takes user salary as input
 - If counter greater or equal to three :
     - "Congratulations , you are applicable for an increment !"
     - salary = salary + salary*0.2
 - Else :
     - "You do not qualify for an increment yet" 

#### Problem 5. String Reversal

*Problem Statement: Create a function which uses pointers to reverse an input string*
#### Program Description :
 - Create the string reversal function
     - Create a pointer pointing to the first element
     - create a pointer pointing to the last element
     - while ( start_pointer < end_pointer)
         - temp = *start;
         - *start = *end;
         - *end = temp;
         - Move the pointers by one
  ## Conclusion 
  In summary, this experiment investigated various C++ function calls and the effective use of pointers for data manipulation.  We looked at how call by value, call by reference, and call by pointer differ from one another and impact the original data.  We emphasized the value of code reuse, memory management, and pointer manipulation through useful programs like value swapping, condition-based salary increments, and string reversals using pointers.

 We discovered that:

  - Changes made inside the function do not impact the original variable because call by value makes a copy of it.

  - Functions can alter the original variables directly by using call by reference and call by pointer.

  - Programs can work with memory addresses more effectively and flexibly thanks to pointers.
