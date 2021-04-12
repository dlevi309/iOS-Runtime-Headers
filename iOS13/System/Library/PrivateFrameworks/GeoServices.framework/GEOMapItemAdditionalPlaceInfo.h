/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(NSString *)name;
-(SCD_Struct_GE32)coordinate;
-(int)placeType;
-(GEOMapRegion *)mapRegion;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(double)areaInMeters;
@end

