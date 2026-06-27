#include <iostream>
using namespace std;
int a,b=1;
int &bieming=a;
int main() {
    bieming=10;
    cout<<bieming<<a<<endl;
    system("pause");
    return 0;
}
