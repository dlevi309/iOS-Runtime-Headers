/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)latLng;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(void)setFloorOrdinal:(int)arg1 ;
-(void)setHasFloorOrdinal:(BOOL)arg1 ;
-(BOOL)hasFloorOrdinal;
-(int)floorOrdinal;
@end

