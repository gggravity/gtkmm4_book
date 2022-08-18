//
// Created by martin on 18-08-22.
//

#pragma once

#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class ExampleWindow : public Gtk::Window
   {
   public:
      ExampleWindow ();

      virtual ~ExampleWindow ();

   protected:
      //Signal handlers:
      void on_button_toggled ();

      //Child widgets:
      Gtk::CheckButton m_button;
   };