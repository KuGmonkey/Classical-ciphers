#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	//统计密文中各字符的频率
	char alpht[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int frc[26] = { 0 };
	string c;
	cout << "密文：";
	getline(cin, c);//输入密文

	//将密文中的大写字母改为小写
	for (int i = 0; i < c.length(); i++)
		if (c[i] >= 65 && c[i] <= 90)
			c[i] = char(int(c[i]) + 32);
	for (int i = 0; i < c.length(); i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			//密文中各字母出现的次数
			for (int j = 0; j < 26; j++)
			{
				if (c[i] == alpht[j])
					frc[j]++;
			}
		}
	}

	//根据密文中各字符出现的频率，对字符进行排序，然后与统计频率排序一一对应
	for (int i = 0; i < 26; i++)
	{
		for (int j = i + 1; j < 26; j++)
		{
			if (frc[i] < frc[j])
			{
				int temp = frc[i]; frc[i] = frc[j]; frc[j] = temp;
				char temp1 = alpht[i]; alpht[i] = alpht[j]; alpht[j] = temp1;
			}
		}
	}

	//大量统计的各字母出现频率，由高到低：e、t、o、i、a、n、s、r、h、l、d、u、c、m、p、y、f、g、w、b、v、k、x、j、q、z
	char sort[26] = { 'e','t','a','o','i','n','r','s','h','c','p','l','g','b','m','f','y','u','w','d','v','k','x','j','q','z' };

	//只考虑单个字符出现频率，初步猜测密钥
	map<char, char> table;
	for (int i = 0; i < 26; i++)
		table[alpht[i]] = sort[i];

	//看看初步的明文，看有没有哪有问题
	string m = c;
	for (int i = 0; i < m.length(); i++)
		if (m[i] >= 97 && m[i] <= 122)
			m[i] = table[m[i]];
	cout << "明文：" << m << endl;

	//打印置换表
	cout << "---------置换表（明文:密文）---------" << endl;
	for (int i = 0; i < 26; i++)
		cout << sort[i] << "  ";
	cout << endl;
	for (int i = 0; i < 26; i++)
		cout << alpht[i] << "  ";

	return 0;
}