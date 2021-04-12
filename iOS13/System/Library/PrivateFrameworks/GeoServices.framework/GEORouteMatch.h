/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, NSDate, GEONavigationMatchInfo, GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOComposedTransitStationRouteStep;

@interface GEORouteMatch : NSObject {

	GEOComposedRoute* _route;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE32 _locationCoordinate;
	unsigned long long _stepIndex;
	NSArray* _candidateSteps;
	double _matchedCourse;
	double _distanceFromRoute;
	double _modifiedHorizontalAccuracy;
	double _modifiedCourseAccuracy;
	unsigned long long _consecutiveProgressionsOffRoute;
	double _distanceTraveledOffRoute;
	BOOL _isGoodMatch;
	SCD_Struct_GE74* _road;
	double _roadWidth;
	GEORouteMatch* _projectedFrom;
	NSDate* _timestamp;
	unsigned long long _transitID;
	BOOL _isTunnelProjection;
	GEONavigationMatchInfo* _detailedMatchInfo;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                                             //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 locationCoordinate;                                     //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate routeCoordinate;                                   //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                                           //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * transitTripStep; 
@property (nonatomic,readonly) GEOComposedTransitStationRouteStep * transitStationStep; 
@property (nonatomic,retain) NSArray * candidateSteps;                                               //@synthesize candidateSteps=_candidateSteps - In the implementation block
@property (nonatomic,readonly) double matchedCourse;                                                 //@synthesize matchedCourse=_matchedCourse - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                                               //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE74* road;                                                  //@synthesize road=_road - In the implementation block
@property (nonatomic,readonly) double roadWidth;                                                     //@synthesize roadWidth=_roadWidth - In the implementation block
@property (nonatomic,readonly) BOOL isOnParkingLotRoad; 
@property (nonatomic,readonly) BOOL routeMatchedToEnd; 
@property (nonatomic,retain) GEORouteMatch * projectedFrom;                                          //@synthesize projectedFrom=_projectedFrom - In the implementation block
@property (assign,nonatomic) BOOL isTunnelProjection;                                                //@synthesize isTunnelProjection=_isTunnelProjection - In the implementation block
@property (assign,nonatomic) BOOL isGoodMatch;                                                       //@synthesize isGoodMatch=_isGoodMatch - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveProgressionsOffRoute;                     //@synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute - In the implementation block
@property (assign,nonatomic) double distanceTraveledOffRoute;                                        //@synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute - In the implementation block
@property (assign,nonatomic) double modifiedHorizontalAccuracy;                                      //@synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy - In the implementation block
@property (assign,nonatomic) double modifiedCourseAccuracy;                                          //@synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long transitID;                                           //@synthesize transitID=_transitID - In the implementation block
@property (nonatomic,retain) GEONavigationMatchInfo * detailedMatchInfo;                             //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(GEOComposedRouteStep *)step;
-(double)roadWidth;
-(unsigned long long)transitID;
-(void)setTransitID:(unsigned long long)arg1 ;
-(PolylineCoordinate)routeCoordinate;
-(GEOComposedRoute *)route;
-(unsigned long long)stepIndex;
-(SCD_Struct_GE32)locationCoordinate;
-(id)initWithRoute:(id)arg1 routeCoordinate:(PolylineCoordinate)arg2 locationCoordinate:(SCD_Struct_GE32)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6 ;
-(void)setRoad:(SCD_Struct_GE74*)arg1 ;
-(GEORouteMatch *)projectedFrom;
-(void)setProjectedFrom:(GEORouteMatch *)arg1 ;
-(BOOL)isGoodMatch;
-(void)setIsGoodMatch:(BOOL)arg1 ;
-(double)modifiedHorizontalAccuracy;
-(void)setModifiedHorizontalAccuracy:(double)arg1 ;
-(double)modifiedCourseAccuracy;
-(void)setModifiedCourseAccuracy:(double)arg1 ;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(void)setLocationCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2 ;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(double)distanceFromRoute;
-(double)matchedCourse;
-(BOOL)routeMatchedToEnd;
-(BOOL)isOnParkingLotRoad;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(NSArray *)candidateSteps;
-(void)setCandidateSteps:(NSArray *)arg1 ;
-(SCD_Struct_GE74*)road;
-(id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2 ;
-(unsigned long long)consecutiveProgressionsOffRoute;
-(void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1 ;
-(double)distanceTraveledOffRoute;
-(void)setDistanceTraveledOffRoute:(double)arg1 ;
-(BOOL)isEqualIgnoringScore:(id)arg1 ;
-(BOOL)routeMatchBehind:(id)arg1 ;
-(double)fractionOfCurrentStepTraveled;
-(GEOComposedTransitTripRouteStep *)transitTripStep;
-(GEOComposedTransitStationRouteStep *)transitStationStep;
-(BOOL)isTunnelProjection;
-(void)setIsTunnelProjection:(BOOL)arg1 ;
@end

