/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOLocation, GEORouteMatch, GEORouteMatcher, GEOComposedRoute, GEOComposedRouteStep;

@interface MNRouteProximitySensor : NSObject {

	double _proximityThreshold;
	GEOLocation* _location;
	GEORouteMatch* _routeMatch;
	GEORouteMatcher* _routeMatcher;
	unsigned long long _proximity;

}

@property (nonatomic,readonly) GEOLocation * location; 
@property (assign,nonatomic) double proximityThreshold; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) GEOLocation * closestPointOnRoute; 
@property (nonatomic,readonly) GEOComposedRouteStep * closestStepOnRoute; 
@property (nonatomic,readonly) double courseOnRoute; 
@property (nonatomic,readonly) double distanceFromOrigin; 
@property (nonatomic,readonly) double distanceFromRoute; 
@property (nonatomic,readonly) double distanceFromDestination; 
@property (nonatomic,readonly) double remainingTimeOnRoute; 
@property (nonatomic,readonly) unsigned long long proximity;                           //@synthesize proximity=_proximity - In the implementation block
-(id)init;
-(GEOLocation *)location;
-(unsigned long long)proximity;
-(double)distanceFromDestination;
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(double)distanceFromRoute;
-(void)updateForLocation:(id)arg1 ;
-(double)distanceFromOrigin;
-(void)_updateRouteMatch;
-(void)_updateProximity;
-(GEOLocation *)closestPointOnRoute;
-(GEOComposedRouteStep *)closestStepOnRoute;
-(double)courseOnRoute;
-(double)remainingTimeOnRoute;
-(double)proximityThreshold;
-(void)setProximityThreshold:(double)arg1 ;
@end

