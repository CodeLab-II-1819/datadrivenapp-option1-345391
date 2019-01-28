#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofImage twitterlogo;//create a varible for a twitter logo image.
		ofTrueTypeFont myfont;
		
};
