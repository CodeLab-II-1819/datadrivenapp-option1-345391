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
void countGameOfThrones(ifstream &infile);
void countDogs(ifstream &infile);
void countMusicIn2010(ifstream &infile);

//main function-------------------------------------------------------------------------------------------
int main() {
	//instantiating
	ifstream infile;


	//Printing a line to signify the beginning of the program
	cout << "            Welcome to the program            " << endl;

	menu(infile);

	//Printing a line to signify the end of the program
	cout << "End of the program, Thank you for using" << endl;
	system("Pause");
	return 0;
}

//menu function-------------------------------------------------------------------------------------------
void menu(ifstream &infile) {
	//Creating a variable that will hold the value that the user chooses
	int userOption;

	while (true) {



		//Printing the menu to the console
		cout << "=================================================================" << endl;
		cout << "|            Please pick an option           " << endl;
		cout << "|                                |" << endl;
		cout << "| 1. Total number of tweets     |" << endl;
		cout << "| 2. Total number of tweets containing the word money |" << endl;
		cout << "| 3. Total number of tweets containing the word politics|" << endl;
		cout << "| 4. All the tweets containing the word Paris  |" << endl;
		cout << "| 5. All the tweets containing the word Dreamworks  |" << endl;
		cout << "| 6. All the tweets containing the word Uber  |" << endl;
		cout << "| 7. All the tweets containing the word Gaming |" << endl;
		cout << "| 8. Total number of tweets containing the word GameOfThrones and print out the tweets   |" << endl;
		cout << "| 9. Total number of twets containing Dogs, and their tweets    |" << endl;
		cout << "| 10. Total of all of the tweets containing music in 2010    |" << endl;
		cout << "| 11. End the program   |" << endl;
		cout << "=================================================================" << endl;
		cin >> userOption;

		infile.open("sampleTweets.csv");
		if (userOption == 11) {
			break;
		}
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
			countGameOfThrones(infile);
			break;
		case 9:
			countDogs(infile);
			break;
		case 10:

			countMusicIn2010(infile);
			break;

		default:
			cout << "Invalid option" << endl;

		}





	}
}


void menu(ifstream &infile);
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
	infile.close();
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
	infile.close();
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
	infile.close();
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
	infile.close();
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
	infile.close();
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
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;
	infile.close();
}
//printGaming function------------------------------------------------------------
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
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;
	infile.close();
}
//countGameOfThrones function-------------------------------------------------------------------------------------------
void countGameOfThrones(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "File is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "GameOfThrones";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Increase the counter by one
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			counter++;
			cout << tweet << endl;
		}
	}
	//Print the value of the counter
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;
	infile.close();
}
//printDogs function------------------------------------------------------------
void countDogs(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word = "Dogs";
	int counter = 0;

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word) < 140) {
			counter++;
			cout << tweet << endl;

		}
	}
	cout << "The number of tweets containing the word " << word << " is: " << counter << endl;
	infile.close();
}
//printDevonandCornwall function------------------------------------------------------------
void countMusicIn2010(ifstream &infile) {

	//Checking to see if the file is being read
	if (infile.good()) {
		cout << "file is reading..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}

	//Creating a variable to hold the tweet, a word string to compare to the tweet string and a counter
	string tweet;
	string word1 = "2010";
	int counter = 0;


	string word2 = "Music";

	//While is is not (!) the end (.eof()) of the file (infile)
	//Get the tweet from the file and put it into the tweet variable
	//If the variable 'word' can be found in the variable 'tweet' within 140 characters
	//Print the tweet to the console
	while (!infile.eof()) {
		getline(infile, tweet);
		if (tweet.find(word1) < 140 && tweet.find(word2) < 140) {
			counter++;
			cout << tweet << endl;

		}
	}
	cout << "The number of tweets containing the word " << word1 + " " + word2 << " is: " << counter << endl;
	infile.close();
}
