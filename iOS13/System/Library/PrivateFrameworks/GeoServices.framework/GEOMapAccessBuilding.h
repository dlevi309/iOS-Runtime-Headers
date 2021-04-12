/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuilding.h>

@class NSArray, NSString;

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {

	SCD_Struct_GE111* _buildingFeature;
	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
-(void)dealloc;
-(NSArray *)sections;
-(id)initWithBuildingFeature:(SCD_Struct_GE111*)arg1 ;
@end

