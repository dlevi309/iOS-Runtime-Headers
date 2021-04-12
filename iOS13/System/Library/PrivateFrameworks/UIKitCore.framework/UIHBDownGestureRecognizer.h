/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _delayedAction;
	NSMutableSet* _currentlyPressedTypes;
	NSSet* _requiredPressTypes;
	double _maximumIntervalBetweenPresses;

}

@property (assign,nonatomic) double maximumIntervalBetweenPresses;              //@synthesize maximumIntervalBetweenPresses=_maximumIntervalBetweenPresses - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_succeed;
-(void)_fail;
-(void)_processPresses:(id)arg1 ;
-(BOOL)_allRequiredButtonsDown;
-(double)maximumIntervalBetweenPresses;
-(void)setMaximumIntervalBetweenPresses:(double)arg1 ;
@end

