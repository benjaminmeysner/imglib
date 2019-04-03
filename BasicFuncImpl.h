//
// Image & Signal processing routines
// Contains the implementation of basic controls
//
// Author: Benjamin Meysner           Date: 29th December 2018
//
//

#pragma once

#include "stdafx.h"

namespace ImLib
{
	namespace Controls
	{
		/// <summary>
		/// Equivalent of Matlab's padarray for padding the input and different edges with an initial value.
		/// Extends the size of the input matrix on different sides with T value, if T has not been provided then
		/// it replicates the values on the boundaries as per Matlab's 'replicate' parameter.
		/// </summary>
		/// <param name="image">Data to be padded outwards.</param>
		/// <param name="maxRows">Number of rows in the input image</param>
		/// <param name="maxCols">Number of columns in the input image.</param>
		/// <param name="padUpper">The number of rows to add to the upper edge of the input image.</param>
		/// <param name="padLower">The number of columns to add to the lower edge of the input image.</param>
		/// <param name="padLeft">The number of columns to add to the left edge of the input image.</param>
		/// <param name="padRight">The number of columns to add to the right edge of the input image.</param>
		/// <param name="value">The value for the new pixels to be set to.</param>
		template <typename T>
		std::vector<T> PadImage(const std::vector<T>& image, int maxRows, int maxCols, int padUpper, int padLower, int padLeft, int padRight, T value);
		template std::vector<float> PadImage(const std::vector<float>& image, int maxRows, int maxCols, int padUpper, int padLower, int padLeft, int padRight, float value);
		template std::vector<double> PadImage(const std::vector<double>& image, int maxRows, int maxCols, int padUpper, int padLower, int padLeft, int padRight, double value);
	};
};