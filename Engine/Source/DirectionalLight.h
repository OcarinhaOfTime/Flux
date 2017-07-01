#pragma once
#ifndef DIRECTIONAL_LIGHT_H
#define DIRECTIONAL_LIGHT_H

#include "Component.h"
#include "Vector3f.h"
#include "Matrix4f.h"

namespace Flux {
    class DirectionalLight : public Component {
    public:
        DirectionalLight()
        :   energy(DEFAULT_ENERGY)
        ,   direction(0, -1, 0)
        ,   color(1, 1, 1)
        { }

        const float DEFAULT_ENERGY = 1.0f;

        float energy;
        Vector3f direction;
        Vector3f color;

        Texture* shadowMap;
        Matrix4f shadowSpace;
    };
}

#endif /* DIRECTIONAL_LIGHT_H */
