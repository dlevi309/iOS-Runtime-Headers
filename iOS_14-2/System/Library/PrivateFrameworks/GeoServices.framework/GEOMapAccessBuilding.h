/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuilding.h>

@class NSArray, NSString;

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {

	SCD_Struct_GE112* _buildingFeature;
	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sections;
-(id)initWithBuildingFeature:(SCD_Struct_GE112*)arg1 ;
-(void)dealloc;
@end

