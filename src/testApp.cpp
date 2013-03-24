#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
	ofBackground(0, 0, 0);
	ofSetVerticalSync(false);
	ofEnableAlphaBlending();
    
	shader.load("multitexture");
	image1.loadImage("res_image1.png");
	image2.loadImage("res_image2.png");
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	const int fWidth= ofGetWidth();
	const int fHeight= ofGetHeight();
    
	image1.bind();
	image2.bind();
    
	shader.begin();
	shader.setUniformTexture("tex0", image1, image1.getTextureReference().getTextureData().textureID);
	shader.setUniformTexture("tex1", image2, image2.getTextureReference().getTextureData().textureID);
    
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0);
	glVertex3f(0, 0, 0);
	glTexCoord2f(fWidth, 0);
	glVertex3f(fWidth, 0, 0);
	glTexCoord2f(fWidth, fHeight);
	glVertex3f(fWidth, fHeight, 0);
	glTexCoord2f(0, fHeight);
	glVertex3f(0,  fHeight, 0);
	glEnd();
    
	shader.end();
    
	image1.unbind();
	image2.unbind();
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