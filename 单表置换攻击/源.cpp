#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	//ͳ�������и��ַ���Ƶ��
	char alpht[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int frc[26] = { 0 };
	string c;
	cout << "���ģ�";
	getline(cin, c);//��������

	//�������еĴ�д��ĸ��ΪСд
	for (int i = 0; i < c.length(); i++)
		if (c[i] >= 65 && c[i] <= 90)
			c[i] = char(int(c[i]) + 32);
	for (int i = 0; i < c.length(); i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			//�����и���ĸ���ֵĴ���
			for (int j = 0; j < 26; j++)
			{
				if (c[i] == alpht[j])
					frc[j]++;
			}
		}
	}

	//���������и��ַ����ֵ�Ƶ�ʣ����ַ���������Ȼ����ͳ��Ƶ������һһ��Ӧ
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

	//����ͳ�Ƶĸ���ĸ����Ƶ�ʣ��ɸߵ��ͣ�e��t��o��i��a��n��s��r��h��l��d��u��c��m��p��y��f��g��w��b��v��k��x��j��q��z
	char sort[26] = { 'e','t','a','o','i','n','r','s','h','c','p','l','g','b','m','f','y','u','w','d','v','k','x','j','q','z' };

	//ֻ���ǵ����ַ�����Ƶ�ʣ������²���Կ
	map<char, char> table;
	for (int i = 0; i < 26; i++)
		table[alpht[i]] = sort[i];

	//�������������ģ�����û����������
	string m = c;
	for (int i = 0; i < m.length(); i++)
		if (m[i] >= 97 && m[i] <= 122)
			m[i] = table[m[i]];
	cout << "���ģ�" << m << endl;

	//��ӡ�û���
	cout << "---------�û�������:���ģ�---------" << endl;
	for (int i = 0; i < 26; i++)
		cout << sort[i] << "  ";
	cout << endl;
	for (int i = 0; i < 26; i++)
		cout << alpht[i] << "  ";

	return 0;
}