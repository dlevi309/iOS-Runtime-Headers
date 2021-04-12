/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, CADisplayLink, UIImageView, UIColor;

@interface _UICircleProgressIndicator : UIView {

	double _animatedValue;
	double _animationEndTime;
	double _animationStartTime;
	double _animationStartValue;
	UIImage* _borderImage;
	UIImage* _centerImage;
	UIEdgeInsets _centerImageInsets;
	CADisplayLink* _displayLink;
	UIImage* _fillImage;
	BOOL _highlighted;
	UIImageView* _indeterminateView;
	BOOL _isAnimating;
	double _progress;
	UIColor* _unhighlightedBackgroundColor;

}

@property (nonatomic,retain) UIImage * borderImage;                                  //@synthesize borderImage=_borderImage - In the implementation block
@property (nonatomic,retain) UIImage * fillImage;                                    //@synthesize fillImage=_fillImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize centerImage=_centerImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                               //@synthesize centerImageInsets=_centerImageInsets - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate; 
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                  //@synthesize highlighted=_highlighted - In the implementation block
+(id)_fillImage;
+(id)_borderImage;
+(id)_indeterminateImage;
-(void)dealloc;
-(double)progress;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_startIndeterminateAnimation;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)setBorderImage:(UIImage *)arg1 ;
-(void)setFillImage:(UIImage *)arg1 ;
-(void)_setHidesBorderView:(BOOL)arg1 ;
-(UIImage *)borderImage;
-(UIImage *)fillImage;
@end

