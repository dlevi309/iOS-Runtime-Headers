/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _arrivalStep;
	GEOComposedRouteStep* _previousExitStationStep;
	PolylineCoordinate _arrivalRouteCoordinate;
	SCD_Struct_GE32 _destinationLocationCoordinate;

}
-(id)initWithRoute:(id)arg1 arrivalStep:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end

