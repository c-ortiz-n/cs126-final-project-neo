#include <visualizer.h>

namespace finalproject {

Visualizer::Visualizer() : field_({0, kYWindowSize / 8}, {kXWindowSize, kYWindowSize}){
  
  ci::app::setWindowSize(kXWindowSize, kYWindowSize);
}

void Visualizer::draw() {
  ci::Color background_color("black");
  ci::gl::clear(background_color);
  
  field_.Display();
}

void Visualizer::update() {
  field_.AdvanceOneFrame();
}

void Visualizer::keyDown(ci::app::KeyEvent) {
  //include the different methods for each key for player movement
} 



}




