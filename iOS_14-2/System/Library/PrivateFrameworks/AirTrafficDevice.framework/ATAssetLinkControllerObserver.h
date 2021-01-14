/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@protocol ATAssetLinkControllerObserver <NSObject>
@optional
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didChangeDownloadStateForAssets:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessAllTrackAssetsWithAssetType:(id)arg2;
-(void)assetLinkControllerDidProcessAllTrackAssets:(id)arg1;

@required
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;

@end

