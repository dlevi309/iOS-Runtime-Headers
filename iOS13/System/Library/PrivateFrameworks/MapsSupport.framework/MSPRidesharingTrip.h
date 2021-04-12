/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(BOOL)hasStartWaypoint;
-(BOOL)hasEndWaypoint;
@end

