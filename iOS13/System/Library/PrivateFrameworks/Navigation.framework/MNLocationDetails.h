/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation, GEOLatLng, NSString, MNRouteCoordinate, NSData;

@interface MNLocationDetails : PBCodable <NSCopying> {

	double _courseAccuracy;
	double _distanceFromRoute;
	double _horizontalAccuracy;
	double _roadMatchCourse;
	double _routeMatchCourse;
	long long _shieldType;
	long long _speedLimitShieldType;
	double _timestamp;
	unsigned long long _transitID;
	GEOLocation* _location;
	unsigned _locationState;
	int _rampType;
	int _rawReferenceFrame;
	GEOLatLng* _roadCoordinate;
	unsigned _roadLineType;
	NSString* _roadName;
	MNRouteCoordinate* _routeCoordinate;
	NSData* _routeIDData;
	NSString* _shieldText;
	unsigned _speedLimit;
	unsigned _stepIndex;
	BOOL _isGoodMatch;
	BOOL _isTunnelProjection;
	BOOL _speedLimitIsMPH;
	SCD_Struct_MN17 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteIDData; 
@property (nonatomic,retain) NSData * routeIDData;                             //@synthesize routeIDData=_routeIDData - In the implementation block
@property (assign,nonatomic) BOOL hasStepIndex; 
@property (assign,nonatomic) unsigned stepIndex;                               //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) BOOL hasLocationState; 
@property (assign,nonatomic) unsigned locationState;                           //@synthesize locationState=_locationState - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteCoordinate; 
@property (nonatomic,retain) MNRouteCoordinate * routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadCoordinate; 
@property (nonatomic,retain) GEOLatLng * roadCoordinate;                       //@synthesize roadCoordinate=_roadCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasRouteMatchCourse; 
@property (assign,nonatomic) double routeMatchCourse;                          //@synthesize routeMatchCourse=_routeMatchCourse - In the implementation block
@property (assign,nonatomic) BOOL hasRoadMatchCourse; 
@property (assign,nonatomic) double roadMatchCourse;                           //@synthesize roadMatchCourse=_roadMatchCourse - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadName; 
@property (nonatomic,retain) NSString * roadName;                              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText;                            //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) long long shieldType;                             //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLineType; 
@property (assign,nonatomic) unsigned roadLineType;                            //@synthesize roadLineType=_roadLineType - In the implementation block
@property (assign,nonatomic) BOOL hasRampType; 
@property (assign,nonatomic) int rampType;                                     //@synthesize rampType=_rampType - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimit; 
@property (assign,nonatomic) unsigned speedLimit;                              //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimitIsMPH; 
@property (assign,nonatomic) BOOL speedLimitIsMPH;                             //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (assign,nonatomic) BOOL hasIsGoodMatch; 
@property (assign,nonatomic) BOOL isGoodMatch;                                 //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;                        //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasCourseAccuracy; 
@property (assign,nonatomic) double courseAccuracy;                            //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceFromRoute; 
@property (assign,nonatomic) double distanceFromRoute;                         //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) BOOL hasTransitID; 
@property (assign,nonatomic) unsigned long long transitID;                     //@synthesize transitID=_transitID - In the implementation block
@property (assign,nonatomic) BOOL hasIsTunnelProjection; 
@property (assign,nonatomic) BOOL isTunnelProjection;                          //@synthesize isTunnelProjection=_isTunnelProjection - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimitShieldType; 
@property (assign,nonatomic) long long speedLimitShieldType;                   //@synthesize speedLimitShieldType=_speedLimitShieldType - In the implementation block
@property (assign,nonatomic) BOOL hasRawReferenceFrame; 
@property (assign,nonatomic) int rawReferenceFrame;                            //@synthesize rawReferenceFrame=_rawReferenceFrame - In the implementation block
+(id)locationDetailsWithLocation:(id)arg1 ;
+(id)locationWithLocationDetails:(id)arg1 ;
+(id)locationWithLocationDetails:(id)arg1 route:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(GEOLocation *)location;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)courseAccuracy;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(int)rampType;
-(unsigned)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)hasCourseAccuracy;
-(BOOL)hasTransitID;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setHasCourseAccuracy:(BOOL)arg1 ;
-(unsigned long long)transitID;
-(void)setTransitID:(unsigned long long)arg1 ;
-(void)setHasTransitID:(BOOL)arg1 ;
-(MNRouteCoordinate *)routeCoordinate;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(BOOL)hasShieldText;
-(long long)shieldType;
-(unsigned)stepIndex;
-(BOOL)isGoodMatch;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setRouteCoordinate:(MNRouteCoordinate *)arg1 ;
-(void)setStepIndex:(unsigned)arg1 ;
-(double)distanceFromRoute;
-(BOOL)hasShieldType;
-(void)setShieldType:(long long)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(BOOL)isTunnelProjection;
-(void)setIsTunnelProjection:(BOOL)arg1 ;
-(BOOL)hasRoadName;
-(void)setRampType:(int)arg1 ;
-(unsigned)locationState;
-(void)setLocationState:(unsigned)arg1 ;
-(void)setRouteMatchCourse:(double)arg1 ;
-(void)setRoadMatchCourse:(double)arg1 ;
-(unsigned)roadLineType;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setSpeedLimit:(unsigned)arg1 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(long long)speedLimitShieldType;
-(void)setSpeedLimitShieldType:(long long)arg1 ;
-(void)setRawReferenceFrame:(int)arg1 ;
-(void)setRoadCoordinate:(GEOLatLng *)arg1 ;
-(void)setRouteIDData:(NSData *)arg1 ;
-(BOOL)hasRouteIDData;
-(void)setHasStepIndex:(BOOL)arg1 ;
-(BOOL)hasStepIndex;
-(void)setHasLocationState:(BOOL)arg1 ;
-(BOOL)hasLocationState;
-(BOOL)hasRouteCoordinate;
-(BOOL)hasRoadCoordinate;
-(void)setHasRouteMatchCourse:(BOOL)arg1 ;
-(BOOL)hasRouteMatchCourse;
-(void)setHasRoadMatchCourse:(BOOL)arg1 ;
-(BOOL)hasRoadMatchCourse;
-(void)setHasRoadLineType:(BOOL)arg1 ;
-(BOOL)hasRoadLineType;
-(void)setHasRampType:(BOOL)arg1 ;
-(BOOL)hasRampType;
-(id)rampTypeAsString:(int)arg1 ;
-(int)StringAsRampType:(id)arg1 ;
-(void)setHasSpeedLimit:(BOOL)arg1 ;
-(BOOL)hasSpeedLimit;
-(void)setHasSpeedLimitIsMPH:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitIsMPH;
-(void)setHasIsGoodMatch:(BOOL)arg1 ;
-(BOOL)hasIsGoodMatch;
-(void)setHasDistanceFromRoute:(BOOL)arg1 ;
-(BOOL)hasDistanceFromRoute;
-(void)setHasIsTunnelProjection:(BOOL)arg1 ;
-(BOOL)hasIsTunnelProjection;
-(void)setHasSpeedLimitShieldType:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitShieldType;
-(int)rawReferenceFrame;
-(void)setHasRawReferenceFrame:(BOOL)arg1 ;
-(BOOL)hasRawReferenceFrame;
-(id)rawReferenceFrameAsString:(int)arg1 ;
-(int)StringAsRawReferenceFrame:(id)arg1 ;
-(NSData *)routeIDData;
-(GEOLatLng *)roadCoordinate;
-(double)routeMatchCourse;
-(double)roadMatchCourse;
@end

