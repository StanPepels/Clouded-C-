#pragma once
#include<vector>

class ITileState;
class IOccupation;
struct BufferedTileData;
class IObject;
class HexagonGrid;
class D3D11Renderer;

class HexagonTile
{
public:
  HexagonTile();
  void WetnessUpdate(BufferedTileData& target_state);
  void Update( HexagonGrid* grid);
  void Draw( D3D11Renderer& gfx,const Vec2& position );
  ITileState* state;
  std::vector<IObject*> objects;
};

struct BufferedTileData
{
  float delta_wetness;
};