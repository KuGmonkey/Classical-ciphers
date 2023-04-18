#include<iostream>
#include<string>
using namespace std;
int main()
{
	string c;//密文
	cout << "密文：";
	getline(cin, c);
	string m = c;

	//攻击
	for (int n = 1; n < 26; n++)
	{
		for (int i = 0; i < m.length(); i++)
		{
			if (m[i] >= 65 && m[i] <= 90)
			{
				int temp = 65 + (int(c[i]) - 65 + n) % 26;
				m[i] = char(temp);
			}
			if (m[i] >= 97 && m[i] <= 122)
			{
				int temp = 97 + (int(c[i]) - 97 + n) % 26;
				m[i] = char(temp);
			}
		}
		cout << "明文：" << m << " " << "对应密钥：" << 26 - n << endl;
	}
	return 0;
}