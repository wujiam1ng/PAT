//����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�
//
//�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��
//
//�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�
//
//����������
//1234567890987654321123456789
//���������
//yi san wu

#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int sum=0;
	string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i=0;i<s.length();i++)
	sum+=(s[i]-'0');
	string num = to_string(sum);
	for(int i=0;i<num.length();i++){
		if(i!=0)cout<<' ';
		cout<<str[num[i]-'0'];
	}
	return 0;
}
