#pragma once
#include "Material.h"
#include "Vertex.h"
#include "Core/Transform.h"
#include <vector>

namespace resources
{
  class Mesh
  {
  public:
    Mesh(
      const std::vector<unsigned short>& indices,
      const std::vector<Vertex>& vertices,
      const Material& material,
      const Transform& l2w);

    const std::vector<unsigned short>& indices() const
    {
      return indices_;
    }
    const std::vector<Vertex>& vertices() const
    {
      return vertices_;
    }

    Material material() const
    {
      return material_;
    }
  private:
    std::vector<unsigned short> indices_;
    std::vector<Vertex> vertices_;
    Material material_;
    Transform l2w_;
  };
}