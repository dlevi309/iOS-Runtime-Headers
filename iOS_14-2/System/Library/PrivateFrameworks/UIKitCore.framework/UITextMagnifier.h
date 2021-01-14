/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, UIResponder, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifier : UIView {

	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	CGPoint _terminalPoint;
	BOOL _terminalPointPlacedCarefully;
	UIResponder*<UITextInput> _text;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;
	BOOL _isAnimating;
	long long _delayedAnimationType;

}

@property (nonatomic,retain) UIView * target;                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;                         //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                             //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint;                            //@synthesize terminalPoint=_terminalPoint - In the implementation block
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully;                //@synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
@property (nonatomic,readonly) double offsetFromMagnificationPoint; 
+(Class)renderClass;
-(void)remove;
-(void)setTarget:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setText:(UIResponder*<UITextInput>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIResponder*<UITextInput>)text;
-(BOOL)isHorizontal;
-(void)stopMagnifying:(BOOL)arg1 ;
-(UIView *)target;
-(void)zoomUpAnimation;
-(CGPoint)terminalPoint;
-(CGPoint)animationPoint;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)zoomDownAnimation;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(CGPoint)adjustMagnificationPoint:(CGPoint)arg1 ;
-(void)updateFrameAndOffset;
-(void)setToMagnifierRenderer;
-(void)animateToMagnifierRenderer;
-(void)animateToAutoscrollRenderer;
-(void)detectLostTouches:(id)arg1 ;
-(CGPoint)magnificationPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)autoscrollWillNotStart;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)beginZoomUpAnimation:(/*^block*/id)arg1 withDuration:(double)arg2 ;
-(void)beginZoomDownAnimation:(/*^block*/id)arg1 withDuration:(double)arg2 postponeHandler:(/*^block*/id)arg3 ;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(double)offsetFromMagnificationPoint;
@end

