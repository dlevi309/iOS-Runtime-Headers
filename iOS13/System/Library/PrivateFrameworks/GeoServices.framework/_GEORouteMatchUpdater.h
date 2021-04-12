/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)priority;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isLocation:(id)arg1 nearTransitPoint:(SCD_Struct_GE32)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4 ;
-(id)initWithTransitRouteMatcher:(id)arg1 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
-(double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(SCD_Struct_GE32)arg3 ;
@end

