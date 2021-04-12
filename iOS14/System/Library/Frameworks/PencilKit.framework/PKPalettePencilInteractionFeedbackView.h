/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(MTMaterialView *)backgroundView;
-(UIView *)clippingView;
-(void)layoutSubviews;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setClippingView:(UIView *)arg1 ;
-(PKPaletteToolPreview *)toolPreview;
-(void)showPreviewForTool:(id)arg1 scalingFactor:(double)arg2 animated:(BOOL)arg3 ;
-(void)setToolPreview:(PKPaletteToolPreview *)arg1 ;
@end

