/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol ATAssetLinkControllerObserver <NSObject>
@optional
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessAllTrackAssetsWithAssetType:(id)arg2;
-(void)assetLinkControllerDidProcessAllTrackAssets:(id)arg1;
-(void)assetLinkController:(id)arg1 didChangeDownloadStateForAssets:(id)arg2;

@required
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;

@end

