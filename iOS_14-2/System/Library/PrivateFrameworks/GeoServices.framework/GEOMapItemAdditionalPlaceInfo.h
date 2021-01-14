/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapItem;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;
	id<GEOMapItem> _mapItem;

}

@property (nonatomic,readonly) id<GEOMapItem> mapItem;                          //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(id)initWithPlace:(id)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(GEOMapRegion *)mapRegion;
-(id<GEOMapItem>)mapItem;
-(int)placeType;
-(NSString *)name;
-(double)areaInMeters;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(id)initWithMapItem:(id)arg1 ;
@end

