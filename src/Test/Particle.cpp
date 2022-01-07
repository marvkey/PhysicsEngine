#include "Particle.h"

namespace ProofPhysicsEngine {
	void Particle::Update(float deltaTime){
		/*
		*using one of the 5 equations of mostion to updat the postion
		* we can use more complexed equations but it would slow down performnce
		*/
		/*
		*update postion
		*/
		Position += Velocity * deltaTime;
	}
}