/*
 *	 TwitCrusader++ - Twitter Client For Linux Desktop
 *		Copyright (C) 2011  TwitCrusader++
 *
 *		This program is free software: you can redistribute it and/or modify
 *		it under the terms of the GNU General Public License as published by
 *		the Free Software Foundation, either version 3 of the License, or
 *		(at your option) any later version.
 *
 *		This program is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *		GNU General Public License for more details.
 *
 *		You should have received a copy of the GNU General Public License
 *		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *		Source: https://github.com/RoxShannon/TwitCrusaderpp
 *		email: orazio.1985@hotmail.com
 *
 */

#ifndef REGDIALOG_H_
#define REGDIALOG_H_

#include <iostream>
#include <gtkmm.h>
#include <gtkmm/stock.h>

#include "Icons.h"
#include "lang.h"

#include "../../core/include/TwitterObject.h"

using namespace std;
using namespace Gtk;
using namespace Glib;

namespace TwitCrusader {

class RegDialog : public Dialog{

private:
	Table table;
	Label label;
	Button button, cancel_button, tw_login_event;
	Image tw_login_img;

	RefPtr<Gtk::TextBuffer> pin_buffer;
	TextView pin;

protected:
	void foo();
	void quit();
	void browser_authorization();



public:
	RegDialog();
	virtual ~RegDialog();

	void get_access_token();
};
}
#endif /* REGDIALOG_H_ */