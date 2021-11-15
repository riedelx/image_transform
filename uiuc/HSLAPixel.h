/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  class HSLAPixel {
    public:
      double h; /**< Double for the hue of the pixel, in degrees [0, 360]. */
      double s; /**< Double for the saturation of the pixel, [0, 1]. */
      double l; /**< Double for the luminance of the pixel, [0, 1]. */
      double a; /**< Double for the alpha of the pixel, [0, 1]. */

      // HSLAPixel();
  };


}
