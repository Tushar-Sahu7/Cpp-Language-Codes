#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // ******** Build in data types ********
    int a, b, c;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl;

    //******** Float, double and long double  Literals ********
    float d = 34.4F;
    long double e = 34.4L;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The value of d is " << d << endl << "The value of e is " << e << endl;

    //******** Reference Variable ********
    float x = 455.5;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    //************ Typecasting ************
    int t = 45;
    float s = 45.99;
    cout << "The value of t is " << (float)t << endl;
    cout << "The value of t is " << (float)t << endl;

    cout << "The value of s is " << (int)s << endl;
    cout << "The value of s is " << (int)s << endl;
    int u = int(s);

    cout << "The expression is " << t + s << endl;
    cout << "The expression is " << t + int(s) << endl;
    cout << "The expression is " << t + (int)s << endl;
    return 0;
}