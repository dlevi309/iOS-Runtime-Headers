/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet, NSMutableArray, BSTimer, BSMonotonicReferenceTime, NSArray;

@interface SBPressGestureRecognizer : UIGestureRecognizer {

	NSSet* _delayablePressTypes;
	NSSet* _precedencePressTypes;
	long long _internalGestureState;
	NSMutableArray* _delayedPressesInfo;
	double _latestDispatchedPressTimestamp;
	long long _latestDispatchedPressPhase;
	long long _latestDispatchedPressType;
	NSMutableArray* _unbalancedPressBeganTypes;
	BSTimer* _waitingGestureStateExpirationTimer;
	BOOL _isDispatchingPresses;
	BSTimer* _waitingForPreemptionTimer;
	BSMonotonicReferenceTime* _precedencePressesReferenceTime;
	double _waitForPreemptionTimeInterval;

}

@property (nonatomic,retain) NSArray * pressTypesWithPrecedence; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_processDelayablePresses:(id)arg1 ;
-(id)_gestureStateInfoForPressInfo:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(BOOL)_didGestureBegin;
-(double)waitForPreemptionTimeInterval;
-(void)_stopWaitingGestureStateExpiration;
-(long long)_delayedPressesCount;
-(BOOL)_isDispatchingDelayedPresses;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_cancelGesture;
-(void)_processPrecedencePresses:(id)arg1 ;
-(id)name;
-(id)_allowedPressTypes;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)latestPressPhase;
-(void)_addDelayedPress:(id)arg1 ;
-(void)_processPresses:(id)arg1 ;
-(void)setWaitForPreemptionTimeInterval:(double)arg1 ;
-(void)_updatePublicPressInfo:(id)arg1 ;
-(void)_startDispatchingDelayedPresses;
-(void)_reallyStartDispatchingDelayedPresses;
-(BOOL)_isGestureFailedOrCancelled;
-(NSArray *)pressTypesWithPrecedence;
-(void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)arg1 andPhase:(long long)arg2 result:(long long*)arg3 ;
-(void)_resetState;
-(void)_waitGestureStateExpirationWithFireInterval:(double)arg1 timerExpiredActionBlock:(/*^block*/id)arg2 ;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
-(BOOL)_shouldStopDispatching;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)requiredPressTypesCount;
-(double)latestPressTimestamp;
-(void)setPressTypesWithPrecedence:(NSArray *)arg1 ;
-(void)_resetDelayedPresses;
-(void)_resetPublishedPressInfo;
-(void)_applyGestureStateInfo:(id)arg1 ;
-(long long)latestPressType;
@end

