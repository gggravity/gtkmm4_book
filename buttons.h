//
// Created by martin on 18-08-22.
//

#pragma once

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Buttons : public Gtk::Window
   {
   public:
      Buttons ();

      virtual ~Buttons ();

   protected:
      //Signal handlers:
      void on_button_clicked ();

      //Child widgets:
      Gtk::Button m_button;
   };
