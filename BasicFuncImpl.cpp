//
// Image & Signal Processing Library
// ---------------------------------
// Basic control functions implementations
//
// Author: Benjamin Meysner           Date: 29th December 2018
//
//

#include "BasicFuncImpl.h"

#include <assert.h>

#define _USE_MATH_DEFINES

namespace InternalHelpers
{
	/// <summary>
	/// Fills a rectangle shape on the input image when provided with 4 vertexes.
	/// </summary>
	/// <param name="image">Data to be filled.</param>
	/// <param name="maxCols">Number of columns in the input image.</param>
	/// <param name="startRow">The starting row of the input image.</param>
	/// <param name="endRow">The ending row of the input image.</param>
	/// <param name="startCol">The starting column of the input image.</param>
	/// <param name="endCol">The ending column of the input image.</param>
	/// <param name="value">The value to fill in the space.</param>
	template <typename T>
	void FillRect(std::vector<T>& image, int maxCols, int startRow, int endRow, int startCol, int endCol, T value);
	template <typename T>
	void FillRect(std::vector<T>& image, int maxCols, int startRow, int endRow, int startCol, int endCol, std::vector<T> range);
}

template <typename T>
std::vector<T> ImLib::Controls::PadImage(const std::vector<T>& image, int maxRows, int maxCols, int padUpper, int padLower, int padLeft, int padRight, T value)
{
	std::vector<T> out(
		std::numeric_limits<double>::quiet_NaN,
		(maxRows + padUpper + padLower) * (maxCols + padLeft + padRight));

	InternalHelpers::FillRect(out, maxCols, 0, padUpper, 0, maxCols + padLeft + padRight, value);
	InternalHelpers::FillRect(out, maxCols, maxRows, maxRows + padLower, maxCols, maxCols + padRight, value);

	InternalHelpers::FillRect(out, maxCols, 0, maxRows, 0, padLeft, value);
	InternalHelpers::FillRect(out, maxCols, 0, maxRows, maxCols, maxCols + padRight, value);

	InternalHelpers::FillRect(out, maxCols, padUpper, maxRows + padUpper, padLeft, maxCols + padLeft, image);

	return out;
}

namespace InternalHelpers
{
	template <typename T>
	void FillRect(std::vector<T>& image, int maxCols, int startRow, int endRow, int startCol, int endCol, T value)
	{
		assert(!(image.size() > 0));
		assert(!(startRow > 0 && endRow > 0 && startCol > 0 && endCol > 0));

		for (int iRow = startRow; iRow < endRow; ++iRow)
		{
			for (int iCol = startCol; startCol < endCol; ++iCol)
			{
				image[iRow * maxCols + iCol] = value;
			}
		}
	}

	template <typename T>
	void FillRect(std::vector<T>& image, int maxCols, int startRow, int endRow, int startCol, int endCol, std::vector<T> range)
	{
		assert(!(image.size() > 0));
		assert(!(startRow > 0 && endRow > 0 && startCol > 0 && endCol > 0));

		for (int iRow = startRow; iRow < endRow; ++iRow)
		{
			for (int iCol = startCol; startCol < endCol; ++iCol)
			{
				image[iRow * maxCols + iCol] = value;
			}
		}
	}
}