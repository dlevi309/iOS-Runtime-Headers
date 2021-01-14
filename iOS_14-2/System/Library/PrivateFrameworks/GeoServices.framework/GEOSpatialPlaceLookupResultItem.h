/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSArray, GEOMapRegion;

@interface GEOSpatialPlaceLookupResultItem : NSObject {

	NSArray* _mapItems;
	GEOMapRegion* _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(NSArray *)mapItems;
-(id)initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(GEOMapRegion *)boundingRegion;
@end

