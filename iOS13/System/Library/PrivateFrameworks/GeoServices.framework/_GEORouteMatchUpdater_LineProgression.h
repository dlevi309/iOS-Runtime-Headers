/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	PolylineCoordinate _startRouteCoordinate;

}
-(unsigned long long)priority;
-(id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end

