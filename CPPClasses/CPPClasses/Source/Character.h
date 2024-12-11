#pragma once


class Character 
{
protected:
    Character() = default;
public:
	
	~Character() = default;

	virtual void TakeDamage(float damage) {}
	//the "= 0" makes this function required to be overwritten, because it is now null
	virtual void PrintStats() = 0;

	const char* GetName() const { return m_name; }
	void SetName(const char* name) { m_name = name; }
	float GetHealth() const { return m_health; }
	int GetLevel() const { return m_level; }

protected:
	void SetHealth(float health) { m_health = health; }
	void SetLevel(int level) { m_level = level;
	}
private:
	const char* m_name;
	float m_health;
	int m_level;
};