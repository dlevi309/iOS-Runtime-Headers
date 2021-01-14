/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _maxZoom;
	float _minZoom;
	struct {
		unsigned has_maxZoom : 1;
		unsigned has_minZoom : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_mapRegion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasMinZoom; 
@property (assign,nonatomic) float minZoom; 
@property (assign,nonatomic) BOOL hasMaxZoom; 
@property (assign,nonatomic) float maxZoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)boundsInfoForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasMaxZoom:(BOOL)arg1 ;
-(float)maxZoom;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(float)minZoom;
-(id)jsonRepresentation;
-(GEOMapRegion *)displayMapRegion;
-(BOOL)hasMinZoom;
-(BOOL)hasMaxZoom;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(void)setMinZoom:(float)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)description;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxZoom:(float)arg1 ;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasMinZoom:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

