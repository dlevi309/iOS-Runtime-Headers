/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIView.h>

@class UIView, MTMaterialView, PKPaletteToolPreview;

@interface PKPalettePencilInteractionFeedbackView : UIView {

	UIView* _clippingView;
	MTMaterialView* _backgroundView;
	PKPaletteToolPreview* _toolPreview;

}

@property (nonatomic,retain) UIView * clippingView;                           //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPreview * toolPreview;              //@synthesize toolPreview=_toolPreview - In the implementation block
-(id)init;
-(MTMaterialView *)backgroundView;
-(void)layoutSubviews;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setToolPreview:(PKPaletteToolPreview *)arg1 ;
-(PKPaletteToolPreview *)toolPreview;
-(void)showPreviewForToolWithInk:(id)arg1 scalingFactor:(double)arg2 animated:(BOOL)arg3 ;
@end

