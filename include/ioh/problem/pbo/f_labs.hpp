/// \file f_labs.hpp
/// \brief cpp file for class f_labs.
///
/// A detailed file description.
///
/// \author Furong Ye
/// \date 2019-06-27
#pragma once
#include "pbo_base.hpp"

namespace ioh
{
    namespace problem
    {
        namespace pbo
        {
            class LABS : public pbo_base
            {
            public:
                LABS(int instance_id = DEFAULT_INSTANCE, int dimension = DEFAULT_DIMENSION)
                    : pbo_base("LABS", instance_id)
                {
                    set_number_of_variables(dimension);
                }
                double correlation(const std::vector<int> x, const int n, int k)
                {
                    int x1, x2;
                    double result;
                    result = 0.0;
                    for (auto i = 0; i < n - k; ++i) {
                        if (x[i] == 0) {
                            x1 = -1;
                        }
                        else {
                            x1 = 1;
                        }
                        if (x[i + k] == 0) {
                            x2 = -1;
                        }
                        else {
                            x2 = 1;
                        }
                        result += x1 * x2;
                    }
                    return result;
                }

                double internal_evaluate(const std::vector<int>& x) {
	                auto n = x.size();
                    double result = 0.0, cor;
                    for (auto k = 1; k != n; ++k) {
                        cor = correlation(x, static_cast<int>(n), k);
                        result += cor * cor;
                    }
                    result = (double)(n * n) / 2.0 / result;
                    return (double)result;
                }

                static LABS* createInstance(int instance_id = DEFAULT_INSTANCE, int dimension = DEFAULT_DIMENSION) {
                    return new LABS(instance_id, dimension);
                }
            };
        }
    }
}
