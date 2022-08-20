#include<iostream>

using namespace std;


int gcd(int a, int b )
{
    if(0 == b)  {
        return a;
    }
    int c = a%b;
    return gcd(b,c);

}

int main()
{
    int a = 96,b = 16;
    cout << gcd(a,b)  << endl;

    return 0;
}
