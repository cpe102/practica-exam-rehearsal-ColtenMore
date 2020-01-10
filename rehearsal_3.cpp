#include<iostream>
#include<cmath>
using namespace std;
//Write sumSqrt() here.
float sumSqrt(int num) {
    float sum = 0;
    for(int i = 1; i <= num; i++){
        sum += 1/sqrt(i);
    }
    return sum;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
