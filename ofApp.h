#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void mouseEntered(int x, int y) {};
	void mouseExited(int x, int y) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	void setHexagonToMesh(ofMesh& face_target, ofMesh& frame_target, glm::vec3 location, float radius, float height, ofColor face_color, ofColor frame_color);

	vector<glm::vec3> location_list;
	vector<int> life_list;
	vector<ofColor> face_color_list;

	ofEasyCam cam;
	ofMesh face, frame;
};