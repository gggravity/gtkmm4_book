//
// Created by martin on 18-08-22.
//

#include "radiobuttons.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
  {
    auto app = Gtk::Application::create("org.gtkmm.example");

    //Shows the window and returns when it is closed.
    return app->make_window_and_run<RadioButtons>(argc, argv);
  }