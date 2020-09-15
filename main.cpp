/*
 * copyright (c) 2020 Blaise-Florentin Collin
 *
 * This file is part of mtcd.
 *
 * astrofocuser is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License v3
 * as published by the Free Software Foundation
 *
 * astrofocuser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * v3 along with astrofocuser; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#include <iostream>

#include <QtGui>

#include "qfwhm.hpp"

// app information
#define ASTROFOCUSER_NAME	"mtcd"
#define ASTROFOCUSER_COPYRIGHT	"(c) Blaise-Florentin Collin, GNU GPLv3"

int main(int argc, char *argv[])
{
   // software informations
   std::cout << ASTROFOCUSER_NAME << " " << BINARY_VERSION << " build " << BUILD_VERSION << std::endl;
   std::cout << ASTROFOCUSER_COPYRIGHT << std::endl;

   // app and object build
   QApplication app(argc, argv);
   QFwhm window;
   window.show();

   // app loop
   return app.exec();
}
