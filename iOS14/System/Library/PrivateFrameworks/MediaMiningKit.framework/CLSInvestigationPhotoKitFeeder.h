/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class PHFetchResult, NSArray, PHAssetCollection, PHFetchOptions;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {

	unsigned long long _assetPrefetchOptions;
	PHFetchResult* _fetchResult;
	NSArray* _allItems;
	unsigned long long _numberOfAllPeople;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _assetFetchOptions;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                     //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPeople; 
@property (nonatomic,readonly) BOOL hasFavoritedAssets; 
@property (nonatomic,readonly) BOOL hasBestScoringAssets; 
@property (nonatomic,readonly) BOOL hasNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) unsigned long long numberOfAllPeople; 
@property (nonatomic,copy,readonly) PHFetchOptions * assetFetchOptions;                 //@synthesize assetFetchOptions=_assetFetchOptions - In the implementation block
+(id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(id)universalEndDate;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)localStartDate;
-(id)localEndDate;
-(BOOL)_shouldPrefetchCurationInformation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)universalStartDate;
-(unsigned long long)numberOfItems;
-(id)localStartDateComponents;
-(id)approximateLocation;
-(id)initWithAssetFetchResult:(id)arg1 ;
-(BOOL)hasPeople;
-(id)initWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(BOOL)hasFavoritedAssets;
-(BOOL)hasBestScoringAssets;
-(BOOL)hasNonJunkAssets;
-(PHFetchOptions *)assetFetchOptions;
-(id)localEndDateComponents;
-(PHAssetCollection *)assetCollection;
-(unsigned long long)numberOfRegularGemItems;
-(unsigned long long)numberOfAllPeople;
-(unsigned long long)numberOfShinyGemItems;
-(double)behavioralScore;
@end

