/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLocation, NSMutableArray;

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLocation* _location;
	unsigned long long _radius;
	NSMutableArray* _tiles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_radius : 1;
		unsigned read_location : 1;
		unsigned read_tiles : 1;
		unsigned wrote_location : 1;
		unsigned wrote_radius : 1;
		unsigned wrote_tiles : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,retain) NSMutableArray * tiles; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned long long radius; 
+(BOOL)isValid:(id)arg1 ;
+(Class)tilesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)radius;
-(void)setRadius:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(NSMutableArray *)tiles;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)_readLocation;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(void)setTiles:(NSMutableArray *)arg1 ;
-(void)_readTiles;
-(void)_addNoFlagsTiles:(id)arg1 ;
-(id)tilesAtIndex:(unsigned long long)arg1 ;
-(void)addTiles:(id)arg1 ;
@end

