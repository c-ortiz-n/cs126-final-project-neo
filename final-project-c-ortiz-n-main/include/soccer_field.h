#pragma once
#include "soccer_field.h"
#include "../../../include/glm/vec2.hpp"
namespace finalproject {

class SoccerField {
  
 public:
  
  SoccerField(const glm::vec2& field_top_left, const glm::vec2& field_bottom_right);

  void Display() const;
  
  void AdvanceOneFrame();

  void DrawField() const;
  
 private: 
  const glm::vec2 kGrassTopLeft;
  const glm::vec2 kGrassBottomRight;
  
  const size_t spacer = 30;
  const glm::vec2 kFieldTopLeft;
  const glm::vec2 kFieldBottomRight;
  const glm::vec2 kFieldCenter;
  const ci::Color kFieldLineColor;
  
  
  
  

};


}