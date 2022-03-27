// Standard headers
#include <stdio.h>
#include <stdlib.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(
    position_t attacker_position, Spy defender_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(attacker_position);
  UNUSED(defender_spy);
  int random = rand() % 100;
  if (random >= 0 && random < 6) {
    return (direction_t) DIR_STAY;
  }
  else if (random >= 6 && random < 16) {
    return (direction_t) DIR_UP;
  }
  else if (random >= 16 && random < 18) {
    return (direction_t) DIR_UP_LEFT;
  }
  else if (random >= 18 && random < 20) {
    return (direction_t) DIR_DOWN_LEFT;
  }
  else if (random >= 20 && random < 30) {
    return (direction_t) DIR_DOWN;
  }
  else if (random >= 30 && random < 40) {
    return (direction_t) DIR_LEFT;
  }
  else if (random >= 40 && random < 50) {
    return (direction_t) DIR_RIGHT;
  }
  else if (random >= 50 && random < 75) {
    return (direction_t) DIR_UP_RIGHT;
  }
  else if (random >= 75 && random < 100) {
    return (direction_t) DIR_DOWN_RIGHT;
  }
  return (direction_t) DIR_DOWN_RIGHT;
}


/*----------------------------------------------------------------------------*/
