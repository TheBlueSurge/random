#include "ofApp.h"
#include <random>
#include <vector>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	
	random_device rd;

	int minX = 0;
	int minY = 0;
	int maxX = 1200;
	int maxY = 970;
	
	mt19937 eng1(rd());
	
	uniform_int_distribution<int> XCord(minX,maxX);
	
	uniform_int_distribution<int> YCord(minY,maxY);
	
	for(int i = 0; i < 20; i++){
		X.push_back(XCord(eng1));
	}
	
	for (int j = 0; j < 20;j++){
		Y.push_back(YCord(eng1));
	}
	
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
