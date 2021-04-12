/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapBuildingFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE32 _centerCoordinate;
	double _radius;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 centerCoordinate:(SCD_Struct_GE32)arg2 radius:(double)arg3 ;
-(void)findBuildingsWithHandler:(/*^block*/id)arg1 ;
@end

