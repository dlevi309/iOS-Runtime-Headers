/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAssetExplorerReviewScreenActionManagerDelegate <NSObject,PUPhotoEditViewControllerSessionDelegate,PUPhotoMarkupViewControllerObserver,PUFunEffectsViewControllerObserver>
@required
-(void)assetExplorerReviewScreenActionManagerDidPressDeselectAll:(id)arg1;
-(void)assetExplorerReviewScreenActionManagerDidPressSelectAll:(id)arg1;
-(void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1;
-(id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2;
-(void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1;
-(void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1;
-(void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;

@end

