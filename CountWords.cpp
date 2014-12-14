#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main ()
{

	char data[100], op;
	ifstream infile;
	infile.open("word_list.txt", ios::in );
	cout << "\n\t\t\t\tCountWords\n\n";
	cout<<"********************************************************************************\n";
	cout<<"Hi! I am going to help you in counting the number of words you know\n" << endl;
	cout << "Rules are simple. You'll be shown a word on screen" << endl;
	cout << "Press Y if you know the word" << endl;
	cout << "Press N if you don\'t know the word" << endl;
	cout << "Press E to escape\n" << endl;
	cout<<"********************************************************************************\n";
	long x = 0, c = 0;
	while (true)
	{
		infile>> data;
    		if( infile.eof() ) break;
		cout << "Do you know this word" << endl;
        cout << "\n>> "<<data << endl<<endl;
        cout << "Y/N : ";
		x++;
		op = getche();
		if(op == 'Y' || op == 'y')
			c++;
		else if(op == 'E' || op == 'e')
			break;
        cout<<"\n\n==================================\n";
		cout<<"\nYou know "<<c<<" word/words out of "<<x<<endl<<endl;
        cout<<"==================================\n";

	}
	cout<<"\n\n\n\n********************************************************************************\n";
	cout<<"Your final score is "<<c<<" out of "<<x<<endl;
	cout<<"********************************************************************************\n";
	cout<<"Thank you for using this program\nhttp://nirmankarta.com"<<endl;
	cout<<"CountWords is open source software. It is under GNU GPL licence"<<endl;
	cout<<"********************************************************************************\n";
	infile.close();
	return 0;
}
