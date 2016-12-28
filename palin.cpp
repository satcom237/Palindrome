/****************************************************************************************
 * Program:	Palindrome 
 * Author:	Sathya Ramanathan
 * Date:	11/7/2016
 * Description: Determines if user input is a palindrome or not (also can reverse and
 		change word) 
****************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string determine_palindrome(string x){
	int r = 1;
	for(int i = 0; i < x.length(); i++){
		if(x[i]  == (x[(x.length()-(i+1))])){
		}
		else{
			cout << x << " is not a palindrome" << endl;
			r = 2;
			break;
		}
	}
	if(r == 1){
		cout << "It's a palindrome!" << endl;
	}
	return x;
}

string reverse(string x){
	string n = x;
	int j;
	for(int i = 0; i < x.length(); i++){
		j = x.length()-(i+1);
		n[i] = x[j];
	}
	cout << n << endl;
	return n;
}

string change(){
	string nw;
	cout << "Enter new word: ";
	cin >> nw;
	return nw;
}

string ask_question(string x){
	int ans;
	cout << "Enter (1)to determine if palindrome, (2)to reverse word, (3)to change word, or (4)to quit: ";
	cin >> ans;
	while(ans != 1 && ans != 2 && ans != 3 && ans != 4){
		cout << "Invalid, re-enter: ";
		cin >> ans;
	}
	if (ans == 1){
		determine_palindrome(x);
		return x;
	}
	else if (ans == 2){
		x = reverse(x);
		return x;
	}
	else if (ans == 3){
		x = change();
		return x;
	}
	else{
		exit(1);
	}
}

int main(){
	system("clear");
	string x;
	cout << "Welcome to Palindrome" << endl;
	cout << "Enter a word: "; 
	cin >> x;
	while(2 > 1){
		x = ask_question(x);
	}

	return 0;
}

