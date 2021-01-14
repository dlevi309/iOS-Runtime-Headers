/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATAssetLinkDelegate <NSObject>
@required
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
-(void)assetLinkDidChange:(id)arg1;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;

@end

