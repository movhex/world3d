#ifndef CAMERA_H
#define CAMERA_H

#include <GL/gl.h>
#include <GL/glu.h>

#include "actor.h"

class Camera : public Actor {
public:
    void applyTransform(void);
private:

}; // End of class

#endif // CAMERA_H
