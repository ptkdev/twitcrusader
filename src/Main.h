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

#ifndef MAIN_H_
#define MAIN_H_

#include <gtkmm.h>
#include <iostream>
#include <pthread.h>
#include <libnotify/notify.h>

#include "gui/include/MainWindow.h"
#include "gui/include/lang.h"
#include "core/include/Functions.h"


#include "config.h"


#ifdef ENABLE_NLS
#  include <libintl.h>
#endif





using namespace std;
using namespace TwitCrusader;

#endif /* MAIN_H_ */