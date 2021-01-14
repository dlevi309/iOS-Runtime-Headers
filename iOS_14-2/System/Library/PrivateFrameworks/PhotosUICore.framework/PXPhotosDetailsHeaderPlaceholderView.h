/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXBasicUIViewTileAnimator, PXUIImageTile, PXBasicTileUserData, PXTitleSubtitleUILabelTile, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {

	PXBasicUIViewTileAnimator* _tileAnimator;
	PXTileGeometry* _imageTileGeometry;
	PXUIImageTile* _imageTile;
	PXBasicTileUserData* _imageTileUserData;
	PXTileGeometry* _initialTextTileGeometry;
	PXTileGeometry* _textTileGeometry;
	PXTitleSubtitleUILabelTile* _textTile;
	PXBasicTileUserData* _textTileUserData;
	UILabel* _labelForLastBaselineLayout;

}
-(id)viewForLastBaselineLayout;
-(id)initWithRegionOfInterest:(id)arg1 ;
-(void)_layoutImageTile;
-(void)_layoutTextTile;
-(void)_layoutTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)_layoutLabelForLastBaselineLayout;
-(void)layoutSubviews;
@end

