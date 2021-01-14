#ifndef SCENE_H
#define SCENE_H

#include <GL/gl.h>
#include <GL/glu.h>

#include "camera.h"

class Scene {
public:
    Scene(void);
    void changeSize(int w, int h);
    void render(void);
    void specKeyHandler(int key, int x, int y);
    void keyboardHandler(uint8_t key, int x, int y);
    void motionHandler(int x, int y);
    void motionPassiveHandler(int x, int y);
private:
    void drawGround(void);
    Camera m_camera;
    int m_x_center;
    int m_y_center;
}; // End of class

#endif // SCENE_H
