/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

