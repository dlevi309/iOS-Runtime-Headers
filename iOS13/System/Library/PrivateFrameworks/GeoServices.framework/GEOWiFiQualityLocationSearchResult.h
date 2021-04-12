/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ess;
	GEOLocation* _location;
	unsigned long long _tileKey;
	NSMutableArray* _tiles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_tileKey : 1;
		unsigned has_status : 1;
		unsigned read_ess : 1;
		unsigned read_location : 1;
		unsigned read_tiles : 1;
		unsigned wrote_ess : 1;
		unsigned wrote_location : 1;
		unsigned wrote_tileKey : 1;
		unsigned wrote_tiles : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * ess; 
@property (nonatomic,retain) NSMutableArray * tiles; 
+(BOOL)isValid:(id)arg1 ;
+(Class)essType;
+(Class)tileType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(NSMutableArray *)tiles;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)tileKey;
-(BOOL)hasLocation;
-(void)_readLocation;
-(NSMutableArray *)ess;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)_readEss;
-(void)_addNoFlagsEss:(id)arg1 ;
-(unsigned long long)essCount;
-(void)clearEss;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)addEss:(id)arg1 ;
-(void)addTile:(id)arg1 ;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(void)setTiles:(NSMutableArray *)arg1 ;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(BOOL)hasTileKey;
-(void)_readTiles;
-(void)_addNoFlagsTile:(id)arg1 ;
@end

