/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer {

	CGPoint _stickPosition;
	CGPoint _previousStickPosition;

}

@property (nonatomic,readonly) CGPoint stickPosition;                      //@synthesize stickPosition=_stickPosition - In the implementation block
@property (nonatomic,readonly) CGPoint previousStickPosition;              //@synthesize previousStickPosition=_previousStickPosition - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)stickPosition;
-(CGPoint)previousStickPosition;
@end

