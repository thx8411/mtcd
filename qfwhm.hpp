/*
 * copyright (c) 2012 Blaise-Florentin Collin
 *
 * This file is part of astrofocuser.
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

#ifndef _QFWHM_
#define _QFWHM_

#include <QtGui>

// widgets sizes
#define FWHM_WIDTH		128
#define FWHM_HEIGHT		128
#define FWHM_LABEL_HEIGHT	24

// fwhm class declaration
class QFwhm : public QWidget {
   Q_OBJECT
   public :
      QFwhm();
      ~QFwhm();
   private :
      // fwhm calculated value
      double fwhm_value;
      QString fwhm_text;
      // picture hole for grabbing
      QWidget *hole;
      // FWHM value to display
      QLabel *value;
      // Widget placement
      QVBoxLayout *grid;
      // timer loop
      QTimer *timer;
      // grabbed image
      QPixmap background;
      QImage image;
   private slots :
      // fwhm computation
      void compute();
};

#endif
