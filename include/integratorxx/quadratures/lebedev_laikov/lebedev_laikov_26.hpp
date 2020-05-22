#pragma once

namespace IntegratorXX {
namespace LebedevLaikovGrids {

/**
 *  \brief Lebedev-Laikov Quadrature specification for Order = 26
 * 
 */
template <typename T>
struct lebedev_laikov_26 {

  static constexpr std::array<cartesian_pt_t<T>,26> points = {
      1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
     -1.000000000000000e+00,      0.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,     -1.000000000000000e+00,      0.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,      1.000000000000000e+00,
      0.000000000000000e+00,      0.000000000000000e+00,     -1.000000000000000e+00,
      0.000000000000000e+00,      7.071067811865476e-01,      7.071067811865476e-01,
      0.000000000000000e+00,     -7.071067811865476e-01,      7.071067811865476e-01,
      0.000000000000000e+00,      7.071067811865476e-01,     -7.071067811865476e-01,
      0.000000000000000e+00,     -7.071067811865476e-01,     -7.071067811865476e-01,
      7.071067811865476e-01,      0.000000000000000e+00,      7.071067811865476e-01,
     -7.071067811865476e-01,      0.000000000000000e+00,      7.071067811865476e-01,
      7.071067811865476e-01,      0.000000000000000e+00,     -7.071067811865476e-01,
     -7.071067811865476e-01,      0.000000000000000e+00,     -7.071067811865476e-01,
      7.071067811865476e-01,      7.071067811865476e-01,      0.000000000000000e+00,
     -7.071067811865476e-01,      7.071067811865476e-01,      0.000000000000000e+00,
      7.071067811865476e-01,     -7.071067811865476e-01,      0.000000000000000e+00,
     -7.071067811865476e-01,     -7.071067811865476e-01,      0.000000000000000e+00,
      5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,      5.773502691896257e-01,
      5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,      5.773502691896257e-01,     -5.773502691896257e-01,
      5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01,
     -5.773502691896257e-01,     -5.773502691896257e-01,     -5.773502691896257e-01
  };


  static constexpr std::array<T,26> weights = {
        4.761904761904762e-02,
        4.761904761904762e-02,
        4.761904761904762e-02,
        4.761904761904762e-02,
        4.761904761904762e-02,
        4.761904761904762e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.809523809523810e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02,
        3.214285714285714e-02
  };
};
};
}