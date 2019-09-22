#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
void display(int random[5][6]);
void graph(int random[][6]);
int main()
{
	srand(time(NULL));
	int t = 10;
	int random[5][6] = {};
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 6 ;j++){
			random[i][j] = rand() %10;
		}
	}
	display(random);
	graph(random);
	system("pause");
	return(0);
}

void display(int random[5][6])
{
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 6 ;j++){
			cout << random[i][j] << "	"  ;
		}
		cout << endl;
	}
}

void graph(int random[5][6] )
{
	cout << setfill('-') << setw(26) << "display graph" << setw(24) << "\n";
	cout << "\t0\t1\t2\t3\t4\t5\n";
	cout << setw(50) << "\n";
	for(int i = 0; i < 5 ;i++){
			cout << i << "|	" ;
		for(int j = 0; j < 6 ;j++){
			if (random[i][j] !=  0 ){
				cout<<'*'<<"\t";
			}
			else{
				cout<<"\t" ;
			}
		}
		cout << endl;
	}
}
