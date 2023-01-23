#include "raylib.h"
#include "raymath.h"
#include <iostream>

class stick
{
    private:
        Vector2 start,end;
        float theta = PI/2;
        

    public:
        void setPos(Vector2 , float);
        void draw();

};
void stick::setPos(Vector2 st,float th){
    start = st;
    end = {st.x*sinf(theta),st.y*sinf(theta)};
    std::cout << end.x  << " " << end.y; 
}
void stick::draw(){

    DrawLineV(start , end,WHITE);

}

