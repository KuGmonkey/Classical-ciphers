#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	//密钥
	map<char, char> table;
	table['i'] = 'a'; table['l'] = 'b'; table['o'] = 'c'; table['v'] = 'd'; table['e'] = 'e'; table['n'] = 'f'; table['a'] = 'g'; table['k'] = 'h';
	table['u'] = 'i'; table['r'] = 'j'; table['s'] = 'k'; table['t'] = 'l'; table['y'] = 'm'; table['b'] = 'n'; table['c'] = 'o'; table['d'] = 'p';
	table['f'] = 'q'; table['g'] = 'r'; table['h'] = 's'; table['j'] = 't'; table['m'] = 'u'; table['p'] = 'v'; table['q'] = 'w'; table['w'] = 'x';
	table['x'] = 'y'; table['z'] = 'z';
	table['I'] = 'A'; table['L'] = 'B'; table['O'] = 'C'; table['V'] = 'D'; table['E'] = 'E'; table['N'] = 'F'; table['A'] = 'G'; table['K'] = 'H';
	table['U'] = 'I'; table['R'] = 'J'; table['S'] = 'K'; table['T'] = 'L'; table['Y'] = 'M'; table['B'] = 'N'; table['C'] = 'O'; table['D'] = 'P';
	table['F'] = 'Q'; table['G'] = 'R'; table['H'] = 'S'; table['J'] = 'T'; table['M'] = 'U'; table['P'] = 'V'; table['Q'] = 'W'; table['W'] = 'X';
	table['X'] = 'Y'; table['Z'] = 'Z';

	//解密
	string c;
	cout << "密文：";
	getline(cin, c);
	string m = c;
	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] >= 65 && m[i] <= 90 || m[i] >= 97 && m[i] <= 122)
			m[i] = table[m[i]];
	}
	cout << "明文：" << m;
	return 0;
}