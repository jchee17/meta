/**
 * @file practice_ranker.cpp
 * @author Jerry Chee
 */

#include "index/inverted_index.h"
#include "index/ranker/practice_ranker.h"
#include "index/score_data.h"

namespace meta
{
namespace index
{

//meta::index::register_ranker<practice_ranker>();

const std::string practice_ranker::id = "practice-ranker";

//practice_ranker::practice_ranker(); //(double s) : s_{s} 
//{
	/* nothing */
//}

double practice_ranker::score_one(const score_data& sd)
{
	double TF = 1 + log(1 + log(sd.doc_term_count));
	double IDF = log((sd.num_docs + 1) / (0.5 + sd.doc_count));

	return TF * IDF;
}

//template <>
//void meta::index::register_ranker<practice_ranker>()
//{
//}
/*
std::unique_ptr<ranker>
	make_ranker<practice_ranker>(const ccptoml::table& config)
{
	return make_unique<practice_ranker>();
}
*/
/*
{
	auto s = practice_ranker::default_s;
	if (acuto c_s = config.get_as<double>("s"))
		s = *c_s;
	return make_unique<practice_ranker>(s);
}
*/
}
}
