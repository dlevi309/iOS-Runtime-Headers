/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOPBTransitStation, GEOPBTransitStop, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Transfer : _GEORouteMatchUpdater {

	GEOPBTransitStation* _alightStation;
	GEOPBTransitStation* _boardStation;
	GEOPBTransitStop* _alightStop;
	GEOPBTransitStop* _boardStop;
	GEOComposedRouteStep* _alightStep;
	GEOComposedRouteStep* _transferStep;
	GEOComposedRouteStep* _boardStep;

}
-(id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 transferStep:(id)arg3 boardStep:(id)arg4 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
@end

