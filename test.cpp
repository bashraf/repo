#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{

	// string adr = "199 the ridgeway, north harrow, london, HA2 7DE";
	// string work = adr;
	// int pos = 0;
	// int space = work.find(" ");
	// vector<int> breaks;
	// breaks.push_back(0);
	// while (space > -1) {
	// 	pos = pos + space + 1;;
	// 	breaks.push_back(pos);
	// 	work = adr.substr(pos);
	// 	space = work.find(" ");
	// }


	// vector<string> elements;
	// for (int i=0; i<breaks.size(); i++){
	// 		elements.push_back(adr.substr(breaks[i], breaks[i+1]-breaks[i]-1));
	// 		//cout << elements[i] << endl;
	// }
	

	//    /* POSTCODE */
 //   string postcode = "";
 //   for (int i=0; i<breaks.size(); i++) {
 //   		if (elements[i].find_first_of("1234567890") != -1 && elements[i].find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") != -1) {
 //   			postcode.append(elements[i]);
 //   		}
 //   }






	string adr = "199 the ridgeway, north harrow, london, HA2 7DE";
	string work = adr;
	int pos = 0;
	int comma = work.find(",");
	vector<int> breaks;
	breaks.push_back(0);
	while (comma > -1) {
		pos = pos + comma + 2;
		breaks.push_back(pos);
		work = adr.substr(pos);
		comma = work.find(",");
	}


	vector<string> elements;
	for (int i=0; i<breaks.size(); i++){
			elements.push_back(adr.substr(breaks[i], breaks[i+1]-breaks[i]-1));
			cout << elements[i] << endl;
	}
	



	   /* POSTCODE */
   string postcode = "";
   for (int i=0; i<breaks.size(); i++) {
   		if (elements[i].find_first_of("1234567890") != -1 && elements[i].find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") != -1) {
   			postcode.append(elements[i]);
   		}
   }








   return 0;


}


