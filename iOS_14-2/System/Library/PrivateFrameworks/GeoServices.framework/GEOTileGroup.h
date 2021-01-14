/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _attributionIndexs;
	SCD_Struct_GE17* _fontIndexs;
	GEOTileSetRegion* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	SCD_Struct_GE17* _iconIndexs;
	GEORegionalResourceIndex* _regionalResourceIndexs;
	unsigned long long _regionalResourceIndexsCount;
	unsigned long long _regionalResourceIndexsSpace;
	SCD_Struct_GE17* _resourceIndexs;
	SCD_Struct_GE17* _styleSheetIndexs;
	SCD_Struct_GE17* _textureIndexs;
	GEOVersionedTileSet* _tileSets;
	unsigned long long _tileSetsCount;
	unsigned long long _tileSetsSpace;
	SCD_Struct_GE17* _xmlIndexs;
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
		unsigned wrote_anyField : 1;
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
-(GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearHybridUnavailableRegions;
-(void)addTileSet:(GEOVersionedTileSet)arg1 ;
-(void)setHybridUnavailableRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)clearXmlIndexs;
-(id)dictionaryRepresentation;
-(void)clearTextureIndexs;
-(void)setResourceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addHybridUnavailableRegion:(GEOTileSetRegion)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOVersionedTileSet*)tileSets;
-(GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hybridUnavailableRegionsCount;
-(GEOTileSetRegion*)hybridUnavailableRegions;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearRegionalResourceIndexs;
-(void)readAll:(BOOL)arg1 ;
-(void)setFontIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)fontIndexAtIndex:(unsigned long long)arg1 ;
-(void)clearTileSets;
-(unsigned)xmlIndexAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributionIndexs;
-(unsigned long long)resourceIndexsCount;
-(BOOL)hasMuninVersionIndex;
-(unsigned)textureIndexAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTextureIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)resourceIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned)styleSheetIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)iconIndexs;
-(void)clearResourceIndexs;
-(unsigned long long)regionalResourceIndexsCount;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)iconIndexsCount;
-(void)addIconIndex:(unsigned)arg1 ;
-(unsigned long long)xmlIndexsCount;
-(void)setTileSets:(GEOVersionedTileSet*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addStyleSheetIndex:(unsigned)arg1 ;
-(unsigned long long)fontIndexsCount;
-(GEORegionalResourceIndex*)regionalResourceIndexs;
-(void)setRegionalResourceIndexs:(GEORegionalResourceIndex*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned)attributionIndexAtIndex:(unsigned long long)arg1 ;
-(void)setStyleSheetIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)clearFontIndexs;
-(unsigned long long)textureIndexsCount;
-(unsigned long long)attributionIndexsCount;
-(GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)xmlIndexs;
-(void)addFontIndex:(unsigned)arg1 ;
-(unsigned*)styleSheetIndexs;
-(void)setIconIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(void)clearIconIndexs;
-(unsigned long long)styleSheetIndexsCount;
-(void)setXmlIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)muninVersionIndex;
-(unsigned*)resourceIndexs;
-(void)clearStyleSheetIndexs;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)addXmlIndex:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)textureIndexs;
-(void)addResourceIndex:(unsigned)arg1 ;
-(void)addRegionalResourceIndex:(GEORegionalResourceIndex)arg1 ;
-(void)setMuninVersionIndex:(unsigned)arg1 ;
-(void)addAttributionIndex:(unsigned)arg1 ;
-(unsigned*)fontIndexs;
-(void)addTextureIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned*)attributionIndexs;
-(unsigned)iconIndexAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasMuninVersionIndex:(BOOL)arg1 ;
-(void)setAttributionIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

