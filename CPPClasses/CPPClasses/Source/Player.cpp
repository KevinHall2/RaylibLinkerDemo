#include "Player.h"
#include <iostream>

Player::Player() 
	: m_xp(0)
{}

Player::~Player() 
{

}

void Player::TakeDamage(float damage) 
{
	if (damage <= 0) return;

	SetHealth(GetHealth() - damage);
	if (GetHealth() < 0)
		SetHealth(0);
}

void Player::Heal(float health)
{
	if (health <= 0) return;

	SetHealth(GetHealth()+health);

}

void Player::AddXP(float amount)
{
	if (amount <= 0) return;

	m_xp += amount;
	while (m_xp >= 100) 
	{
		m_xp -= 100;
		SetLevel(GetLevel() +1);
	}
}

void Player::PrintStats()
{
	std::cout << "Name: " << GetName() <<"\n";
	std::cout << "Health: " << GetHealth() <<"\n";
	std::cout << "XP: " << m_xp <<"\n";
	std::cout << "Level: " << GetLevel() << std::endl;
}
