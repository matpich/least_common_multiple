#include <iostream>

using namespace std;
//greatest common divisor
int gcd(int a, int b);

// least common multiple
int lcm(int a, int b);

int main()
{
    int first_num, second_num;

    cout<<"This program finds \"least common multiple\" \nfor two given (int type) numbers."<<endl;
    cout<<endl<<"First number: ";
    cin>>first_num;

    cout<<endl<<"Second number: ";
    cin>>second_num;

    cout<<endl<<"Least common multiple is: "<<lcm(first_num,second_num);

    return 0;
}

//euclidean algorithm
int gcd(int a, int b)
{
    int c;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}


int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
