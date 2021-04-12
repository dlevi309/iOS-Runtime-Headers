/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableArray* _queue_performAfterFirstUnlockBlocks;
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
-(BOOL)unlockWithPasscode:(id)arg1 error:(id*)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_queue_setHasPasscodeIfNecessary:(id)arg1 ;
-(void)_queue_firstUnlockOccurred;
-(void)_queue_createStashBag:(id)arg1 ;
-(void)lockSkippingGracePeriod:(BOOL)arg1 ;
-(id)init;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)beginRecovery:(id)arg1 error:(id*)arg2 ;
-(id)_queue_lockStateExtended:(BOOL)arg1 ;
-(BOOL)hasBeenUnlockedSinceBoot;
-(BOOL)_queue_verifyExpectedStashState:(long long)arg1 ;
-(void)_queue_handleKeybagStatusChanged;
-(void)performAfterFirstUnlockSinceBootUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SBFMobileKeyBagState *)extendedState;
-(void)waitForUnlockWithTimeout:(float)arg1 ;
-(SBFMobileKeyBagState *)state;
-(long long)maxUnlockAttempts;
-(BOOL)hasPasscodeSet;
-(void)dealloc;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

