/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOMapFeatureBuilding : NSObject {

	SCD_Struct_GE112* _feature;
	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
-(NSArray *)sections;
-(id)initWithFeature:(SCD_Struct_GE112*)arg1 ;
-(void)dealloc;
@end

