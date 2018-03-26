#include <iostream>
using namespace std;
int main() {
    int n;
	long  a, b, c;
    cin>>n;
    for (int i = 0; i < n; i++) {      
        cin>>a >>b >>c;
        printf("Case #%d: %s\n", i + 1, a + b > c ? "true" : "false");
    }
    return 0;
}
