Image & Signal Processing Library
=================================
A cross-platform, C++ based set of processing functions to smooth, blur, trim, pad and analyse image data as well other interesting data manipulations.

## Data Handling
These library functions process image data in a linear vector `<T>` as a flexible container, the construction of
a second dimension requires a user defined row count and column count. Genereally speaking,
to access index `k` we would use `k = row * max(cols) + col`. To revert from linear indexing to subscript we would have
`col = k % max(cols)` and `row = floor(k / max(cols))`.

## Basic Control Functions
1. `PadImage` - Pad an image by nRows, nCols with initial value v
2. `TrimImage` - Trim an image by nRows, nCols
3. `RotateX` - Column-wise rotation of the image
4. `RotateY` - Row-wise rotation of the image
5. `RotateXY` - A circular roation of the image

## Filters
1. `MedianFilter`
2. `MedianFilter2D`
3. `ImFilter`
4. `Convolution2D`

## Analysis
1. `HoshenKopelman` - Finds the connected components in a binary 2D Image and returns their indexes
2. `FFTransform` - Computes discrete fast fourier transform on a signal in the time domain to frequequency domain representation
3 `IFFTransform` - Computes inverse discrete fast fourier transform on a signal in the frequency domain to time domain representation
