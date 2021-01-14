/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sortDescriptorsForMarkets;
-(void)_executeQueries:(id)arg1 currentIndex:(unsigned long long)arg2 userInitiated:(BOOL)arg3 sortDescriptors:(id)arg4 timeout:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_downloadAsset:(id)arg1 userInitiated:(BOOL)arg2 timeout:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_queriesForCityCodeStationProvider:(id)arg1 ;
-(id)_compatibleVersionsWithMinimumVersion:(unsigned long long)arg1 maximumVersion:(unsigned long long)arg2 ;
-(void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_retrieveAssetWithQueries:(id)arg1 latestCompatibilityVersion:(unsigned long long)arg2 userInitiated:(BOOL)arg3 sortDescriptors:(id)arg4 timeout:(unsigned long long)arg5 catalogExpirationDays:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_downloadOptionsWithUserInitiation:(BOOL)arg1 timeout:(long long)arg2 ;
-(id)_queriesForMarketIdentifer:(id)arg1 ;
-(id)sortDescriptorsForCityCode;
@end

