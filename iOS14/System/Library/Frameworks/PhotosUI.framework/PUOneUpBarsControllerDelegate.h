/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>
@optional
-(void)oneUpBarsControllerDidTapTitle:(id)arg1;
-(void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2;
-(void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
-(void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(BOOL)arg2;
-(void)oneUpBarsControllerDidEndShowingOriginal:(id)arg1;
-(void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg1;
-(void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
-(BOOL)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 shouldEnableShowOriginalForAsset:(id)arg2;
-(BOOL)oneUpBarsController:(id)arg1 canShowOriginalForAsset:(id)arg2;
-(void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
-(BOOL)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;

@end

