/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTransitRouteMatcher, GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext;

@interface _GEORouteMatchUpdater : NSObject {

	GEOTransitRouteMatcher* _routeMatcher;
	GEOComposedRoute* _route;
	GEOMapFeatureAccess* _mapFeatureAccess;
	GEOMotionContext* _motionContext;
	double _stationRadius;

}
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isLocation:(id)arg1 nearTransitPoint:(GEOCoarseLocationLatLng)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4 ;
-(id)initWithTransitRouteMatcher:(id)arg1 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
-(double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(GEOCoarseLocationLatLng)arg3 ;
-(unsigned long long)priority;
@end

