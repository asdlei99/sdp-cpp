/* -----------------------------------------------------------------------------
 * Rule_origin_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_origin_field_hpp
#define Rule_origin_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_origin_field : public Rule
{
public:
  Rule_origin_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_origin_field(const Rule_origin_field& rule);

  Rule_origin_field& operator=(const Rule_origin_field& rule);

  const Rule_origin_field* clone(void) const;

  static const Rule_origin_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */