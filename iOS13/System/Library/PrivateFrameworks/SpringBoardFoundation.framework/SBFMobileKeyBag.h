/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol OS_dispatch_queue;
#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSObject, NSMutableArray, NSHashTable, SBFMobileKeyBagState;

@interface SBFMobileKeyBag : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_observerStateChangedCallbackBlocks;
	NSHashTable* _queue_observers;
	BOOL _queue_hasPasscodeSet;
	BOOL _queue_hasUnlockedSinceBoot;
	MKBEventRef _mbkEvent;

}

@property (nonatomic,copy,readonly) SBFMobileKeyBagState * state; 
@property (nonatomic,copy,readonly) SBFMobileKeyBagState * extendedState; 
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot; 
@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) long long maxUnlockAttempts; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SBFMobileKeyBagState *)state;
-(SBFMobileKeyBagState *)extendedState;
-(BOOL)hasBeenUnlockedSinceBoot;
-(void)_queue_handleKeybagStatusChanged;
-(void)_queue_firstUnlockOccurred;
-(id)_queue_lockStateExtended:(BOOL)arg1 ;
-(void)_queue_setHasPasscodeIfNecessary:(id)arg1 ;
-(void)_queue_createStashBag:(id)arg1 ;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)_queue_verifyExpectedStashState:(long long)arg1 ;
-(void)lockSkippingGracePeriod:(BOOL)arg1 ;
-(BOOL)unlockWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasPasscodeSet;
-(long long)maxUnlockAttempts;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)beginRecovery:(id)arg1 error:(id*)arg2 ;
-(void)waitForUnlockWithTimeout:(float)arg1 ;
@end

