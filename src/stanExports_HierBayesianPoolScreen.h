// Generated by rstantools.  Do not edit by hand.

/*
    PoolTestR is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PoolTestR is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PoolTestR.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.21.0
#include <stan/model/model_header.hpp>
namespace model_HierBayesianPoolScreen_namespace {
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;
static int current_statement_begin__;
stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_HierBayesianPoolScreen");
    reader.add_event(80, 78, "end", "model_HierBayesianPoolScreen");
    return reader;
}
template <typename T0__, typename T1__, typename T2__, typename T3__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
logitnorm_mean_integrand(const T0__& x,
                             const T1__& xc,
                             const std::vector<T2__>& pars,
                             const std::vector<T3__>& x_r,
                             const std::vector<int>& x_i, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 3;
        local_scalar_t__ mu(DUMMY_VAR__);
        (void) mu;  // dummy to suppress unused var warning
        stan::math::initialize(mu, DUMMY_VAR__);
        stan::math::fill(mu, DUMMY_VAR__);
        stan::math::assign(mu,get_base1(pars, 1, "pars", 1));
        current_statement_begin__ = 4;
        local_scalar_t__ s(DUMMY_VAR__);
        (void) s;  // dummy to suppress unused var warning
        stan::math::initialize(s, DUMMY_VAR__);
        stan::math::fill(s, DUMMY_VAR__);
        stan::math::assign(s,get_base1(pars, 2, "pars", 1));
        current_statement_begin__ = 6;
        return stan::math::promote_scalar<fun_return_scalar_t__>((inv_logit(x) * stan::math::exp(normal_log(x, mu, s))));
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
struct logitnorm_mean_integrand_functor__ {
    template <typename T0__, typename T1__, typename T2__, typename T3__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
    operator()(const T0__& x,
                             const T1__& xc,
                             const std::vector<T2__>& pars,
                             const std::vector<T3__>& x_r,
                             const std::vector<int>& x_i, std::ostream* pstream__) const {
        return logitnorm_mean_integrand(x, xc, pars, x_r, x_i, pstream__);
    }
};
template <typename T0__, typename T1__, typename T2__, typename T3__>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
adjustment_integrand(const T0__& x,
                         const T1__& xc,
                         const std::vector<T2__>& pars,
                         const std::vector<T3__>& x_r,
                         const std::vector<int>& x_i, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 10;
        local_scalar_t__ mu(DUMMY_VAR__);
        (void) mu;  // dummy to suppress unused var warning
        stan::math::initialize(mu, DUMMY_VAR__);
        stan::math::fill(mu, DUMMY_VAR__);
        stan::math::assign(mu,get_base1(pars, 1, "pars", 1));
        current_statement_begin__ = 11;
        local_scalar_t__ s(DUMMY_VAR__);
        (void) s;  // dummy to suppress unused var warning
        stan::math::initialize(s, DUMMY_VAR__);
        stan::math::fill(s, DUMMY_VAR__);
        stan::math::assign(s,get_base1(pars, 2, "pars", 1));
        current_statement_begin__ = 12;
        return stan::math::promote_scalar<fun_return_scalar_t__>(((logitnorm_mean_integrand(x, xc, pars, x_r, x_i, pstream__) * (x - mu)) / pow(s, 2)));
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}
struct adjustment_integrand_functor__ {
    template <typename T0__, typename T1__, typename T2__, typename T3__>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
    operator()(const T0__& x,
                         const T1__& xc,
                         const std::vector<T2__>& pars,
                         const std::vector<T3__>& x_r,
                         const std::vector<int>& x_i, std::ostream* pstream__) const {
        return adjustment_integrand(x, xc, pars, x_r, x_i, pstream__);
    }
};
#include <stan_meta_header.hpp>
class model_HierBayesianPoolScreen
  : public stan::model::model_base_crtp<model_HierBayesianPoolScreen> {
private:
        int N;
        int L;
        std::vector<int> NumGroups;
        int TotalGroups;
        std::vector<int> Result;
        vector_d PoolSize;
        matrix_d Z;
        double PriorAlpha;
        double PriorBeta;
        double HyperpriorSD;
        std::vector<int> FlippedResult;
        vector_d Zw;
        std::vector<int> Zv;
        std::vector<int> Zu;
        std::vector<double> x_r;
        std::vector<int> x_i;
public:
    model_HierBayesianPoolScreen(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, 0, pstream__);
    }
    model_HierBayesianPoolScreen(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : model_base_crtp(0) {
        ctor_body(context__, random_seed__, pstream__);
    }
    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning
        current_statement_begin__ = -1;
        static const char* function__ = "model_HierBayesianPoolScreen_namespace::model_HierBayesianPoolScreen";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        try {
            // initialize data block variables from context__
            current_statement_begin__ = 17;
            context__.validate_dims("data initialization", "N", "int", context__.to_vec());
            N = int(0);
            vals_i__ = context__.vals_i("N");
            pos__ = 0;
            N = vals_i__[pos__++];
            check_greater_or_equal(function__, "N", N, 1);
            current_statement_begin__ = 18;
            context__.validate_dims("data initialization", "L", "int", context__.to_vec());
            L = int(0);
            vals_i__ = context__.vals_i("L");
            pos__ = 0;
            L = vals_i__[pos__++];
            check_greater_or_equal(function__, "L", L, 1);
            current_statement_begin__ = 19;
            validate_non_negative_index("NumGroups", "L", L);
            context__.validate_dims("data initialization", "NumGroups", "int", context__.to_vec(L));
            NumGroups = std::vector<int>(L, int(0));
            vals_i__ = context__.vals_i("NumGroups");
            pos__ = 0;
            size_t NumGroups_k_0_max__ = L;
            for (size_t k_0__ = 0; k_0__ < NumGroups_k_0_max__; ++k_0__) {
                NumGroups[k_0__] = vals_i__[pos__++];
            }
            size_t NumGroups_i_0_max__ = L;
            for (size_t i_0__ = 0; i_0__ < NumGroups_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "NumGroups[i_0__]", NumGroups[i_0__], 1);
            }
            current_statement_begin__ = 20;
            context__.validate_dims("data initialization", "TotalGroups", "int", context__.to_vec());
            TotalGroups = int(0);
            vals_i__ = context__.vals_i("TotalGroups");
            pos__ = 0;
            TotalGroups = vals_i__[pos__++];
            check_greater_or_equal(function__, "TotalGroups", TotalGroups, L);
            current_statement_begin__ = 21;
            validate_non_negative_index("Result", "N", N);
            context__.validate_dims("data initialization", "Result", "int", context__.to_vec(N));
            Result = std::vector<int>(N, int(0));
            vals_i__ = context__.vals_i("Result");
            pos__ = 0;
            size_t Result_k_0_max__ = N;
            for (size_t k_0__ = 0; k_0__ < Result_k_0_max__; ++k_0__) {
                Result[k_0__] = vals_i__[pos__++];
            }
            size_t Result_i_0_max__ = N;
            for (size_t i_0__ = 0; i_0__ < Result_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "Result[i_0__]", Result[i_0__], 0);
                check_less_or_equal(function__, "Result[i_0__]", Result[i_0__], 1);
            }
            current_statement_begin__ = 22;
            validate_non_negative_index("PoolSize", "N", N);
            context__.validate_dims("data initialization", "PoolSize", "vector_d", context__.to_vec(N));
            PoolSize = Eigen::Matrix<double, Eigen::Dynamic, 1>(N);
            vals_r__ = context__.vals_r("PoolSize");
            pos__ = 0;
            size_t PoolSize_j_1_max__ = N;
            for (size_t j_1__ = 0; j_1__ < PoolSize_j_1_max__; ++j_1__) {
                PoolSize(j_1__) = vals_r__[pos__++];
            }
            check_greater_or_equal(function__, "PoolSize", PoolSize, 0);
            current_statement_begin__ = 24;
            validate_non_negative_index("Z", "N", N);
            validate_non_negative_index("Z", "TotalGroups", TotalGroups);
            context__.validate_dims("data initialization", "Z", "matrix_d", context__.to_vec(N,TotalGroups));
            Z = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic>(N, TotalGroups);
            vals_r__ = context__.vals_r("Z");
            pos__ = 0;
            size_t Z_j_2_max__ = TotalGroups;
            size_t Z_j_1_max__ = N;
            for (size_t j_2__ = 0; j_2__ < Z_j_2_max__; ++j_2__) {
                for (size_t j_1__ = 0; j_1__ < Z_j_1_max__; ++j_1__) {
                    Z(j_1__, j_2__) = vals_r__[pos__++];
                }
            }
            check_greater_or_equal(function__, "Z", Z, 0);
            check_less_or_equal(function__, "Z", Z, 1);
            current_statement_begin__ = 25;
            context__.validate_dims("data initialization", "PriorAlpha", "double", context__.to_vec());
            PriorAlpha = double(0);
            vals_r__ = context__.vals_r("PriorAlpha");
            pos__ = 0;
            PriorAlpha = vals_r__[pos__++];
            check_greater_or_equal(function__, "PriorAlpha", PriorAlpha, 0);
            current_statement_begin__ = 26;
            context__.validate_dims("data initialization", "PriorBeta", "double", context__.to_vec());
            PriorBeta = double(0);
            vals_r__ = context__.vals_r("PriorBeta");
            pos__ = 0;
            PriorBeta = vals_r__[pos__++];
            check_greater_or_equal(function__, "PriorBeta", PriorBeta, 0);
            current_statement_begin__ = 27;
            context__.validate_dims("data initialization", "HyperpriorSD", "double", context__.to_vec());
            HyperpriorSD = double(0);
            vals_r__ = context__.vals_r("HyperpriorSD");
            pos__ = 0;
            HyperpriorSD = vals_r__[pos__++];
            check_greater_or_equal(function__, "HyperpriorSD", HyperpriorSD, 0);
            // initialize transformed data variables
            current_statement_begin__ = 30;
            validate_non_negative_index("FlippedResult", "N", N);
            FlippedResult = std::vector<int>(N, int(0));
            stan::math::fill(FlippedResult, std::numeric_limits<int>::min());
            current_statement_begin__ = 32;
            validate_non_negative_index("Zw", "(L * N)", (L * N));
            Zw = Eigen::Matrix<double, Eigen::Dynamic, 1>((L * N));
            stan::math::fill(Zw, DUMMY_VAR__);
            current_statement_begin__ = 33;
            validate_non_negative_index("Zv", "(L * N)", (L * N));
            Zv = std::vector<int>((L * N), int(0));
            stan::math::fill(Zv, std::numeric_limits<int>::min());
            current_statement_begin__ = 34;
            validate_non_negative_index("Zu", "(N + 1)", (N + 1));
            Zu = std::vector<int>((N + 1), int(0));
            stan::math::fill(Zu, std::numeric_limits<int>::min());
            current_statement_begin__ = 35;
            validate_non_negative_index("x_r", "0", 0);
            x_r = std::vector<double>(0, double(0));
            stan::math::fill(x_r, DUMMY_VAR__);
            current_statement_begin__ = 36;
            validate_non_negative_index("x_i", "0", 0);
            x_i = std::vector<int>(0, int(0));
            stan::math::fill(x_i, std::numeric_limits<int>::min());
            // execute transformed data statements
            current_statement_begin__ = 37;
            stan::math::assign(Zw, csr_extract_w(Z));
            current_statement_begin__ = 38;
            stan::math::assign(Zv, csr_extract_v(Z));
            current_statement_begin__ = 39;
            stan::math::assign(Zu, csr_extract_u(Z));
            current_statement_begin__ = 41;
            for (int n = 1; n <= N; ++n) {
                current_statement_begin__ = 42;
                stan::model::assign(FlippedResult, 
                            stan::model::cons_list(stan::model::index_uni(n), stan::model::nil_index_list()), 
                            (1 - get_base1(Result, n, "Result", 1)), 
                            "assigning variable FlippedResult");
            }
            // validate transformed data
            current_statement_begin__ = 30;
            size_t FlippedResult_i_0_max__ = N;
            for (size_t i_0__ = 0; i_0__ < FlippedResult_i_0_max__; ++i_0__) {
                check_greater_or_equal(function__, "FlippedResult[i_0__]", FlippedResult[i_0__], 0);
                check_less_or_equal(function__, "FlippedResult[i_0__]", FlippedResult[i_0__], 1);
            }
            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 46;
            num_params_r__ += 1;
            current_statement_begin__ = 47;
            validate_non_negative_index("u", "TotalGroups", TotalGroups);
            num_params_r__ += TotalGroups;
            current_statement_begin__ = 48;
            validate_non_negative_index("group_sd", "L", L);
            num_params_r__ += L;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    ~model_HierBayesianPoolScreen() { }
    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;
        current_statement_begin__ = 46;
        if (!(context__.contains_r("mu")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable mu missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("mu");
        pos__ = 0U;
        context__.validate_dims("parameter initialization", "mu", "double", context__.to_vec());
        double mu(0);
        mu = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(mu);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable mu: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 47;
        if (!(context__.contains_r("u")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable u missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("u");
        pos__ = 0U;
        validate_non_negative_index("u", "TotalGroups", TotalGroups);
        context__.validate_dims("parameter initialization", "u", "vector_d", context__.to_vec(TotalGroups));
        Eigen::Matrix<double, Eigen::Dynamic, 1> u(TotalGroups);
        size_t u_j_1_max__ = TotalGroups;
        for (size_t j_1__ = 0; j_1__ < u_j_1_max__; ++j_1__) {
            u(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_unconstrain(u);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable u: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        current_statement_begin__ = 48;
        if (!(context__.contains_r("group_sd")))
            stan::lang::rethrow_located(std::runtime_error(std::string("Variable group_sd missing")), current_statement_begin__, prog_reader__());
        vals_r__ = context__.vals_r("group_sd");
        pos__ = 0U;
        validate_non_negative_index("group_sd", "L", L);
        context__.validate_dims("parameter initialization", "group_sd", "vector_d", context__.to_vec(L));
        Eigen::Matrix<double, Eigen::Dynamic, 1> group_sd(L);
        size_t group_sd_j_1_max__ = L;
        for (size_t j_1__ = 0; j_1__ < group_sd_j_1_max__; ++j_1__) {
            group_sd(j_1__) = vals_r__[pos__++];
        }
        try {
            writer__.vector_lb_unconstrain(0, group_sd);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(std::runtime_error(std::string("Error transforming variable group_sd: ") + e.what()), current_statement_begin__, prog_reader__());
        }
        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }
    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }
    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {
        typedef T__ local_scalar_t__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning
        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
            // model parameters
            current_statement_begin__ = 46;
            local_scalar_t__ mu;
            (void) mu;  // dummy to suppress unused var warning
            if (jacobian__)
                mu = in__.scalar_constrain(lp__);
            else
                mu = in__.scalar_constrain();
            current_statement_begin__ = 47;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> u;
            (void) u;  // dummy to suppress unused var warning
            if (jacobian__)
                u = in__.vector_constrain(TotalGroups, lp__);
            else
                u = in__.vector_constrain(TotalGroups);
            current_statement_begin__ = 48;
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> group_sd;
            (void) group_sd;  // dummy to suppress unused var warning
            if (jacobian__)
                group_sd = in__.vector_lb_constrain(0, L, lp__);
            else
                group_sd = in__.vector_lb_constrain(0, L);
            // transformed parameters
            current_statement_begin__ = 51;
            local_scalar_t__ p;
            (void) p;  // dummy to suppress unused var warning
            stan::math::initialize(p, DUMMY_VAR__);
            stan::math::fill(p, DUMMY_VAR__);
            current_statement_begin__ = 52;
            validate_non_negative_index("logistic_pars", "2", 2);
            std::vector<local_scalar_t__> logistic_pars(2, local_scalar_t__(0));
            stan::math::initialize(logistic_pars, DUMMY_VAR__);
            stan::math::fill(logistic_pars, DUMMY_VAR__);
            // transformed parameters block statements
            current_statement_begin__ = 53;
            stan::model::assign(logistic_pars, 
                        stan::model::cons_list(stan::model::index_uni(1), stan::model::nil_index_list()), 
                        mu, 
                        "assigning variable logistic_pars");
            current_statement_begin__ = 54;
            stan::model::assign(logistic_pars, 
                        stan::model::cons_list(stan::model::index_uni(2), stan::model::nil_index_list()), 
                        stan::math::sqrt(dot_self(group_sd)), 
                        "assigning variable logistic_pars");
            current_statement_begin__ = 55;
            stan::math::assign(p, integrate_1d(logitnorm_mean_integrand_functor__(), stan::math::negative_infinity(), stan::math::positive_infinity(), logistic_pars, x_r, x_i, *pstream__, 1e-8));
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning
            current_statement_begin__ = 51;
            if (stan::math::is_uninitialized(p)) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: p";
                stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable p: ") + msg__.str()), current_statement_begin__, prog_reader__());
            }
            check_greater_or_equal(function__, "p", p, 0);
            check_less_or_equal(function__, "p", p, 1);
            current_statement_begin__ = 52;
            size_t logistic_pars_k_0_max__ = 2;
            for (size_t k_0__ = 0; k_0__ < logistic_pars_k_0_max__; ++k_0__) {
                if (stan::math::is_uninitialized(logistic_pars[k_0__])) {
                    std::stringstream msg__;
                    msg__ << "Undefined transformed parameter: logistic_pars" << "[" << k_0__ << "]";
                    stan::lang::rethrow_located(std::runtime_error(std::string("Error initializing variable logistic_pars: ") + msg__.str()), current_statement_begin__, prog_reader__());
                }
            }
            // model body
            {
            current_statement_begin__ = 58;
            int k(0);
            (void) k;  // dummy to suppress unused var warning
            stan::math::fill(k, std::numeric_limits<int>::min());
            current_statement_begin__ = 59;
            validate_non_negative_index("ps", "N", N);
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> ps(N);
            stan::math::initialize(ps, DUMMY_VAR__);
            stan::math::fill(ps, DUMMY_VAR__);
            current_statement_begin__ = 60;
            validate_non_negative_index("au", "TotalGroups", TotalGroups);
            Eigen::Matrix<local_scalar_t__, Eigen::Dynamic, 1> au(TotalGroups);
            stan::math::initialize(au, DUMMY_VAR__);
            stan::math::fill(au, DUMMY_VAR__);
            current_statement_begin__ = 61;
            stan::math::assign(k, 1);
            current_statement_begin__ = 62;
            for (int l = 1; l <= L; ++l) {
                current_statement_begin__ = 63;
                stan::model::assign(au, 
                            stan::model::cons_list(stan::model::index_min_max(k, ((k + get_base1(NumGroups, l, "NumGroups", 1)) - 1)), stan::model::nil_index_list()), 
                            multiply(stan::model::rvalue(u, stan::model::cons_list(stan::model::index_min_max(k, ((k + get_base1(NumGroups, l, "NumGroups", 1)) - 1)), stan::model::nil_index_list()), "u"), get_base1(group_sd, l, "group_sd", 1)), 
                            "assigning variable au");
                current_statement_begin__ = 64;
                stan::math::assign(k, (k + get_base1(NumGroups, l, "NumGroups", 1)));
            }
            current_statement_begin__ = 71;
            stan::math::assign(ps, stan::math::exp(elt_multiply(log1m_inv_logit(add(mu, csr_matrix_times_vector(N, TotalGroups, Zw, Zv, Zu, au))), PoolSize)));
            current_statement_begin__ = 72;
            lp_accum__.add(normal_log<propto__>(u, 0, 1));
            current_statement_begin__ = 73;
            lp_accum__.add(cauchy_log<propto__>(group_sd, 0, HyperpriorSD));
            current_statement_begin__ = 74;
            lp_accum__.add(beta_log<propto__>(p, PriorAlpha, PriorBeta));
            current_statement_begin__ = 75;
            lp_accum__.add(bernoulli_log<propto__>(FlippedResult, ps));
            current_statement_begin__ = 77;
            lp_accum__.add(stan::math::log(integrate_1d(adjustment_integrand_functor__(), stan::math::negative_infinity(), stan::math::positive_infinity(), logistic_pars, x_r, x_i, *pstream__, 1e-8)));
            }
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
        lp_accum__.add(lp__);
        return lp_accum__.sum();
    } // log_prob()
    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }
    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("mu");
        names__.push_back("u");
        names__.push_back("group_sd");
        names__.push_back("p");
        names__.push_back("logistic_pars");
    }
    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(TotalGroups);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(L);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(2);
        dimss__.push_back(dims__);
    }
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;
        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_HierBayesianPoolScreen_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double mu = in__.scalar_constrain();
        vars__.push_back(mu);
        Eigen::Matrix<double, Eigen::Dynamic, 1> u = in__.vector_constrain(TotalGroups);
        size_t u_j_1_max__ = TotalGroups;
        for (size_t j_1__ = 0; j_1__ < u_j_1_max__; ++j_1__) {
            vars__.push_back(u(j_1__));
        }
        Eigen::Matrix<double, Eigen::Dynamic, 1> group_sd = in__.vector_lb_constrain(0, L);
        size_t group_sd_j_1_max__ = L;
        for (size_t j_1__ = 0; j_1__ < group_sd_j_1_max__; ++j_1__) {
            vars__.push_back(group_sd(j_1__));
        }
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning
        if (!include_tparams__ && !include_gqs__) return;
        try {
            // declare and define transformed parameters
            current_statement_begin__ = 51;
            double p;
            (void) p;  // dummy to suppress unused var warning
            stan::math::initialize(p, DUMMY_VAR__);
            stan::math::fill(p, DUMMY_VAR__);
            current_statement_begin__ = 52;
            validate_non_negative_index("logistic_pars", "2", 2);
            std::vector<double> logistic_pars(2, double(0));
            stan::math::initialize(logistic_pars, DUMMY_VAR__);
            stan::math::fill(logistic_pars, DUMMY_VAR__);
            // do transformed parameters statements
            current_statement_begin__ = 53;
            stan::model::assign(logistic_pars, 
                        stan::model::cons_list(stan::model::index_uni(1), stan::model::nil_index_list()), 
                        mu, 
                        "assigning variable logistic_pars");
            current_statement_begin__ = 54;
            stan::model::assign(logistic_pars, 
                        stan::model::cons_list(stan::model::index_uni(2), stan::model::nil_index_list()), 
                        stan::math::sqrt(dot_self(group_sd)), 
                        "assigning variable logistic_pars");
            current_statement_begin__ = 55;
            stan::math::assign(p, integrate_1d(logitnorm_mean_integrand_functor__(), stan::math::negative_infinity(), stan::math::positive_infinity(), logistic_pars, x_r, x_i, *pstream__, 1e-8));
            if (!include_gqs__ && !include_tparams__) return;
            // validate transformed parameters
            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning
            current_statement_begin__ = 51;
            check_greater_or_equal(function__, "p", p, 0);
            check_less_or_equal(function__, "p", p, 1);
            // write transformed parameters
            if (include_tparams__) {
                vars__.push_back(p);
                size_t logistic_pars_k_0_max__ = 2;
                for (size_t k_0__ = 0; k_0__ < logistic_pars_k_0_max__; ++k_0__) {
                    vars__.push_back(logistic_pars[k_0__]);
                }
            }
            if (!include_gqs__) return;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }
    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }
    std::string model_name() const {
        return "model_HierBayesianPoolScreen";
    }
    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
        size_t u_j_1_max__ = TotalGroups;
        for (size_t j_1__ = 0; j_1__ < u_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "u" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        size_t group_sd_j_1_max__ = L;
        for (size_t j_1__ = 0; j_1__ < group_sd_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "group_sd" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "p";
            param_names__.push_back(param_name_stream__.str());
            size_t logistic_pars_k_0_max__ = 2;
            for (size_t k_0__ = 0; k_0__ < logistic_pars_k_0_max__; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "logistic_pars" << '.' << k_0__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }
        if (!include_gqs__) return;
    }
    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "mu";
        param_names__.push_back(param_name_stream__.str());
        size_t u_j_1_max__ = TotalGroups;
        for (size_t j_1__ = 0; j_1__ < u_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "u" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        size_t group_sd_j_1_max__ = L;
        for (size_t j_1__ = 0; j_1__ < group_sd_j_1_max__; ++j_1__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "group_sd" << '.' << j_1__ + 1;
            param_names__.push_back(param_name_stream__.str());
        }
        if (!include_gqs__ && !include_tparams__) return;
        if (include_tparams__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "p";
            param_names__.push_back(param_name_stream__.str());
            size_t logistic_pars_k_0_max__ = 2;
            for (size_t k_0__ = 0; k_0__ < logistic_pars_k_0_max__; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "logistic_pars" << '.' << k_0__ + 1;
                param_names__.push_back(param_name_stream__.str());
            }
        }
        if (!include_gqs__) return;
    }
}; // model
}  // namespace
typedef model_HierBayesianPoolScreen_namespace::model_HierBayesianPoolScreen stan_model;
#ifndef USING_R
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
#endif
#endif
