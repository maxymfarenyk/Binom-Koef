#include <iostream> 

#include<algorithm> 

using namespace std;



int koef(int n, int k)

{

    if (k > n) return 0;

    if (k == 0 || k == n) return 1;
    
    else
    return koef(n - 1, k - 1) + koef(n - 1, k);

}



double speed(int n, int k)

{

    return k * max(n, k - n);

}



int main()

{

    int k, n;

    cout << "input k and n: ";

    cin >> k >> n;

    cout << "C(" << n << ", " << k << ") is " << koef(n, k) << endl;

    cout << "Speed: O(" << speed(n, k) << ")" << endl;

    return 0;

}