/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_availableTiles : 1;
		unsigned wrote_genericTiles : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_supportedLanguagesVersion : 1;
		unsigned wrote_timeToLiveSeconds : 1;
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
-(void)clearAvailableTiles;
-(void)clearGenericTiles;
-(void)_readAvailableTiles;
-(void)_addNoFlagsAvailableTiles:(GEOTileSetRegion)arg1 ;
-(void)_readGenericTiles;
-(void)_addNoFlagsGenericTile:(GEOGenericTile)arg1 ;
-(unsigned long long)availableTilesCount;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(unsigned long long)genericTilesCount;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(GEOTileSetRegion*)availableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)timeToLiveSeconds;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(GEOGenericTile*)genericTiles;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)supportedLanguagesVersion;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
-(BOOL)hasSupportedLanguagesVersion;
@end

