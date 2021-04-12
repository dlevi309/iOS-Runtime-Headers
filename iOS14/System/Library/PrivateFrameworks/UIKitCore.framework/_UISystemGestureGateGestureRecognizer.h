/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_systemGestureStateChanged:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_timeOut;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelaysTouchesEnded:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_gateGestureTypeString;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)dealloc;
-(void)setDelaysTouchesBegan:(BOOL)arg1 ;
-(id)initWithWindow:(id)arg1 type:(unsigned char)arg2 ;
@end

