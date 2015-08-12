// StaticObject Implementation File

#include "StaticObject.h"

// Update Funtion -
// Currently updates the TextureRect to new position when framecounter exceeds switchFame threshold
void StaticObject::update(float &frameCounter, float switchFrame)
{
	sprite->setTextureRect(sf::IntRect((int)sourcePos.x * size.y / 2, (int)sourcePos.y * size.y / 2, (int)size.y / 2, (int)size.y / 2));
	if (frameCounter >= switchFrame)							///// FIX ME TEMPORARY !!!!! ************
	{
		frameCounter = 0;
		sourcePos.x++;
		if (sourcePos.x * size.y >= sprite->getTexture()->getSize().x)
		{
			sourcePos.x = 0;
		}
	}
}
