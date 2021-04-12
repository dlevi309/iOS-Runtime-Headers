/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface SUKeybagInterface : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	BOOL _queue_hasPasscodeSet;
	BOOL _queue_isPasscodeLocked;
	NSHashTable* _queue_observers;
	int _stateChangedNotifyToken;

}

@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) BOOL isPasscodeLocked; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)hasPasscodeSet;
-(BOOL)isPasscodeLocked;
-(void)_queue_refreshState;
-(int)_queue_fetchKeybagState;
-(BOOL)_queue_hasPasscodeSetFromLockState:(int)arg1 ;
-(void)_queue_setHasPasscodeSet:(BOOL)arg1 ;
-(BOOL)_queue_isPasscodeLockedFromLockState:(int)arg1 ;
-(void)_queue_setIsPasscodeLocked:(BOOL)arg1 ;
-(BOOL)hadFirstUnlock;
-(int)installationKeybagStateForDescriptor:(id)arg1 ;
-(BOOL)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(BOOL)arg3 ;
-(BOOL)persistKeybagStash;
-(BOOL)disableKeybagStash;
-(id)createPreventLockAssertionWithDuration:(double)arg1 ;
@end

