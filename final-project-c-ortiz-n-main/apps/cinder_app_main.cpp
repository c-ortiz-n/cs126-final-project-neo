#include <visualizer.h>

using finalproject::Visualizer;

void prepareSettings(Visualizer::Settings* settings) {
  settings -> setResizable(false);
}

CINDER_APP(Visualizer, ci::app::RendererGl, prepareSettings);
