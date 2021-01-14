/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOComposedRoutePortion.h>

@class NSArray, GEOComposedRoute, GEOComposedWaypoint, GEOArrivalParameters, GEOWaypointInfo, NSData, GEOComposedRouteEVChargingStationInfo, NSString;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding, GEOComposedRoutePortion> {

	GEOComposedRoute* _route;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	GEOArrivalParameters* _arrivalParameters;
	NSRange _pointRange;
	NSRange _stepRange;
	unsigned _distance;
	int _drivingSide;
	GEOWaypointInfo* _geoOriginWaypointInfo;
	GEOWaypointInfo* _geoDestinationWaypointInfo;
	NSData* _serverLegIDForAnalytics;

}

@property (assign,nonatomic,__weak) GEOComposedRoute * route;                                            //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) NSRange pointRange;                                                         //@synthesize pointRange=_pointRange - In the implementation block
@property (assign,nonatomic) NSRange stepRange;                                                          //@synthesize stepRange=_stepRange - In the implementation block
@property (assign,nonatomic) unsigned distance;                                                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) GEOWaypointInfo * geoOriginWaypointInfo;                                    //@synthesize geoOriginWaypointInfo=_geoOriginWaypointInfo - In the implementation block
@property (nonatomic,retain) GEOWaypointInfo * geoDestinationWaypointInfo;                               //@synthesize geoDestinationWaypointInfo=_geoDestinationWaypointInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long legIndex; 
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                                             //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                                        //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) GEOArrivalParameters * arrivalParameters;                                 //@synthesize arrivalParameters=_arrivalParameters - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteEVChargingStationInfo * chargingStationInfo; 
@property (nonatomic,readonly) double chargingDuration; 
@property (nonatomic,readonly) int drivingSide;                                                          //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) NSData * serverLegIDForAnalytics;                                         //@synthesize serverLegIDForAnalytics=_serverLegIDForAnalytics - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double expectedTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(NSArray *)steps;
-(GEOComposedWaypoint *)origin;
-(GEOComposedRoute *)route;
-(unsigned)distance;
-(GEOArrivalParameters *)arrivalParameters;
-(double)expectedTime;
-(void)encodeWithCoder:(id)arg1 ;
-(double)chargingDuration;
-(unsigned long long)endStepIndex;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(NSString *)description;
-(unsigned long long)legIndex;
-(unsigned long long)stepCount;
-(id)initWithCoder:(id)arg1 ;
-(GEOComposedRouteEVChargingStationInfo *)chargingStationInfo;
-(id)initWithComposedRoute:(id)arg1 origin:(id)arg2 destination:(id)arg3 arrivalParameters:(id)arg4 ;
-(unsigned long long)startStepIndex;
-(void)setPointRange:(NSRange)arg1 ;
-(int)drivingSide;
-(id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 origin:(id)arg3 destination:(id)arg4 arrivalParameters:(id)arg5 ;
-(void)setStepRange:(NSRange)arg1 ;
-(void)setServerLegIDForAnalytics:(NSData *)arg1 ;
-(GEOWaypointInfo *)geoOriginWaypointInfo;
-(void)setGeoOriginWaypointInfo:(GEOWaypointInfo *)arg1 ;
-(GEOWaypointInfo *)geoDestinationWaypointInfo;
-(void)setGeoDestinationWaypointInfo:(GEOWaypointInfo *)arg1 ;
-(NSData *)serverLegIDForAnalytics;
-(NSRange)stepRange;
-(unsigned)pointCount;
-(NSRange)pointRange;
-(GEOComposedWaypoint *)destination;
@end

