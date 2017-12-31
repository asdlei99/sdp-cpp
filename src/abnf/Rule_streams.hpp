/* -----------------------------------------------------------------------------
 * Rule_streams.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_streams_hpp
#define Rule_streams_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_streams : public Rule
{
public:
  Rule_streams(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_streams(const Rule_streams& rule);

  Rule_streams& operator=(const Rule_streams& rule);

  const Rule_streams* clone(void) const;

  static const Rule_streams* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */