/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPInternalServerProtocol
@required
-(void)sysdiagnoseInformationWithCompletion:(/*^block*/id)arg1;
-(void)abGroupInfoWithCompletion:(/*^block*/id)arg1;
-(void)assetVersionsWithCompletion:(/*^block*/id)arg1;
-(void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)downloadAssetMetadataWithCompletion:(/*^block*/id)arg1;
-(void)assetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(/*^block*/id)arg2;

@end

