/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PKMobileAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)fetchAssetsForMarketWithIdentifier:(id)arg1 userInitiated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_queriesForEducationVideo;
-(id)sortDescriptorsForEducationVideoWithPreferredFeatures:(unsigned long long)arg1 ;
-(void)_retrieveAssetWithQueries:(id)arg1 latestCompatibilityVersion:(unsigned long long)arg2 userInitiated:(BOOL)arg3 sortDescriptors:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_sortDescriptorWithPreferredFeatureKey:(id)arg1 isFeaturePreferred:(BOOL)arg2 keyPath:(id)arg3 ;
-(id)_queriesForMarketIdentifer:(id)arg1 ;
-(id)sortDescriptorsForMarkets;
-(id)_queriesForCityCodeStationProvider:(id)arg1 ;
-(id)sortDescriptorsForCityCode;
-(id)_compatibleVersionsWithMinimumVersion:(unsigned long long)arg1 maximumVersion:(unsigned long long)arg2 ;
-(id)_downloadOptionsWithUserInitiation:(BOOL)arg1 ;
-(void)_executeQueries:(id)arg1 currentIndex:(unsigned long long)arg2 userInitiated:(BOOL)arg3 sortDescriptors:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_downloadAsset:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchNeededAssetsForThisDeviceWithPreferredFeatures:(unsigned long long)arg1 ;
-(void)fetchEducationVideoWithPreferredFeatures:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

