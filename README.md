Image Processing Library
========================
A cross-platform, neat and tidy set of processing functions to smooth, blur, trim, pad and analyse image data as well other interesting manipulations.

## Data Storing
## ============
These library functions process image data in a linear vector <T> as a flexible container, the construction of
a second dimension requires a user defined row count and column count. Genereally speaking,
to access index k we would use k = row * max(cols) + col. To revert from linear indexing to subscript we would have
col = k % max(cols) and row = floor(k / max(cols)).

## Basic Control Functions
## =======================
PadImage - Pad an image by nRows, nCols with initial value v
TrimImage - Trim an image by nRows, nCols
RotateX - Column-wise rotation of the image
RotateY - Row-wise rotation of the image
RotateXY - A circular roation of the image

##Filters
## =======
MedianFilter
MedianFilter2D
ImFilter
Convolution2D

## Analysis
## ========

HoshenKopelman - Finds the connected components in a binary 2D Image and returns their indexes
