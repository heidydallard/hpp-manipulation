// Copyright (c) 2014, LAAS-CNRS
// Authors: Joseph Mirabel (joseph.mirabel@laas.fr)
//
// This file is part of hpp-manipulation.
// hpp-manipulation is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// hpp-manipulation is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Lesser Public License for more details.  You should have
// received a copy of the GNU Lesser General Public License along with
// hpp-manipulation. If not, see <http://www.gnu.org/licenses/>.

#ifndef HPP_MANIPULATION_GRAPH_FWD_HH
# define HPP_MANIPULATION_GRAPH_FWD_HH

#include <hpp/util/pointer.hh>
#include <vector>

namespace hpp {
  namespace manipulation {
    namespace graph {
      HPP_PREDEF_CLASS (Graph);
      HPP_PREDEF_CLASS (Node);
      HPP_PREDEF_CLASS (Edge);
      HPP_PREDEF_CLASS (NodeSelector);
      typedef boost::shared_ptr < Graph > GraphPtr_t;
      typedef boost::shared_ptr < Node > NodePtr_t;
      typedef boost::shared_ptr < Edge > EdgePtr_t;
      typedef boost::shared_ptr < NodeSelector > NodeSelectorPtr_t;
      typedef std::vector < NodePtr_t > Nodes_t;
      typedef std::vector < EdgePtr_t > Edges_t;
      typedef std::vector < NodeSelectorPtr_t > NodeSelectors_t;

      typedef hpp::core::ConstraintSet ConstraintSet_t;
      typedef hpp::core::ConstraintSetPtr_t ConstraintSetPtr_t;
      typedef hpp::core::ConfigProjectorPtr_t ConfigProjectorPtr_t;
    } // namespace graph
  } // namespace manipulation
} // namespace hpp

#endif // HPP_MANIPULATION_GRAPH_FWD_HH
