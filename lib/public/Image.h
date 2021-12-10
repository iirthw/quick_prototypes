#pragma once

#include "core/vec2.h"

namespace image
{
    class GrayscaleImage
    {
    public:
        GrayscaleImage(unsigned char* image, int width, int height);
        GrayscaleImage(int width, int height);
        ~GrayscaleImage();
        GrayscaleImage(const GrayscaleImage& other);
        GrayscaleImage& operator= (const GrayscaleImage&) = delete;
        GrayscaleImage(GrayscaleImage&&) = delete;
        GrayscaleImage& operator= (GrayscaleImage&&) = delete;
      
      /**
       * Get value of the image pixel.
       */
      unsigned char getPixel(int i, int j) const;

      /**
       * Set image pixel value.
       */
      void setPixel(int i, int j, unsigned char value);

      /**
       * Get image center.
       */
      constexpr vec2 center() const;
      
      /**
       * Get raw image buffer data.
       */
      inline unsigned char* data() const { return mImg; }

      inline int width() const { return mWidth; }
      inline int height() const { return mHeight; }
      
    private:
      
      int mWidth;
      int mHeight;
      unsigned char* mData;
	}; // class Image
}; // namespace image
