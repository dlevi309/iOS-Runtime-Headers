/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureAccess;

@interface GEORouteRoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;

}
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(SCD_Struct_GE74*)findRoadOnCoordinate:(SCD_Struct_GE32)arg1 withCourse:(double)arg2 ;
@end

