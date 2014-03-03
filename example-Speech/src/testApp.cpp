#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	kinect.initSensor(0);
	//string grammarPath = ofToDataPath("grammar/en-US.grxml", true);
	string grammarPath = "C:\\en-US.grxml";
	kinect.setSpeechGrammarFile(grammarPath);
	kinect.initAudio();
	kinect.initSpeech();
	kinect.start();
}

//--------------------------------------------------------------
void testApp::update(){
	kinect.update();
}

//--------------------------------------------------------------
void testApp::draw()
{
	
}

void testApp::speechEvent( ofxKCBSpeechEvent & speechEvt )
{
	cout << " got speech event " << endl;
	cout << " detected " << speechEvt.detectedSpeech << endl;
	cout << " confidence " << speechEvt.confidence << endl;
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}