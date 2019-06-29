#include<iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "fd.h"
using namespace std;
struct person
{
    string name;

    string location;
    string color;
};
int id = 300;
int x = 0;
Date dt;
//inside main
//int main(void)
//{
//	//std::istringstream iss;
//	int n;
//	string idd,line;
//	person p;
//	ifstream in("test.txt");
//	while (!in.eof())
//	{getline(in,idd,',');
//
//		 std::istringstream iss (idd);
//
//
//	  iss >> n;
//
//	  getline(in,p.name,',');
//	  			getline(in,p.location,',');
//	  			getline(in,p.color);
//
//
//		if(id == n)
//		{
//			//getline(in,p.name,',');
//			//getline(in,p.location,',');
//			//getline(in,p.color);
//			x = 1;
//			break;
//		}
//
//
//	}
//
//	//
//  if(x == 0 )
//  {
//	  cout << "erorr id not found" << " ";
//  }
//	cout << p.name << " "
//
//			<< p.location << " "
//			<< p.color << "\n";
//
//
//	return 0;
//}


int main ()
{
	int yearR = 2019;
	int montR = 9;
	int dayR = 10;
	int yR = 0;
	dt.setDate(yearR, montR, dayR,yR );
	cout << yR << " "
			<<yearR << " "

				 "\n";


		return 0;
}
