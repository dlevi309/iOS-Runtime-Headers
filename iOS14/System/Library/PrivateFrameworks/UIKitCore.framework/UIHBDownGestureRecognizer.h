/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_resetGestureRecognizer;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_fail;
-(void)_processPresses:(id)arg1 ;
-(void)_succeed;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_allRequiredButtonsDown;
-(double)maximumIntervalBetweenPresses;
-(void)setMaximumIntervalBetweenPresses:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

