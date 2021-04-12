/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CLKDevice, NSArray, NSMutableSet;

@interface NTKVideoListingFactory : NSObject {

	CLKDevice* _device;
	NSArray* _butterflyListings;
	NSArray* _jellyfishListings;
	NSArray* _flowerListings;
	NSMutableSet* _assetListings;

}
+(id)sharedInstanceForDevice:(id)arg1 ;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)defaultListingWithTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(long long)behaviorForTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_initLibraryForDevice:(id)arg1 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 ;
-(id)_listingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 ;
-(void)setVideoListingHasAssets:(id)arg1 ;
@end

