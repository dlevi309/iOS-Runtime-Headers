/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIView* _backgroundView;
	CGSize _fixedSize;

}

@property (nonatomic,retain) TLKTapContainerButton * button;                           //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerProgressLayer;                        //@synthesize outerProgressLayer=_outerProgressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerProgressLayer;                        //@synthesize innerProgressLayer=_innerProgressLayer - In the implementation block
@property (assign,nonatomic) double progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TLKImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,getter=isToggled,nonatomic) BOOL toggled;                            //@synthesize toggled=_toggled - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView; 
@property (nonatomic,retain) UIImage * untoggledImage;                                 //@synthesize untoggledImage=_untoggledImage - In the implementation block
@property (nonatomic,retain) UIImage * toggledImage;                                   //@synthesize toggledImage=_toggledImage - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                   //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) CGSize fixedSize;                                         //@synthesize fixedSize=_fixedSize - In the implementation block
@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (readonly) UIImage * imageOnImageView; 
@property (readonly) UIView * hitView; 
+(id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4 ;
+(id)blurColorForColor:(id)arg1 ;
+(SCD_Struct_TL4)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2 ;
-(void)setImageView:(TLKImageView *)arg1 ;
-(TLKTapContainerButton *)button;
-(void)setContainerView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(double)progress;
-(id)init;
-(TLKImageView *)imageView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIImage *)overlayImage;
-(UIView *)backgroundView;
-(void)setButton:(TLKTapContainerButton *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setButtonSelectionState:(BOOL)arg1 ;
-(void)updateOuterProgressLayerStroke;
-(UIImage *)toggledImage;
-(UIImage *)untoggledImage;
-(id)_outerProgressLayer;
-(id)_innerProgressLayer;
-(CAShapeLayer *)outerProgressLayer;
-(void)_beginIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(UIImage *)imageOnImageView;
-(void)addTarget:(id)arg1 forAction:(SEL)arg2 ;
-(void)setUntoggledImage:(UIImage *)arg1 ;
-(void)setToggledImage:(UIImage *)arg1 ;
-(void)setOuterProgressLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)innerProgressLayer;
-(void)setInnerProgressLayer:(CAShapeLayer *)arg1 ;
-(id)iconColor;
-(void)endIndeterminateAnimation;
-(void)showPlayIndicator:(BOOL)arg1 ;
-(void)beginIndeterminateAnimation;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)didMoveToWindow;
-(UIView *)hitView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateInnerProgressLayerStroke;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setToggled:(BOOL)arg1 ;
-(BOOL)isToggled;
-(BOOL)isIndeterminate;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(CGSize)fixedSize;
@end

