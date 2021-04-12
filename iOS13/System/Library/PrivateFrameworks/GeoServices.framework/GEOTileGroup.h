/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _attributionIndexs;
	SCD_Struct_GE19* _fontIndexs;
	GEOTileSetRegion* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	SCD_Struct_GE19* _iconIndexs;
	GEORegionalResourceIndex* _regionalResourceIndexs;
	unsigned long long _regionalResourceIndexsCount;
	unsigned long long _regionalResourceIndexsSpace;
	SCD_Struct_GE19* _resourceIndexs;
	SCD_Struct_GE19* _styleSheetIndexs;
	SCD_Struct_GE19* _textureIndexs;
	GEOVersionedTileSet* _tileSets;
	unsigned long long _tileSetsCount;
	unsigned long long _tileSetsSpace;
	SCD_Struct_GE19* _xmlIndexs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _muninVersionIndex;
	struct {
		unsigned has_muninVersionIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_attributionIndexs : 1;
		unsigned read_fontIndexs : 1;
		unsigned read_hybridUnavailableRegions : 1;
		unsigned read_iconIndexs : 1;
		unsigned read_regionalResourceIndexs : 1;
		unsigned read_resourceIndexs : 1;
		unsigned read_styleSheetIndexs : 1;
		unsigned read_textureIndexs : 1;
		unsigned read_tileSets : 1;
		unsigned read_xmlIndexs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributionIndexs : 1;
		unsigned wrote_fontIndexs : 1;
		unsigned wrote_hybridUnavailableRegions : 1;
		unsigned wrote_iconIndexs : 1;
		unsigned wrote_regionalResourceIndexs : 1;
		unsigned wrote_resourceIndexs : 1;
		unsigned wrote_styleSheetIndexs : 1;
		unsigned wrote_textureIndexs : 1;
		unsigned wrote_tileSets : 1;
		unsigned wrote_xmlIndexs : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_muninVersionIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long tileSetsCount; 
@property (nonatomic,readonly) GEOVersionedTileSet* tileSets; 
@property (nonatomic,readonly) unsigned long long styleSheetIndexsCount; 
@property (nonatomic,readonly) unsigned* styleSheetIndexs; 
@property (nonatomic,readonly) unsigned long long textureIndexsCount; 
@property (nonatomic,readonly) unsigned* textureIndexs; 
@property (nonatomic,readonly) unsigned long long fontIndexsCount; 
@property (nonatomic,readonly) unsigned* fontIndexs; 
@property (nonatomic,readonly) unsigned long long iconIndexsCount; 
@property (nonatomic,readonly) unsigned* iconIndexs; 
@property (nonatomic,readonly) unsigned long long regionalResourceIndexsCount; 
@property (nonatomic,readonly) GEORegionalResourceIndex* regionalResourceIndexs; 
@property (nonatomic,readonly) unsigned long long xmlIndexsCount; 
@property (nonatomic,readonly) unsigned* xmlIndexs; 
@property (nonatomic,readonly) unsigned long long attributionIndexsCount; 
@property (nonatomic,readonly) unsigned* attributionIndexs; 
@property (nonatomic,readonly) unsigned long long hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* hybridUnavailableRegions; 
@property (nonatomic,readonly) unsigned long long resourceIndexsCount; 
@property (nonatomic,readonly) unsigned* resourceIndexs; 
@property (assign,nonatomic) BOOL hasMuninVersionIndex; 
@property (assign,nonatomic) unsigned muninVersionIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOVersionedTileSet*)tileSets;
-(void)addTileSet:(GEOVersionedTileSet)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearTileSets;
-(GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resourceIndexsCount;
-(unsigned)resourceIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionIndexsCount;
-(unsigned)attributionIndexAtIndex:(unsigned long long)arg1 ;
-(void)_readTileSets;
-(void)_addNoFlagsTileSet:(GEOVersionedTileSet)arg1 ;
-(void)clearRegionalResourceIndexs;
-(void)clearHybridUnavailableRegions;
-(void)_readStyleSheetIndexs;
-(void)_addNoFlagsStyleSheetIndex:(unsigned)arg1 ;
-(void)_readTextureIndexs;
-(void)_addNoFlagsTextureIndex:(unsigned)arg1 ;
-(void)_readFontIndexs;
-(void)_addNoFlagsFontIndex:(unsigned)arg1 ;
-(void)_readIconIndexs;
-(void)_addNoFlagsIconIndex:(unsigned)arg1 ;
-(void)_readRegionalResourceIndexs;
-(void)_addNoFlagsRegionalResourceIndex:(GEORegionalResourceIndex)arg1 ;
-(void)_readXmlIndexs;
-(void)_addNoFlagsXmlIndex:(unsigned)arg1 ;
-(void)_readAttributionIndexs;
-(void)_addNoFlagsAttributionIndex:(unsigned)arg1 ;
-(void)_readHybridUnavailableRegions;
-(void)_addNoFlagsHybridUnavailableRegion:(GEOTileSetRegion)arg1 ;
-(void)_readResourceIndexs;
-(void)_addNoFlagsResourceIndex:(unsigned)arg1 ;
-(unsigned long long)styleSheetIndexsCount;
-(void)clearStyleSheetIndexs;
-(unsigned)styleSheetIndexAtIndex:(unsigned long long)arg1 ;
-(void)addStyleSheetIndex:(unsigned)arg1 ;
-(unsigned long long)textureIndexsCount;
-(void)clearTextureIndexs;
-(unsigned)textureIndexAtIndex:(unsigned long long)arg1 ;
-(void)addTextureIndex:(unsigned)arg1 ;
-(unsigned long long)fontIndexsCount;
-(void)clearFontIndexs;
-(unsigned)fontIndexAtIndex:(unsigned long long)arg1 ;
-(void)addFontIndex:(unsigned)arg1 ;
-(unsigned long long)iconIndexsCount;
-(void)clearIconIndexs;
-(unsigned)iconIndexAtIndex:(unsigned long long)arg1 ;
-(void)addIconIndex:(unsigned)arg1 ;
-(unsigned long long)regionalResourceIndexsCount;
-(GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1 ;
-(void)addRegionalResourceIndex:(GEORegionalResourceIndex)arg1 ;
-(unsigned long long)xmlIndexsCount;
-(void)clearXmlIndexs;
-(unsigned)xmlIndexAtIndex:(unsigned long long)arg1 ;
-(void)addXmlIndex:(unsigned)arg1 ;
-(void)clearAttributionIndexs;
-(void)addAttributionIndex:(unsigned)arg1 ;
-(unsigned long long)hybridUnavailableRegionsCount;
-(GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(void)addHybridUnavailableRegion:(GEOTileSetRegion)arg1 ;
-(void)clearResourceIndexs;
-(void)addResourceIndex:(unsigned)arg1 ;
-(void)setTileSets:(GEOVersionedTileSet*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)styleSheetIndexs;
-(void)setStyleSheetIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)textureIndexs;
-(void)setTextureIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)fontIndexs;
-(void)setFontIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)iconIndexs;
-(void)setIconIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEORegionalResourceIndex*)regionalResourceIndexs;
-(void)setRegionalResourceIndexs:(GEORegionalResourceIndex*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)xmlIndexs;
-(void)setXmlIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)attributionIndexs;
-(void)setAttributionIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEOTileSetRegion*)hybridUnavailableRegions;
-(void)setHybridUnavailableRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)resourceIndexs;
-(void)setResourceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)muninVersionIndex;
-(void)setMuninVersionIndex:(unsigned)arg1 ;
-(void)setHasMuninVersionIndex:(BOOL)arg1 ;
-(BOOL)hasMuninVersionIndex;
@end

