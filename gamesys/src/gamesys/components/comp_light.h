#ifndef DM_GAMESYS_COMP_LIGHT_H
#define DM_GAMESYS_COMP_LIGHT_H

#include <dlib/array.h>
#include <gameobject/gameobject.h>
#include "gamesys_ddf.h"

namespace dmGameSystem
{
    struct Light
    {
        dmGameObject::HInstance      m_Instance;
        dmGameSystemDDF::LightDesc** m_LightResource;
        Light(dmGameObject::HInstance instance, dmGameSystemDDF::LightDesc** light_resource)
        {
            m_Instance = instance;
            m_LightResource = light_resource;
        }
    };

    struct LightWorld
    {
        dmArray<Light*> m_Lights;
    };

    dmGameObject::CreateResult CompLightNewWorld(const dmGameObject::ComponentNewWorldParams& params);

    dmGameObject::CreateResult CompLightDeleteWorld(const dmGameObject::ComponentDeleteWorldParams& params);

    dmGameObject::CreateResult CompLightCreate(const dmGameObject::ComponentCreateParams& params);

    dmGameObject::CreateResult CompLightDestroy(const dmGameObject::ComponentDestroyParams& params);

    dmGameObject::UpdateResult CompLightUpdate(const dmGameObject::ComponentsUpdateParams& params);

    dmGameObject::UpdateResult CompLightOnMessage(const dmGameObject::ComponentOnMessageParams& params);
}

#endif
