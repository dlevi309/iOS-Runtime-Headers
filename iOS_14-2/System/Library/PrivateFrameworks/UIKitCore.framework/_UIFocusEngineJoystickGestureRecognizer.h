/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)previousStickPosition;
-(void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)stickPosition;
@end

