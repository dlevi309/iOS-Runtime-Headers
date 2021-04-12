/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUOneUpTilingLayoutDelegate <NSObject>
@optional
-(double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
-(id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
-(CGPoint*)layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
-(double)alphaForReviewScreenBarsInLayout:(id)arg1;
-(CGPoint*)layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
-(double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
-(double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
-(CGSize*)layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2 contentWidth:(double)arg3;
-(CGSize*)layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
-(CGSize*)layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layoutShouldShowReviewScreenScrubberBar:(id)arg1;
-(BOOL)layout:(id)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(id)arg2;
-(BOOL)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;

@end

