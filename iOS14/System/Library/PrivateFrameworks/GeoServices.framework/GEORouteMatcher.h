/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEORouteRoadMatcher;

@interface GEORouteMatcher : NSObject {

	GEOComposedRoute* _route;
	BOOL _useStrictInitialOnRouteCriteria;
	GEORouteRoadMatcher* _routeRoadMatcher;
	BOOL _shouldSnapRouteMatchToRoute;
	BOOL _useMatchedCoordinateForMatching;

}

@property (assign,nonatomic) BOOL useStrictInitialOnRouteCriteria;              //@synthesize useStrictInitialOnRouteCriteria=_useStrictInitialOnRouteCriteria - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapRouteMatchToRoute;                  //@synthesize shouldSnapRouteMatchToRoute=_shouldSnapRouteMatchToRoute - In the implementation block
@property (assign,nonatomic) BOOL useMatchedCoordinateForMatching;              //@synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching - In the implementation block
-(id)matchToClosestPointOnRouteWithLocation:(id)arg1 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_supportsSnapping;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(id)matchToRouteWithLocation:(id)arg1 ;
-(void)_considerCandidateMatch:(id)arg1 ;
-(id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
-(void)_startRouteMatch;
-(void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(PolylineCoordinate)_guaranteedRouteCoordinateForLocationCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)_startStepForPreviousRouteMatch:(id)arg1 ;
-(double)distanceToRouteFrom:(GEOCoarseLocationLatLng)arg1 startDistance:(double)arg2 endDistance:(double)arg3 ;
-(id)_stepForPointIndex:(unsigned)arg1 previousStep:(id)arg2 ;
-(void)setUseMatchedCoordinateForMatching:(BOOL)arg1 ;
-(BOOL)useMatchedCoordinateForMatching;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
-(double)distanceToRouteFrom:(GEOCoarseLocationLatLng)arg1 ;
-(void)_snapRouteMatchToRoad:(id)arg1 ;
-(BOOL)useStrictInitialOnRouteCriteria;
-(void)setUseStrictInitialOnRouteCriteria:(BOOL)arg1 ;
-(BOOL)shouldSnapRouteMatchToRoute;
-(void)setShouldSnapRouteMatchToRoute:(BOOL)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(PolylineCoordinate)closestRouteCoordinateForLocationCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)dealloc;
@end

