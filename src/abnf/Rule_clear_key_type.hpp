/* -----------------------------------------------------------------------------
 * Rule_clear_key_type.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_clear_key_type_hpp
#define Rule_clear_key_type_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_clear_key_type : public Rule
{
public:
  Rule_clear_key_type(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_clear_key_type(const Rule_clear_key_type& rule);

  Rule_clear_key_type& operator=(const Rule_clear_key_type& rule);

  const Rule_clear_key_type* clone(void) const;

  static const Rule_clear_key_type* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */