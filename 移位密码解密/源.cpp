#include<iostream>
#include<string>
using namespace std;
int main()
{
	string c;//����
	cout << "���ģ�";
	getline(cin, c);
	string m = c;
	
	//����
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] >= 65 && m[i] <= 90)
		{
			int temp = 65 + (int(m[i]) - 65 - 5 + 26) % 26;
			m[i] = char(temp);
		}
		if (m[i] >= 97 && m[i] <= 122)
		{
			int temp = 97 + (int(c[i]) - 97 - 5 + 26) % 26;
			m[i] = char(temp);
		}
	}
	cout << "���ģ�" << m;
	return 0;
}