#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	//ÃÜÔ¿
	map<char, char> table;
	table['a'] = 'i'; table['b'] = 'l'; table['c'] = 'o'; table['d'] = 'v'; table['e'] = 'e'; table['f'] = 'n'; table['g'] = 'a'; table['h'] = 'k';
	table['i'] = 'u'; table['j'] = 'r'; table['k'] = 's'; table['l'] = 't'; table['m'] = 'y'; table['n'] = 'b'; table['o'] = 'c'; table['p'] = 'd';
	table['q'] = 'f'; table['r'] = 'g'; table['s'] = 'h'; table['t'] = 'j'; table['u'] = 'm'; table['v'] = 'p'; table['w'] = 'q'; table['x'] = 'w';
	table['y'] = 'x'; table['z'] = 'z';
	table['A'] = 'I'; table['B'] = 'L'; table['C'] = 'O'; table['D'] = 'V'; table['E'] = 'E'; table['F'] = 'N'; table['G'] = 'A'; table['H'] = 'K';
	table['I'] = 'U'; table['J'] = 'R'; table['K'] = 'S'; table['L'] = 'T'; table['M'] = 'Y'; table['N'] = 'B'; table['O'] = 'C'; table['P'] = 'D';
	table['Q'] = 'F'; table['R'] = 'G'; table['S'] = 'H'; table['T'] = 'J'; table['U'] = 'M'; table['V'] = 'P'; table['W'] = 'Q'; table['X'] = 'W';
	table['Y'] = 'X'; table['Z'] = 'Z';
	string m;
	cout << "Ã÷ÎÄ£º";
	getline(cin, m);
	string c = m;
	for (int i = 0; i < c.length(); i++)
	{
		if (c[i] >= 65 && c[i] <= 90 || c[i] >= 97 && c[i] <= 122)
		{
			c[i] = table[c[i]];
		}
	}
	cout << "ÃÜÎÄ£º" << c;
	return 0;
}