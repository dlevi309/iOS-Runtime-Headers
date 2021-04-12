/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,retain) NSMutableArray * tiles; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned long long radius; 
+(BOOL)isValid:(id)arg1 ;
+(Class)tilesType;
-(id)dictionaryRepresentation;
-(void)setRadius:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setTiles:(NSMutableArray *)arg1 ;
-(GEOLocation *)location;
-(unsigned long long)tilesCount;
-(void)clearTiles;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasRadius;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(unsigned long long)radius;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTiles:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)tiles;
-(void)setHasRadius:(BOOL)arg1 ;
-(id)tilesAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

