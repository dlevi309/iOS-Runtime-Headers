/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextMagnifier.h>

@interface UITextMagnifierRanged : UITextMagnifier {

	double _touchOffsetFromMagnificationPoint;
	double _magnifierOffsetFromTouch;
	BOOL _isHorizontal;
	BOOL _isAnimating;
	long long _delayedAnimationType;
	CGPoint _delayedAnimationPoint;

}

@property (assign,nonatomic) BOOL isHorizontal;              //@synthesize isHorizontal=_isHorizontal - In the implementation block
+(id)sharedRangedMagnifier;
+(Class)renderClass;
+(id)activeRangedMagnifier;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(BOOL)isHorizontal;
-(CGPoint)adjustMagnificationPoint:(CGPoint)arg1 ;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(BOOL)terminalPointPlacedCarefully;
-(double)offsetFromMagnificationPoint;
-(id)initWithFrame;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(CGRect)caretRectClosestToPoint:(CGPoint)arg1 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(int)horizontalMovement;
@end

