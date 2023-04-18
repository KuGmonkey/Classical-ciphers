#include<iostream>
#include<string>
using namespace std;
int main()
{
	string m;//明文
	cout << "明文：";
	getline(cin, m);//可以接受空格  cin.getline()是char* 类型的
	string c = m;//密文
	for (int i = 0; i < c.length(); i++)//移位步长为5
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
	cout << "密文：" << c;
	return 0;
}