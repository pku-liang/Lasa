/*******************************************************************************
* Copyright 2021 Intel Corporation
*
* Licensed under the BSD-2-Clause Plus Patent License (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* https://opensource.org/licenses/BSDplusPatent
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: BSD-2-Clause-Patent
*******************************************************************************/
#ifndef T2S_COMPUTE_LOOP_BOUNDS_H
#define T2S_COMPUTE_LOOP_BOUNDS_H

/** \file
 *
 * Defines functions that used by calculating the loop bounds
 */

#include <map>

#include "../../Halide/src/IRVisitor.h"
#include "../../Halide/src/Interval.h"

namespace Halide {
namespace Internal {

typedef std::map<std::string, Interval> LoopBounds;

/** Compute the maximum and minimum possible value for each for loop. */
LoopBounds compute_global_loop_bounds(const Stmt &);

}  // namespace Internal
}  // namespace Halide

#endif
