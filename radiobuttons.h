//
// Created by martin on 18-08-22.
//

#pragma once

#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/separator.h>

class RadioButtons : public Gtk::Window
   {
   public:
      RadioButtons ();

      virtual ~RadioButtons ();

   protected:
      //Signal handlers:
      void on_button_clicked ();

      //Child widgets:
      Gtk::Box m_Box_Top, m_Box1, m_Box2;
      Gtk::CheckButton m_RadioButton1, m_RadioButton2, m_RadioButton3;
      Gtk::Separator m_Separator;
      Gtk::Button m_Button_Close;
   };