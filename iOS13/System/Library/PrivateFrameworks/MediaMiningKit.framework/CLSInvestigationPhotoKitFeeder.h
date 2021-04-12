/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class PHFetchResult, NSArray, PHAssetCollection, PHFetchOptions, CLSFeederPrefetchOptions;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {

	unsigned long long _assetPrefetchOptions;
	PHFetchResult* _fetchResult;
	NSArray* _allItems;
	unsigned long long _numberOfAllPeople;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _assetFetchOptions;
	CLSFeederPrefetchOptions* _prefetchOptions;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                          //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPeople; 
@property (nonatomic,readonly) BOOL hasFavoritedAssets; 
@property (nonatomic,readonly) BOOL hasBestScoringAssets; 
@property (nonatomic,readonly) BOOL hasNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) unsigned long long numberOfAllPeople; 
@property (nonatomic,copy,readonly) PHFetchOptions * assetFetchOptions;                      //@synthesize assetFetchOptions=_assetFetchOptions - In the implementation block
@property (nonatomic,copy,readonly) CLSFeederPrefetchOptions * prefetchOptions;              //@synthesize prefetchOptions=_prefetchOptions - In the implementation block
+(id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(unsigned long long)numberOfItems;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)localStartDate;
-(id)localEndDate;
-(id)approximateLocation;
-(id)universalStartDate;
-(id)universalEndDate;
-(double)behavioralScore;
-(id)allItems;
-(PHAssetCollection *)assetCollection;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGImageRef)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(id)initWithFeederWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(BOOL)_shouldPrefetchCurationInformation;
-(BOOL)hasPeople;
-(BOOL)hasFavoritedAssets;
-(BOOL)hasBestScoringAssets;
-(BOOL)hasNonJunkAssets;
-(unsigned long long)numberOfAllPeople;
-(PHFetchOptions *)assetFetchOptions;
-(CLSFeederPrefetchOptions *)prefetchOptions;
@end

