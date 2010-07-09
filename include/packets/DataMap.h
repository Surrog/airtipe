/*!
 * \file	DataMap.h
 * \brief	DataMap class
 * \author	Alexis Lucazeau - lucaze_b@epitech.eu
 * \version	0.1
 * \date	07/08/2010 01:17:34 PM
 */

#ifndef		DATAMAP_H__
#define		DATAMAP_H__

# include	"packets/AData.h"

struct		DataMap : public AData
{
	char	mapName[15];
	AData *	Clone() { return new DataMap; }
};

#endif		// DATAMAP_H__