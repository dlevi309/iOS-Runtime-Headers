/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialLookupParameters : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	double _radius;
	NSArray* _categories;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                            //@synthesize categories=_categories - In the implementation block
-(GEOCoarseLocationLatLng)coordinate;
-(NSArray *)categories;
-(double)radius;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 ;
@end

