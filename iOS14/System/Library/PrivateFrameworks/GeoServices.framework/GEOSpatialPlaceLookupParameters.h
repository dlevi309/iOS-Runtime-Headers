/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray, GEOMapRegion, GEOPOICategoryFilter;

@interface GEOSpatialPlaceLookupParameters : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	double _radius;
	NSArray* _categories;
	int _maxResultCount;
	GEOMapRegion* _mapRegion;
	GEOPOICategoryFilter* _poiCategoryFilter;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;                    //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                         //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                                  //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * mapRegion;                              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) GEOPOICategoryFilter * poiCategoryFilter;              //@synthesize poiCategoryFilter=_poiCategoryFilter - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                                    //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 poiCategoryFilter:(id)arg3 ;
-(id)initWithMapRegion:(id)arg1 poiCategoryFilter:(id)arg2 ;
-(id)init;
-(GEOCoarseLocationLatLng)coordinate;
-(NSArray *)categories;
-(GEOMapRegion *)mapRegion;
-(double)radius;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 ;
-(int)maxResultCount;
-(GEOPOICategoryFilter *)poiCategoryFilter;
@end

