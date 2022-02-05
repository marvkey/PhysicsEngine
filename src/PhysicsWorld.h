#pragma once
#include<vector>
#include "PhysicsObject.h"
#include "../../../Proof/src/Proof/Resources/Math/Vector.h"
#include "Collider/SphereCollider.h"
#include "Collider/CubeCollider.h"
#include "Body/RigidBody.h"
#include "Forces/Gravity.h"
namespace ProofPhysicsEngine {
	/**
	* Holds a single rigid body in a linked list of bodies.
	*/
	struct BodyRegistration {
		RigidBody body;
		BodyRegistration* next;
	};

	class PhysicsWorld{
	public:
		GravityForce GravityData;
		Proof::Vector<> Gravity = { 0,-10,0 };
		PhysicsObject& AddObject(const PhysicsObject& object);
		void Simulate(float delta);
		void HandleCollisions();
	private:
		/**
		* Holds the head of the list of registered bodies.
		*/
		BodyRegistration* m_FirstBody;
		std::vector<PhysicsObject>m_Objects;
		std::list<SphereCollider>m_SphereColliders;
		std::list<CubeCollider>m_CubeColliders;
	};
}

