/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOComposedWaypoint;

@interface MSPRidesharingTrip : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOComposedWaypoint* _endWaypoint;
	GEOComposedWaypoint* _startWaypoint;

}

@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEOComposedWaypoint * endWaypoint;                //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(BOOL)hasStartWaypoint;
-(BOOL)hasEndWaypoint;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

