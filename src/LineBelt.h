//
//  LineBelt.h
//  ofxAnimationUtility
//
//  Created by HirokiNaganuma on 2015/09/24.
//
//

#ifndef __ofxAnimationUtility__LineBelt__
#define __ofxAnimationUtility__LineBelt__

#include <stdio.h>

#include "ofMain.h"

class LineBelt{
private:
    vector<float> position;
    vector<ofColor> color;
    float pos_center_y;
    float line_num;
    float line_length;
    bool mode;
    
    void set_center_y(float y);
    void generate_position();
    void generate_color();
    void set_line_num(int line_num);
    void set_line_length(float line_length);
public:
    LineBelt(){};
    void set_mode();
    void setup_belt(int num);
    void update_belt();
    void draw_belt();
};

#endif /* defined(__ofxAnimationUtility__LineBelt__) */