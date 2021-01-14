/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureTransitAccessPoint : NSObject {

	SCD_Struct_GE246* _feature;
	GEOCoarseLocationLatLng _coordinate;

}

@property (nonatomic,readonly) SCD_Struct_GE246* feature; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL isEntrance; 
@property (nonatomic,readonly) BOOL isExit; 
@property (nonatomic,readonly) double radiusMeters; 
-(SCD_Struct_GE246*)feature;
-(BOOL)isEntrance;
-(double)radiusMeters;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)isExit;
-(id)initWithFeature:(SCD_Struct_GE246*)arg1 ;
-(void)dealloc;
@end

