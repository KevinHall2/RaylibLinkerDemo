#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	~Player();

	void TakeDamage(float damage) override;
	void Heal(float health);
	void AddXP(float amount);
	void PrintStats();

	float GetXP() const{ return m_xp; }

private:

	float m_xp;

};