/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATAssetLinkDelegate <NSObject>
@required
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3;
-(void)assetLinkDidChange:(id)arg1;

@end

