#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include <cinder/gl/gl.h>
#include <cstddef>
#include "soccer_field.h"
#include "../../../include/cinder/app/KeyEvent.h"

namespace finalproject {

 class Visualizer : public ci::app::App {
   
  public:
   Visualizer();
   
   void draw() override;
   void update() override;
   void keyDown(ci::app::KeyEvent) override;
   
  private: 
   const int kXWindowSize = 1300;
   const int kYWindowSize = 800;
   
   SoccerField field_;
 };



}