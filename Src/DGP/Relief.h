#pragma once
#include "PointCloud3D.h"
#include "Mesh3D.h"
#include <vector>

namespace MagicDGP
{
    class ReliefGeneration
    {
    public:
        ReliefGeneration();
        static LightMesh3D* PlaneReliefFromHeightField(std::vector<Real>& heightField, int resX, int resY);
        static LightMesh3D* CylinderReliefFromHeightField(std::vector<Real>& heightField, int resX, int resY);
        ~ReliefGeneration();

    private:
        static void CompressHeightField(std::vector<Real>& heightField, int resX, int resY);

    };

}