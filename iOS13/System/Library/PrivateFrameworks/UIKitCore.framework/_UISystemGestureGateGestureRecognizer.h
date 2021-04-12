/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {

	unsigned char _systemGestureGateType;
	unsigned _systemGesturesRecognitionPossible : 1;
	unsigned _waitingForSystemGestureStateNotification : 1;
	double _lastTouchTime;
	NSTimer* _delayTimeoutTimer;

}
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setDelaysTouchesBegan:(BOOL)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(void)setDelaysTouchesEnded:(BOOL)arg1 ;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(id)_gateGestureTypeString;
-(void)_timeOut;
-(id)initWithWindow:(id)arg1 type:(unsigned char)arg2 ;
@end

