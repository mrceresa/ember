/*
 Copyright (C) 2009 erik

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef TERRAINPAGEDATAPROVIDER_H_
#define TERRAINPAGEDATAPROVIDER_H_

#include "components/ogre/SceneManagers/EmberPagingSceneManager/include/EmberPagingSceneManager.h"

namespace EmberOgre
{

namespace Terrain
{
class TerrainManager;
class TerrainPage;
class ITerrainPageBridge;
}

class TerrainPageData : public IPageData
{
public:
	TerrainPageData(Terrain::TerrainPage* page);
	virtual ~TerrainPageData();
	virtual Ogre::MaterialPtr getMaterial();
private:
	Terrain::TerrainPage* mPage;

};

class TerrainPageDataProvider : public IPageDataProvider
{
public:
	TerrainPageDataProvider(Terrain::TerrainManager& manager);
	virtual ~TerrainPageDataProvider();

	virtual IPageData* getPageData(const Ogre::Vector2& position);
	virtual int getPageIndexSize() const;
	virtual void setUpTerrainPageAtIndex(const Ogre::Vector2& ogreIndexPosition, Terrain::ITerrainPageBridge& bridge);
protected:
	Terrain::TerrainManager& mManager;
};

}

#endif /* TERRAINPAGEDATAPROVIDER_H_ */