#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) : m_type(type)
{
}

ATarget& ATarget::operator=(const ATarget& rhs)
{
    if (this != &rhs) {
        m_type = rhs.getType();
    }
    return *this;
}

ATarget::ATarget(ATarget const & obj)
{
	*this = obj;
}

ATarget::~ATarget()
{
}

const std::string& ATarget::getType() const
{
    return m_type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << m_type << " has been " << spell.getEffects() << "!" << std::endl;
}
