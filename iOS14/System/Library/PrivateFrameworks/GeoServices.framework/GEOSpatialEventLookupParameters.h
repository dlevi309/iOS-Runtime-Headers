/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray, NSDateInterval;

@interface GEOSpatialEventLookupParameters : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	double _radius;
	NSArray* _categories;
	NSDateInterval* _dateInterval;
	int _maxResultCount;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                            //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                   //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                              //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(NSDateInterval *)dateInterval;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 maxResultCount:(int)arg5 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 ;
-(id)init;
-(GEOCoarseLocationLatLng)coordinate;
-(NSArray *)categories;
-(double)radius;
-(int)maxResultCount;
@end

