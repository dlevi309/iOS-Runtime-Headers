/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, SBFMutableMobileKeyBagState;

@interface SBFShamMobileKeyBag : NSObject {

	float _timeScaleFactor;
	NSObject*<OS_dispatch_queue> _queue;
	NSData* _queue_correctPasscode;
	SBFMutableMobileKeyBagState* _queue_state;
	unsigned long long _queue_escrowState;
	float _queue_escrowCountTotal;
	float _queue_escrowCountDelta;
	NSData* _queue_trialPasscode;

}
+(id)shamKeyBagWithRecoveryRequired:(BOOL)arg1 correctPasscode:(id)arg2 ;
+(id)shamKeyBagWithRecoveryRequired:(BOOL)arg1 recoveryPossible:(BOOL)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4 ;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)beginRecovery:(id)arg1 error:(id*)arg2 ;
-(void)lock;
-(id)initWithRecoveryRequired:(BOOL)arg1 correctPasscode:(id)arg2 ;
-(id)initWithRecoveryRequired:(BOOL)arg1 recoveryPossible:(BOOL)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4 ;
-(void)_queue_initializeSecretChangeMachine:(id)arg1 ;
-(long long)_simplifiedLockStateForLockState:(long long)arg1 ;
-(void)_queue_stepSecretChangeMachine;
-(id)extendedState;
-(void)waitForUnlockWithTimeout:(float)arg1 ;
-(id)state;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

