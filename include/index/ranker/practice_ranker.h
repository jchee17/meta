/**
 * @file practice_ranker.h
 * @author Jerry Chee
 */

#ifndef META_PRACTICE_RANKER_H_
#define META_PRACTICE_RANKER_H_

#include "index/ranker/ranker.h"
#include "index/ranker/ranker_factory.h"

namespace meta
{
namespace index
{

/**
 * practice ranker to learn how to write my own ranker and use it.
 */
class practice_ranker : public ranker
{
  public:
    /// Identifier for this ranker.
    const static std::string id;

    /// For now give same param as pivoted_length
    //const static constexpr double default_s = 0.20;

    /**
     * @param s
     */
    //practice_ranker(/*double s = default_s*/);

    /**
     * @param sd the score_data for this query
     */
    double score_one(const score_data& sd) override;

  // private:
    /// s parameter for pivoted_length normalization
    //const double s_;
};

/**
 * Specialization of the factory method used to create pivoted_length
 * rankers.
 */
//template <>
//void register_ranker<practice_ranker>();
//practice_ranker.register_ranker();
//meta::index::register_ranker<practice_ranker>();
//std::unique_ptr<ranker> make_ranker<practice_ranker>(const cpptoml::table&);
}
}
#endif
