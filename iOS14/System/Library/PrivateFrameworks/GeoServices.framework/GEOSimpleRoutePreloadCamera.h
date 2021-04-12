/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORoutePreloadCamera.h>

@class NSString;

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {

	unsigned long long _zoomLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)zoomLevel;
-(void)implicateTilesForCoordinate:(GEOCoarseLocationLatLng)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8 ;
-(id)initWithZoomLevel:(unsigned long long)arg1 ;
@end

