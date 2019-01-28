#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	myfont.load("ariel.ttf", 32);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	//screen width = 1024
	//screen height = 768

	ofBackground(255);//set the overall background of the screen to white.
	ofSetColor(10, 146, 237);//set the colour of the rectangle to dark blue
	ofDrawRectangle(150, 0, 768, 768);//creating a blue rectangle to fit screen

	ofSetColor(255);//set the colour of the rectangle to white
	ofDrawRectangle(170, 20, 720, 720);//creating a white rectangle inside the blue rectangle, to make it look like a white rectangle with a blue border.

	ofSetColor(10, 146, 237);

	twitterlogo.load("twitter.PNG");//searches for the named image in the bin folder
	twitterlogo.draw(50, 0, 70, 70);//draws the logo to the screen in a set position

	ofSetColor(10, 146, 237);
	ofDrawRectangle(150, 0, 150, 740);//draws a small rectangle before the one below to widen it out.

	ofSetColor(51, 51, 255);
	ofDrawRectangle(180, 20, 130, 720);//draws a rectangle on the left hand side of the screen with the set points, height and width.

	ofSetColor(51, 51, 255);
	ofDrawRectangle(768, 20, 130, 720);//draws the same size rectangle on the right hand side of screen


	ofSetColor(51, 51, 255);
	ofDrawRectangle(180, 20, 600, 50);//creates a rectangle at the top of the screen to stretch across the top.

	ofSetColor(51, 51, 255);
	ofDrawRectangle(200, 680, 600, 60);/*creates a rectangle at the bottom of the screen to stretch across the bottom so now theres a whole border for the menu and a box in
									   the middle for the tweets to appear in*/


	ofSetColor(0, 0, 0);
	ofDrawBitmapString("Query 1-6", 200, 50);
	ofDrawBitmapString("1.Total number\n of tweets", 190, 100);
	ofDrawBitmapString("2.Total number\nof tweets\ncontaining the\nword money", 190, 140);/*Creates text on the screen that are all posiotned on the x axis at 190 and spread
																						  evenly apart down the y axis*/
	ofDrawBitmapString("3.Total number\nof tweets\ncontaining the\nword Politics", 190, 210);
	ofDrawBitmapString("4.All the tweets\ncontaining the\nword Paris", 190, 290);
	ofDrawBitmapString("5.All of the\n of tweets\ncontaining the\nword Dreamworks", 190, 360);
	ofDrawBitmapString("6.All of the\n of tweets\ncontaining the\nword Uber", 190, 440);


	ofDrawBitmapString("Query 7-11", 770, 50);
	ofDrawBitmapString("7.All of the\ntweets\ncontaining the\nword Gaming", 770, 140);
	ofDrawBitmapString("8.Total number\nof tweets\ncontaining the\nword Game of\nThrones and print\nout the tweets", 770, 210);/*Copied and pasted the text above, but changed
																															  the paramenters so they are the right side instead
																															  of the left*/
	ofDrawBitmapString("9.Total number\nof tweets\ncontaining the\nwords Dogs and\nCats and their\ntweets", 770, 300);
	ofDrawBitmapString("10.Total number\nof tweets\ncontaining music\nin 2010", 770, 400);
	ofDrawBitmapString("Exit Program", 770, 600);



	ofDrawBitmapString("Welcome to the program", 450, 50);//created text at the top of the screen in the middle to indicate the title.

	ofDrawBitmapString("Tweets appear here", 460, 200);//created text in the middle of the screen to show where the tweets will pop up
}


