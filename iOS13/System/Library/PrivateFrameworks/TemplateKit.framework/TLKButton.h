/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, TLKTapContainerButton, CAShapeLayer, TLKImageView, UIView;

@interface TLKButton : UIView {

	BOOL _toggled;
	BOOL _indeterminate;
	UIImage* _untoggledImage;
	UIImage* _toggledImage;
	UIImage* _overlayImage;
	TLKTapContainerButton* _button;
	CAShapeLayer* _outerProgressLayer;
	CAShapeLayer* _innerProgressLayer;
	double _progress;
	TLKImageView* _imageView;
	CGSize _fixedSize;

}

@property (nonatomic,retain) TLKTapContainerButton * button;                           //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerProgressLayer;                        //@synthesize outerProgressLayer=_outerProgressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerProgressLayer;                        //@synthesize innerProgressLayer=_innerProgressLayer - In the implementation block
@property (assign,nonatomic) double progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TLKImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,getter=isToggled,nonatomic) BOOL toggled;                            //@synthesize toggled=_toggled - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView; 
@property (nonatomic,retain) UIImage * untoggledImage;                                 //@synthesize untoggledImage=_untoggledImage - In the implementation block
@property (nonatomic,retain) UIImage * toggledImage;                                   //@synthesize toggledImage=_toggledImage - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                   //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) CGSize fixedSize;                                         //@synthesize fixedSize=_fixedSize - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (readonly) UIImage * imageOnImageView; 
@property (readonly) UIView * hitView; 
+(id)blurColorForColor:(id)arg1 ;
+(SCD_Struct_TL5)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2 ;
+(id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4 ;
-(id)init;
-(double)progress;
-(BOOL)isIndeterminate;
-(void)setProgress:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(TLKTapContainerButton *)button;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(TLKImageView *)imageView;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)iconColor;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)setImageView:(TLKImageView *)arg1 ;
-(void)setButton:(TLKTapContainerButton *)arg1 ;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)endIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)_updateInnerProgressLayerStroke;
-(void)setToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(void)updateOuterProgressLayerStroke;
-(void)_beginIndeterminateAnimation;
-(id)_outerProgressLayer;
-(id)_innerProgressLayer;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setButtonSelectionState:(BOOL)arg1 ;
-(UIImage *)toggledImage;
-(UIImage *)untoggledImage;
-(CAShapeLayer *)outerProgressLayer;
-(UIImage *)imageOnImageView;
-(void)addTarget:(id)arg1 forAction:(SEL)arg2 ;
-(UIView *)hitView;
-(void)setUntoggledImage:(UIImage *)arg1 ;
-(void)setToggledImage:(UIImage *)arg1 ;
-(void)setOuterProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)innerProgressLayer;
-(void)setInnerProgressLayer:(CAShapeLayer *)arg1 ;
@end

