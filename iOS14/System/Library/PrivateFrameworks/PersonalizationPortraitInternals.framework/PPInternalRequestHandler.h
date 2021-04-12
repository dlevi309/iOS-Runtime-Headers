/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPInternalServerProtocol.h>

@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>
-(void)sysdiagnoseInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)resetTrialMLModelsForNamespaceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)abGroupInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setTrialUseDefaultFiles:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)trialOverridePath:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1 ;
-(void)assetMetadataRefreshIntervalSecondsWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadAssetMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assetVersionsWithCompletion:(/*^block*/id)arg1 ;
-(void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

