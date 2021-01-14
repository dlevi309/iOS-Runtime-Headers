/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>
@optional
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
-(id)assetExplorerReviewScreenViewController:(id)arg1 fileSizeMenuForSelectedUUIDs:(id)arg2;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(void)assetExplorerReviewScreenViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3;

@required
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;

@end

