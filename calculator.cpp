#include "calculator.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

double add(double a, double b)
{
    return a+b;
}
double subtract(double a, double b)
{
    return a-b;
}

double multiply(double a, double b)
{
    return a*b;
}
double divide(double a, double b)
{
    if (b!=0)
    {
        return a/b;
    } else
    {
        std::cout<<"division by zero"<<std::endl;
        return 0;
    }
}
long long factorial(int n)
{
    if (n<0) return -1;
    long long result = 1;
    for (int i=1; i<=n; ++i)
    {
        result *=i;
    }
    return result;
}
int gcd(int a, int b)
{
    while (b!=0) {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a*b) / gcd(a,b);
}
int generateRandom(int min, int max) {
    std::srand(std::time(0));
    return std::rand() % (max - min + 1) + min;
}
