#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int n=((b-a)+50)/100;
	int hour=n/3600;
	n= n%3600;
	int minute=n/60;
	int second=n%60;
	printf("02%d:02%d:02%d",hour,minute,second);
	return 0;
} 
