//Including all of the libraries that are needed for the program

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Creating functions
void menu(ifstream &infile);
void countTotal(ifstream &infile);
void countMoney(ifstream &infile);
void countPolitics(ifstream &infile);
void printParis(ifstream &infile);
void printDreamworks(ifstream &infile);
void printUber(ifstream &infile);
void printGaming(ifstream &infile);

//main function-------------------------------------------------------------------------------------------
int main() {
	//instantiating
	ifstream infile;
	infile.open("sampleTweets.csv");

	//Printing a line to signify the beginning of the program
	cout << "            Welcome to the program            " << endl;

	menu(infile);

	//Printing a line to signify the end of the program
	cout << "End of the program, Thank you for using" << endl;
	system("pause");
	return 0;
}

//menu function-------------------------------------------------------------------------------------------
void menu(ifstream &infile) {
	//Creating a variable that will hold the value that the user chooses
	char userOption;

	//Printing the menu to the console
	cout << "=================================================================" << endl;
	cout << "|            Please pick an option            |" << endl;
	cout << "|                                |" << endl;
	cout << "| 1 Total number of tweets                    |" << endl;
	cout << "| 2 Total number of tweets containing the word money        |" << endl;
	cout << "| 3 Total number of tweets containing the word politics    |" << endl;
	cout << "| 4 All the tweets containing the word Paris            |" << endl;
	cout << "| 5 All the tweets containing the word Dreamworks        |" << endl;
	cout << "| 6 All the tweets containing the word Uber            |" << endl;
	cout << "| 7 All the tweets containing the word Gaming            |" << endl;
	cout << "| 8                                |" << endl;
	cout << "| 9                                |" << endl;
	cout << "| 10                              |" << endl;
	cout << "| 11 End the program                        |" << endl;
	cout << "=================================================================" << endl;
	cin >> userOption;

	//Switch statement to lead to the function that corresponds with whichever option the user picks
	switch (userOption) {
	case 1:
		countTotal(infile);
		break;
	case 2:
		countMoney(infile);
		break;
	case 3:
		countPolitics(infile);
		break;
	case 4:
		printParis(infile);
		break;
	case 5:
		printDreamworks(infile);
		break;
	case 6:
		printUber(infile);
		break;
	case 7:
		printGaming(infile);
		break;
	case 8:
		cout << "Option is invalid for the time being" << endl;
		menu(infile);
		break;
	case 9:
		cout << "Option is invalid for the time being" << endl;
		menu(infile);
		break;
	case 10:
		cout << "Option is invalid for the time being" << endl;
		menu(infile);
		break;
	case 11:
		break;
	default:
		cout << "Invalid option" << endl;
		menu(infile);
	}
}

//countTotal function-------------------------------------------------------------------------------------------
void countTotal(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR: COULD NOT READ FILE" << endl;
	}

	//Creating a variable to hold the tweet and a counter
	string tweet;
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//Increase the counter by one
	while (!infile.eof()) {
		getline(infile, tweet);
		counter++;
	}

	//Print the value of the counter
	cout << "The total number of tweets is: " << counter << endl;


}

//countMoney function-------------------------------------------------------------------------------------------
void countMoney(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "File is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Money";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Increase the counter by one
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			counter++;
		}
	}
	//Print the value of the counter
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;

}

//countPolitics function-------------------------------------------------------------------------------------------
void countPolitics(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Politics";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Increase the counter by one
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			counter++;
		}
	}
	//Print the value of the counter
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;

}

//printParis function-------------------------------------------------------------------------------------------
void printParis(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Paris";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			cout << tweet << endl;
		}
	}
}

//printDreamworks function-------------------------------------------------------------------------------------------
void printDreamworks(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Dreamworks";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			cout << tweet << endl;
		}
	}
}

//printUber function-------------------------------------------------------------------------------------------
void printUber(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Uber";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			cout << tweet << endl;
		}
	}
}
void printGaming(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Gaming";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			cout << tweet << endl;
		}
	}
}

