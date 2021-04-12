/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@interface DCAssetFetcher : NSObject
+(id)sharedFetcher;
-(id)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(void)initiateMetadataFetchIgnoringCachesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAssetWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queryMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_assetQuery;
-(void)_handleMissingMetadataWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSuccessForQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPublicKeyAssetWithCompletion:(/*^block*/id)arg1 ;
@end

