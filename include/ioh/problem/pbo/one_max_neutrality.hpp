#pragma once
#include "ioh/problem/utils.hpp"
#include "pbo_problem.hpp"

namespace ioh
{
    namespace problem
    {
        namespace pbo
        {
            class OneMaxNeutrality final: public PBOProblem<OneMaxNeutrality>
            {
            protected:
                std::vector<double> evaluate(const std::vector<int> &x) override
                {
                    auto new_variables = utils::neutrality(x, 3);
                    auto result = 0.0;
                    for (size_t i = 0; i != new_variables.size(); ++i)
                        result += new_variables[i];
                    return {static_cast<double>(result)};
                }

            public:
                /**
                 * \brief Construct a new OneMax_Neutrality object. Definition refers to
                 *https://doi.org/10.1016/j.asoc.2019.106027
                 *
                 * \param instance The instance number of a problem, which controls the transformation
                 * performed on the original problem.
                 * \param n_variables The dimensionality of the problem to created, 4 by default.
                 **/
                OneMaxNeutrality(const int instance, const int n_variables) :
                    PBOProblem(6, instance, n_variables, "OneMaxNeutrality")
                {
                    objective_.x = std::vector<int>(n_variables,1);
                    objective_.y = evaluate(objective_.x);
                }
            };
        } // namespace pbo
    } // namespace problem
} // namespace ioh
