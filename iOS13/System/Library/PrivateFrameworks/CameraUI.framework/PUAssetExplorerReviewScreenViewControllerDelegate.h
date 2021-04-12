/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
@optional
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(void)assetExplorerReviewScreenViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;

@required
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;

@end

