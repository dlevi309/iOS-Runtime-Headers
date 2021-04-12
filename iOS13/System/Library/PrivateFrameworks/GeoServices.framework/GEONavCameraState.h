/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavCameraState : PBCodable <NSCopying> {

	int _distanceToManeuver;
	int _speedBucket;
	int _upcomingManeuverType;
	BOOL _isGroupedManeuver;
	struct {
		unsigned has_distanceToManeuver : 1;
		unsigned has_speedBucket : 1;
		unsigned has_upcomingManeuverType : 1;
		unsigned has_isGroupedManeuver : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUpcomingManeuverType; 
@property (assign,nonatomic) int upcomingManeuverType; 
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) int distanceToManeuver; 
@property (assign,nonatomic) BOOL hasIsGroupedManeuver; 
@property (assign,nonatomic) BOOL isGroupedManeuver; 
@property (assign,nonatomic) BOOL hasSpeedBucket; 
@property (assign,nonatomic) int speedBucket; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)distanceToManeuver;
-(void)setDistanceToManeuver:(int)arg1 ;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(int)upcomingManeuverType;
-(void)setUpcomingManeuverType:(int)arg1 ;
-(void)setHasUpcomingManeuverType:(BOOL)arg1 ;
-(BOOL)hasUpcomingManeuverType;
-(id)upcomingManeuverTypeAsString:(int)arg1 ;
-(int)StringAsUpcomingManeuverType:(id)arg1 ;
-(id)distanceToManeuverAsString:(int)arg1 ;
-(int)StringAsDistanceToManeuver:(id)arg1 ;
-(BOOL)isGroupedManeuver;
-(void)setIsGroupedManeuver:(BOOL)arg1 ;
-(void)setHasIsGroupedManeuver:(BOOL)arg1 ;
-(BOOL)hasIsGroupedManeuver;
-(int)speedBucket;
-(void)setSpeedBucket:(int)arg1 ;
-(void)setHasSpeedBucket:(BOOL)arg1 ;
-(BOOL)hasSpeedBucket;
-(id)speedBucketAsString:(int)arg1 ;
-(int)StringAsSpeedBucket:(id)arg1 ;
@end

