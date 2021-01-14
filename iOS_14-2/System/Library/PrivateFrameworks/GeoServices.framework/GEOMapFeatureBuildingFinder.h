/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)findBuildingsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithTileLoader:(id)arg1 ;
@end

