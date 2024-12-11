

#include <iostream>
using namespace std;
void Head()
{
    cout << "\n\t\t\t Multiplication Table From 1 to 10 \n\n";
	cout << "\t";
	for (short i = 1; i <= 10; i++)
	{
		cout   << i << "\t";
	}
	cout << "\n____________________________________________________________________________________\n";
}

string Colms(short i)
{
	if (i < 10)
		return "  |";
	else
		return " |";
	
}
void table()
{
	Head();
	
	for (short i = 1; i <= 10; i++)
	{
		
			cout << i << Colms(i) << " ";
			for (int j = 1; j <= 10; j++)
			{

				cout << "\t" << i * j << " ";
				
			}
			cout << endl;
		
	}
		
			
		
	
}

int main()
{
	table();
}
