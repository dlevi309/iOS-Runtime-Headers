/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureTransitAccessPoint : NSObject {

	SCD_Struct_GE234* _feature;
	SCD_Struct_GE32 _coordinate;

}

@property (nonatomic,readonly) SCD_Struct_GE234* feature; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL isEntrance; 
@property (nonatomic,readonly) BOOL isExit; 
@property (nonatomic,readonly) double radiusMeters; 
-(void)dealloc;
-(SCD_Struct_GE32)coordinate;
-(SCD_Struct_GE234*)feature;
-(id)initWithFeature:(SCD_Struct_GE234*)arg1 ;
-(BOOL)isEntrance;
-(double)radiusMeters;
-(BOOL)isExit;
@end

