#include <visualizer.h>
#include "soccer_field.h"

namespace finalproject {

SoccerField::SoccerField(const glm::vec2 &grass_top_left, const glm::vec2 &grass_bottom_right) :
kGrassTopLeft(grass_top_left), kGrassBottomRight(grass_bottom_right), 
kFieldTopLeft({kGrassTopLeft.x + spacer, kGrassTopLeft.y + spacer}), 
kFieldBottomRight({kGrassBottomRight.x - spacer, kGrassBottomRight.y - spacer}),
kFieldCenter({kFieldBottomRight.x / 2, (kFieldTopLeft.y + kFieldBottomRight.y) / 2}),
kFieldLineColor(ci::Color("white")) {}
  
void SoccerField::Display() const {
  DrawField();
}

void SoccerField::AdvanceOneFrame() {
  std::cout << 0;
}

void SoccerField::DrawField() const {
  //draws the "grass" for the field
  ci::gl::color(ci::Color("green"));
  ci::gl::drawSolidRect(ci::Rectf(kGrassTopLeft, kGrassBottomRight));
  
  //draw the outline of the field boundaries
  ci::gl::color(ci::Color(kFieldLineColor));
  ci::gl::drawStrokedRect((ci::Rectf(kFieldTopLeft, kFieldBottomRight)), 2);
  
  //draw the center circle 
  ci::gl::color(ci::Color(kFieldLineColor));
  ci::gl::drawStrokedCircle(kFieldCenter, 80, 2, 360);
  
  //draws the line that goes through the center circle
  ci::gl::color(ci::Color(kFieldLineColor));
  ci::gl::drawLine({kFieldCenter.x, kFieldTopLeft.y}, {kFieldCenter.x, kFieldBottomRight.y});
  
  //draw left penalty box
  ci::gl::color(ci::Color(kFieldLineColor));
  ci::gl::drawStrokedRect((ci::Rectf({kFieldTopLeft.x, kFieldTopLeft.y + (kFieldBottomRight.y / 6)},
                                    {kFieldTopLeft.x + (kFieldBottomRight.x / 6), 
                                     kFieldBottomRight.y - (kFieldBottomRight.y / 6)})), 2);
  
  //draw right penalty box
  ci::gl::color(ci::Color(kFieldLineColor));
  ci::gl::drawStrokedRect((ci::Rectf({kFieldBottomRight.x, kFieldTopLeft.y + (kFieldBottomRight.y / 6)},
                                    {kFieldBottomRight.x - (kFieldBottomRight.x / 6), 
                                     kFieldBottomRight.y - (kFieldBottomRight.y / 6)})), 2);
}


} //namespace finalproject