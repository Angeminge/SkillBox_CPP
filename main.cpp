#include "iostream"
#include <bits/stdc++.h> 
using namespace std; 
  
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
int main()
{
    int a = fib(2);
    int b = fib(3);
    int c = fib(4);
    int e = fib(5);
    // здесь вычисляем числа фибоначии
    // здесь осуществляется вывод найденных чисел в консоль std::cout<<"Fibonacchi number 1 :"<<f1<<std::endl;
    cout<<"Fibonacchi number 2 : "<<a<<endl;
    cout<<"Fibonacchi number 3 :"<<b<<endl;
    cout<<"Fibonacchi number 4 :"<<c<<endl; 
    cout<<"Fibonacchi number 5 : "<<e<<endl;
}