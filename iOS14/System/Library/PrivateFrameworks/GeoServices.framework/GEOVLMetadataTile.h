/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOTileCoordinate;

@interface GEOVLMetadataTile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _builds;
	GEOTileCoordinate* _coord;
	NSMutableArray* _precisions;
	NSMutableArray* _tiles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_builds : 1;
		unsigned read_coord : 1;
		unsigned read_precisions : 1;
		unsigned read_tiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCoord; 
@property (nonatomic,retain) GEOTileCoordinate * coord; 
@property (nonatomic,retain) NSMutableArray * builds; 
@property (nonatomic,retain) NSMutableArray * precisions; 
@property (nonatomic,retain) NSMutableArray * tiles; 
+(Class)precisionType;
+(Class)tileType;
+(BOOL)isValid:(id)arg1 ;
+(Class)buildType;
-(id)dictionaryRepresentation;
-(GEOTileCoordinate *)coord;
-(void)addPrecision:(id)arg1 ;
-(unsigned long long)buildsCount;
-(void)clearBuilds;
-(id)buildAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)precisionsCount;
-(NSMutableArray *)builds;
-(void)readAll:(BOOL)arg1 ;
-(void)clearPrecisions;
-(id)precisionAtIndex:(unsigned long long)arg1 ;
-(void)setBuilds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)precisions;
-(void)setPrecisions:(NSMutableArray *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCoord;
-(void)setTiles:(NSMutableArray *)arg1 ;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(void)addTile:(id)arg1 ;
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setCoord:(GEOTileCoordinate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addBuild:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)tiles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

