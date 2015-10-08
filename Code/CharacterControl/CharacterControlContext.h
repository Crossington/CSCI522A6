#ifndef _CHARACTER_CONTROL_CONTEXT_H_
#define _CHARACTER_CONTROL_CONTEXT_H_

#include "PrimeEngine/Utils/PEClassDecl.h"

namespace CharacterControl {
	namespace Components{
		struct GameObjectManagerAddon;
		struct TankGameControls;
		struct SpaceShipGameControls;
        struct A6cControls;
	};

	struct CharacterControlContext : PE::PEAllocatableAndDefragmentable
	{
		Components::GameObjectManagerAddon *getGameObjectManagerAddon(){return m_pGameObjectManagerAddon;}
		Components::TankGameControls *getTankGameControls(){return m_pTankGameControls;}
		Components::SpaceShipGameControls *getSpaceShipGameControls(){return m_pSpaceShipGameControls;}
        Components::A6cControls *getA6cControls(){ return m_pA6cControls; }
		Components::GameObjectManagerAddon *m_pGameObjectManagerAddon;
		Components::TankGameControls *m_pTankGameControls;
		Components::SpaceShipGameControls *m_pSpaceShipGameControls;
        Components::A6cControls *m_pA6cControls;
	};

}; // namespace CharacterControl

#endif

