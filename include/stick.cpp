#include "raylib.h"
#include "raymath.h"
#include <iostream>


class stick
{
    private:
        Vector2 p1,p2;
        float theta = PI/2;
        

    public:
        void setPos(Vector2 ,Vector2);
        void draw();

};
void stick::setPos(Vector2 st,Vector2 en){
    p1= st;
    p2= en;
    theta = (p1.y-p2.y)/(p1.x-p2.x);
    std::cout << theta; 
}
void stick::draw(){

    DrawLineV(p1,p2,WHITE);

}

