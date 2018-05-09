#pragma once
#include "ITileState.h"
class SwampState : public ITileState
{
public:
  SwampState(float wetness);
  ITileState* Update( HexagonGrid* grid, HexagonTile* tile ) override;
  virtual float CalculateWaterTransition(ITileState * other) override;
  
  static float up_threshold_;
  static float down_threshold_;
};