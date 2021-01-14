/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)initWithTileLoader:(id)arg1 ;
-(id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 roadToIgnore:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_tilesAdjacentToTile:(GEOTileKey)arg1 atPoint:(SCD_Struct_GE34)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

