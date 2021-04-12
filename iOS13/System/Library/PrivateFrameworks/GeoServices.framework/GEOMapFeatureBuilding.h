/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOMapFeatureBuilding : NSObject {

	SCD_Struct_GE111* _feature;
	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
-(void)dealloc;
-(NSArray *)sections;
-(id)initWithFeature:(SCD_Struct_GE111*)arg1 ;
@end

