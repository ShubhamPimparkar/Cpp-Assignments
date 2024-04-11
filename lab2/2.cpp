// 1:Write a program that accepts numbers continuously as long as the number is positive and prints the 
// sum of the given numbers. 
// 2. Write a program to accept two integers x and n and compute x raised to n.
// 3. Write a program to accept a character, an integer n and display the next n characters.
// 4. Write a program to calculate factorial of a number. 
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120
// 5. Write a program to calculate factors of a given number.
// 6. Accept two numbers and calculate GCD of them.
// 7. Write a menu driven program to do following operations :
// a) Compute area of circle
// b) Compute area of rectangle
// c) Compute area of triangle
// d) Exit
// Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
// operation. Continue this process until user selects exit option.
// 8. Write a program to print all prime numbers between 1 to n

#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    while (n>0)
    {
        cout<<"Enter Num - ";
        cin>>n;
        sum = sum+n;
    }
    
    cout<<"Sum is - "<<sum;
    
return 0;
}