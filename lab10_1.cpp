#include<iostream>

using namespace std;

using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i = 0;
	char grade ;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << i+1 <<  "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;//Do something
			i++;
		}else if(grade == 'B'){ // if grade is B
			count[1]++;//Do something
			i++;
		}
		else if(grade == 'C'){ // if grade is B
			count[2]++;//Do something
			i++;
		}
		else if(grade == 'D'){ // if grade is B
			count[3]++;//Do something
			i++;
		}
		else if(grade == 'F'){ // if grade is B
			count[4]++;//Do something
			i++;
		}
		else if(grade == '0'){
			break;
		}
		else{ 
			cout << "Wrong input. Please input again." << endl;
		} 
	}while(true);
	
	
	cout << "In total "<< i << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
