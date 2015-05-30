#include<stdio.h>

char uppercase(char symbol)
{
	char a = 'A';
	char b = 'B';
	char c = 'C';
	char d = 'D';
	char e = 'E';
	char f = 'F';
	char g = 'G';
	char h = 'H';
	char i = 'I';
	char j = 'J';
	char k = 'K';
	char l = 'L';
	char m = 'M';
	char n = 'N';
	char o = 'O';
	char p = 'P';
	char q = 'Q';
	char r = 'R';
	char s = 'S';
	char t = 'T';
	char u = 'U';
	char v = 'V';
	char w = 'W';
	char x = 'X';
	char y = 'Y';
	char z = 'Z';
	
	if(symbol == 'a')
	{
		return a;
	}
	
	if(symbol == 'b')
	{
		return b;
	}
	
	if(symbol == 'c')
	{
		return c;
	}
	
	if(symbol == 'd')
	{
		return d;
	}
	
	if(symbol == 'e')
	{
		return e;
	}
	
	if(symbol == 'f')
	{
		return f;
	}
	
	if(symbol == 'g')
	{
		return g;
	}
	
	if(symbol == 'h')
	{
		return h;
	}
	
	if(symbol == 'i')
	{
		return i;
	}
	
	if(symbol == 'j')
	{
		return j;
	}
	
	if(symbol == 'k')
	{
		return k;
	}
	
	if(symbol == 'l')
	{
		return l;
	}
	
	if(symbol == 'm')
	{
		return m;
	}
	
	if(symbol == 'n')
	{
		return n;
	}
	
	if(symbol == 'o')
	{
		return o;
	}
	
	if(symbol == 'p')
	{
		return p;
	}
	
	if(symbol == 'q')
	{
		return q;
	}
	
	if(symbol == 'r')
	{
		return r;
	}
	
	if(symbol == 's')
	{
		return s;
	}
	
	if(symbol == 't')
	{
		return t;
	}
	
	if(symbol == 'u')
	{
		return u;
	}
	
	if(symbol == 'v')
	{
		return v;
	}
	
	if(symbol == 'w')
	{
		return w;
	}
	
	if(symbol == 'x')
	{
		return x;
	}
	
	if(symbol == 'y')
	{
		return y;
	}
	
	if(symbol == 'z')
	{
		return z;
	}
	
}

main()
{
	char StringMassiv[30];
	char upp;
	printf("Enter char symbol string:  ");
	scanf("%s", &StringMassiv);
	printf("\nConverted char symbol string :  ");
	for(int i = 0;i < 30;i++)
	{	
		if(StringMassiv[i] == '\0')
		{
			break;
		}
		upp = uppercase(StringMassiv[i]);
		printf("%c", upp);
	}
}
