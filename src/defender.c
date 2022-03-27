// Standard headers
#include <stdio.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(defender_position);
  UNUSED(attacker_spy);
  int random = rand() % 100;
  if (random >= 0 && random < 20) {
    return (direction_t) DIR_STAY;
  }
  else if (random >= 20 && random < 40) {
    return (direction_t) DIR_UP;
  }
  else if (random >= 40 && random < 60) {
    return (direction_t) DIR_DOWN;
  }
  else if (random >= 60 && random < 66) {
    return (direction_t) DIR_UP_LEFT;
  }
  else if (random >= 66 && random < 72) {
    return (direction_t) DIR_DOWN_LEFT;
  }
  else if (random >= 72 && random < 78) {
    return (direction_t) DIR_LEFT;
  }
  else if (random >= 78 && random < 84) {
    return (direction_t) DIR_RIGHT;
  }
  else if (random >= 84 && random < 90) {
    return (direction_t) DIR_UP_RIGHT;
  }
  else if (random >= 90 && random < 100) {
    return (direction_t) DIR_DOWN_RIGHT;
  }
  return (direction_t) DIR_LEFT;
}

/*----------------------------------------------------------------------------*/
