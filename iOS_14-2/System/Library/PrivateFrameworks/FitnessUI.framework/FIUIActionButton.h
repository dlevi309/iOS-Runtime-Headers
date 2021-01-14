/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIImageView;

@interface FIUIActionButton : UIButton {

	BOOL _animatingTouchDown;
	/*^block*/id _touchUpAnimationCompleteHandler;
	UIColor* _imageViewTintColor;
	UIColor* _backgroundImageColor;
	UIImageView* _transformingImageView;

}

@property (nonatomic,retain) UIColor * imageViewTintColor;                     //@synthesize imageViewTintColor=_imageViewTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundImageColor;                   //@synthesize backgroundImageColor=_backgroundImageColor - In the implementation block
@property (assign,nonatomic) BOOL animatingTouchDown;                          //@synthesize animatingTouchDown=_animatingTouchDown - In the implementation block
@property (nonatomic,retain) UIImageView * transformingImageView;              //@synthesize transformingImageView=_transformingImageView - In the implementation block
@property (nonatomic,copy) id touchUpAnimationCompleteHandler;                 //@synthesize touchUpAnimationCompleteHandler=_touchUpAnimationCompleteHandler - In the implementation block
+(id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)_touchDown;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)_touchUp;
-(void)setBackgroundImageColor:(UIColor *)arg1 ;
-(void)setImageViewTintColor:(UIColor *)arg1 ;
-(void)_setupInternalTouchActions;
-(UIImageView *)transformingImageView;
-(UIColor *)backgroundImageColor;
-(void)setAnimatingTouchDown:(BOOL)arg1 ;
-(void)_animateHighlighted:(BOOL)arg1 ;
-(BOOL)animatingTouchDown;
-(id)touchUpAnimationCompleteHandler;
-(void)turnIntoSolidDotWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)backgroundImageFrame;
-(void)setTouchUpAnimationCompleteHandler:(id)arg1 ;
-(UIColor *)imageViewTintColor;
-(void)setTransformingImageView:(UIImageView *)arg1 ;
@end

