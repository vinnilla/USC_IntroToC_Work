#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
int num, digits;

cout << "Enter an integer: ";
cin >> num;
cout << endl;
digits = 0;

while (num >= 1)
{
cout << pow (10, digits) << "'s place number is " << num % 10 << endl;
num /= 10;
digits ++;
}

return 0;

}
