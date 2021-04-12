/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialPlaceLookupParameters : NSObject {

	SCD_Struct_GE32 _coordinate;
	double _radius;
	NSArray* _categories;
	int _maxResultCount;

}

@property (nonatomic,readonly) SCD_Struct_GE32 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                      //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)init;
-(SCD_Struct_GE32)coordinate;
-(double)radius;
-(NSArray *)categories;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 radius:(double)arg2 categories:(id)arg3 ;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4 ;
-(int)maxResultCount;
@end

