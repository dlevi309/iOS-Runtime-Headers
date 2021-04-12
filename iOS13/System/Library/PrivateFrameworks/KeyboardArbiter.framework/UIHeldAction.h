/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <UIKitCore/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)cancel;
-(void)resume;
-(BOOL)isHolding;
-(void)hold;
-(void)unschedule;
-(void)touchWithDelay:(double)arg1 ;
@end

