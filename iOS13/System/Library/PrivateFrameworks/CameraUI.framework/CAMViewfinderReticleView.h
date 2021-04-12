/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface CAMViewfinderReticleView : UIView {

	double _viewportTopInset;
	double _viewportBottomInset;
	long long _maskingStyle;
	UIView* __topMaskingView;
	UIView* __bottomMaskingView;
	UIImageView* __viewportBorderView;
	UIImageView* __topLeftCornerView;
	UIImageView* __topRightCornerView;
	UIImageView* __bottomLeftCornerView;
	UIImageView* __bottomRightCornerView;

}

@property (nonatomic,readonly) UIView * _topMaskingView;                          //@synthesize _topMaskingView=__topMaskingView - In the implementation block
@property (nonatomic,readonly) UIView * _bottomMaskingView;                       //@synthesize _bottomMaskingView=__bottomMaskingView - In the implementation block
@property (nonatomic,readonly) UIImageView * _viewportBorderView;                 //@synthesize _viewportBorderView=__viewportBorderView - In the implementation block
@property (nonatomic,readonly) UIImageView * _topLeftCornerView;                  //@synthesize _topLeftCornerView=__topLeftCornerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _topRightCornerView;                 //@synthesize _topRightCornerView=__topRightCornerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _bottomLeftCornerView;               //@synthesize _bottomLeftCornerView=__bottomLeftCornerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _bottomRightCornerView;              //@synthesize _bottomRightCornerView=__bottomRightCornerView - In the implementation block
@property (nonatomic,readonly) double viewportTopInset;                           //@synthesize viewportTopInset=_viewportTopInset - In the implementation block
@property (nonatomic,readonly) double viewportBottomInset;                        //@synthesize viewportBottomInset=_viewportBottomInset - In the implementation block
@property (assign,nonatomic) long long maskingStyle;                              //@synthesize maskingStyle=_maskingStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setMaskingStyle:(long long)arg1 ;
-(long long)maskingStyle;
-(void)setViewportTopInset:(double)arg1 bottomInset:(double)arg2 animated:(BOOL)arg3 ;
-(void)setMaskingStyle:(long long)arg1 withDuration:(double)arg2 ;
-(id)_newViewportTemplateImage;
-(id)_newViewportCornerImage;
-(UIView *)_topMaskingView;
-(UIView *)_bottomMaskingView;
-(void)_updateMaskingOpacityWithDuration:(double)arg1 ;
-(double)viewportTopInset;
-(double)viewportBottomInset;
-(UIImageView *)_viewportBorderView;
-(UIImageView *)_topLeftCornerView;
-(UIImageView *)_topRightCornerView;
-(UIImageView *)_bottomLeftCornerView;
-(UIImageView *)_bottomRightCornerView;
-(double)_opacityForMaskingStyle:(long long)arg1 ;
@end

