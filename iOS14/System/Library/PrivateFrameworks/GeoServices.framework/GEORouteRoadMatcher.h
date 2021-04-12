/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureAccess;

@interface GEORouteRoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;

}
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(SCD_Struct_GE77*)findRoadOnCoordinate:(GEOCoarseLocationLatLng)arg1 withCourse:(double)arg2 ;
@end

