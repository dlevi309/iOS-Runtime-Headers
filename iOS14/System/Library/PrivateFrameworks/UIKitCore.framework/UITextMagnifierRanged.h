/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeRangedMagnifier;
+(id)sharedRangedMagnifier;
+(Class)renderClass;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(BOOL)isHorizontal;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)zoomUpAnimation;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)zoomDownAnimation;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)adjustMagnificationPoint:(CGPoint)arg1 ;
-(void)updateFrameAndOffset;
-(BOOL)terminalPointPlacedCarefully;
-(double)offsetFromMagnificationPoint;
-(id)initWithFrame;
-(CGRect)caretRectClosestToPoint:(CGPoint)arg1 ;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(int)horizontalMovement;
@end

