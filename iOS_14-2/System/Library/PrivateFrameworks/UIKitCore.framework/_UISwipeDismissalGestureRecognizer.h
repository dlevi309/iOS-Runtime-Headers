/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAllowableMovement:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)originalTouchPoint;
-(void)setOriginalTouchPoint:(CGPoint)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

