/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)setAssetMetadataRefreshIntervalSeconds:(double)arg1 error:(id*)arg2 ;
-(BOOL)clearAssetMetadataRefreshIntervalSecondsWithError:(id*)arg1 ;
-(double)assetMetadataRefreshIntervalSecondsWithError:(id*)arg1 ;
-(BOOL)downloadAssetMetadataWithError:(id*)arg1 ;
-(BOOL)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)assetVersionsWithError:(id*)arg1 ;
-(id)abGroupInfoWithError:(id*)arg1 ;
-(id)sysdiagnoseInformationWithError:(id*)arg1 ;
@end

