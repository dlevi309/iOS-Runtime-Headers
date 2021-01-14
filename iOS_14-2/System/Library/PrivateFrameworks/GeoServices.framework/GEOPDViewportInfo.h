/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	int _mapType;
	unsigned _timeSinceMapViewportChanged;
	struct {
		unsigned has_mapType : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)viewportInfoForTraits:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)mapType;
-(int)StringAsMapType:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)mapTypeAsString:(int)arg1 ;
-(id)description;
-(BOOL)hasMapType;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

