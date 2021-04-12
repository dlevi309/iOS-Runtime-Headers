/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer {

	double _allowableMovement;
	CGPoint _originalTouchPoint;

}

@property (assign,nonatomic) CGPoint originalTouchPoint;              //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (assign,nonatomic) double allowableMovement;                //@synthesize allowableMovement=_allowableMovement - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(double)allowableMovement;
-(CGPoint)originalTouchPoint;
-(void)setOriginalTouchPoint:(CGPoint)arg1 ;
@end

