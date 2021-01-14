/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	GEOGenericTile* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	struct {
		unsigned has_supportedLanguagesVersion : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availableTiles : 1;
		unsigned read_genericTiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) GEOGenericTile* genericTiles; 
@property (assign,nonatomic) BOOL hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearGenericTiles;
-(PBUnknownFields *)unknownFields;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearAvailableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasTimeToLiveSeconds;
-(GEOTileSetRegion*)availableTiles;
-(unsigned long long)availableTilesCount;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(id)init;
-(unsigned)timeToLiveSeconds;
-(id)jsonRepresentation;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasSupportedLanguagesVersion;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(GEOGenericTile*)genericTiles;
-(unsigned long long)genericTilesCount;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)supportedLanguagesVersion;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

