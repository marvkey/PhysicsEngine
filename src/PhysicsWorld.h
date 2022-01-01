#pragma once
#include<vector>
#include "PhysicsObject.h"
#include "../../../Proof/src/Proof/Resources/Math/Vector.h"
#include "Collider/SphereCollider.h"
namespace ProofPhysicsEngine {
	class PhysicsWorld{
	public:
		Proof::Vector<> Gravity = { 0,-10,0 };
		PhysicsObject& AddObject(const PhysicsObject& object);
		void Simulate(float delta);
		void HandleCollisions();
	private:
		std::vector<PhysicsObject>m_Objects;
		std::vector<SphereCollider>m_SphereColliders;
	};
}

