#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;//����
	cout << "���ģ�";
	getline(cin, m);//���Խ��ܿո�  cin.getline()��char* ���͵�
	string c = m;//����
	for (int i = 0; i < c.length(); i++)//��λ����Ϊ5
	{
		if (c[i] >= 65 && c[i] <= 90)
		{
			int temp = 65 + (int(c[i]) - 65 + 5) % 26;
			c[i] = char(temp);
		}
		if (c[i] >= 97 && c[i] <= 122)
		{
			int temp = 97 + (int(c[i]) - 97 + 5) % 26;
			c[i] = char(temp);
		}
	}
	cout << "���ģ�" << c;
	return 0;
}