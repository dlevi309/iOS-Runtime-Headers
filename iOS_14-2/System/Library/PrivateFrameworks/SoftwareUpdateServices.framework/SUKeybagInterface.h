/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)lockDevice;
-(double)backOffTime;
-(BOOL)authenticate:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isPasscodeLocked;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
-(BOOL)hasPasscodeSet;
-(void)dealloc;
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

