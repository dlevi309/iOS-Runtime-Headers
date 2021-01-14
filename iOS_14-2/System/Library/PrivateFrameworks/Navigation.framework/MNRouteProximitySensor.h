/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GEOComposedRoute *)route;
-(id)init;
-(GEOLocation *)location;
-(double)distanceFromOrigin;
-(double)distanceFromDestination;
-(unsigned long long)proximity;
-(void)updateForLocation:(id)arg1 ;
-(double)distanceFromRoute;
-(id)initWithRoute:(id)arg1 ;
-(void)_updateRouteMatch;
-(void)_updateProximity;
-(GEOLocation *)closestPointOnRoute;
-(GEOComposedRouteStep *)closestStepOnRoute;
-(double)courseOnRoute;
-(double)remainingTimeOnRoute;
-(double)proximityThreshold;
-(void)setProximityThreshold:(double)arg1 ;
@end

