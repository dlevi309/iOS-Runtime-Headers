/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice, NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject {

	CLKDevice* _device;
	NSMutableSet* _assetListings;

}
+(id)sharedInstanceForDevice:(id)arg1 ;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)_initLibraryForDevice:(id)arg1 ;
-(id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(CLLocationCoordinate2D)arg3 ;
-(void)setTimelapseListingHasAssets:(id)arg1 ;
@end

