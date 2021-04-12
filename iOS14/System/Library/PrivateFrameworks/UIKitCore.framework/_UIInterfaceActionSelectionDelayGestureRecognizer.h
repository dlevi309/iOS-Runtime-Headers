/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _delayedAction;

}

@property (nonatomic,readonly) UIDelayedAction * delayedAction;              //@synthesize delayedAction=_delayedAction - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIDelayedAction *)delayedAction;
-(void)_timerSatisfied;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

