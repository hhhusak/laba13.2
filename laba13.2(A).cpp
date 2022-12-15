#include <iostream>

using namespace std;

#define X 3
#define Y 2
#define Z 1
#define SQR(x) (x)*(x)
#define POWERTO2(x, y) (x - y) * (x - y)
#define ABS(x, y) ((y-x) < 0) ? -(y - x) : (y - x)
#define MAX(y,z) ((y)>(z))?(y):(z) 
#define MIN(y,z) ((y)<(z))?(y):(z)

int main()
{
  cout << "Lab 13.2 Using macros and preprocessing directive" << endl;
  int x = X, 
    y = Y, 
    z = Z,
    first,
    second,
    powto2,
    res;

    #if Z == 1
        powto2 = POWERTO2(x, y);
        res = MAX(powto2, ABS(x, y));
        cout << "result:" << res << endl;

    #else
    {
        first = x + SQR(y);
        second = z + SQR(x);
        res = MIN(first, second);
        cout << "result:" << res << endl;
    }
    #endif  
    return 0;
}