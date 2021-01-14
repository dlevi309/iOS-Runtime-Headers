/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapRegion;

@interface MSPDroppedPin : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _timestamp;
	int _floorOrdinal;
	GEOLatLng* _latLng;
	GEOMapRegion* _mapRegion;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFloorOrdinal; 
@property (assign,nonatomic) int floorOrdinal;                               //@synthesize floorOrdinal=_floorOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(double)timestamp;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMapRegion;
-(GEOLatLng *)latLng;
-(id)description;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasLatLng;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFloorOrdinal:(int)arg1 ;
-(void)setHasFloorOrdinal:(BOOL)arg1 ;
-(BOOL)hasFloorOrdinal;
-(int)floorOrdinal;
@end

