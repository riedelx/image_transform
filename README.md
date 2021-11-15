# Image Transform  

This is the final project of Object Oriented Data Structures in C++ by Coursera to transform png images. This is based on HSL color space using the Hue, Saturation, and Luminance of the colour.  Image manipulation code is provided in `ImageTransform.cpp  ` with the following functions:

* grayscale  - creates grayscale transformation by reducing saturation of every pixel to 0.
* spotlight  - adjusts the luminance of a pixel based on the distance between the the pixel and the designated
  center by decreasing the luminance by 0.5% per 1 pixel unit of Euclidean distance, up to an 80% decrease in
  luminance at most.  
* illinify  - transforms the hue of every pixel to Illini Orange (11) or Illini Blue (216), whichever is closer to the original value.
* watermark - lighten a region based on the contents of another image that acts as a stencil.  For every pixel that exists within the bounds of both base image and stencil, the luminance of the base image should be increased by +0.2 (absolute, but not
  to exceed 1.0) if and only if the luminance of the stencil at the same pixel position is at maximum (1.0).  

