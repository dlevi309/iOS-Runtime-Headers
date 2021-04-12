/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface SFUnlockManager : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_source> _stateRequestTimer;

}
+(id)sharedUnlockManager;
-(id)init;
-(id)timerWithBlock:(/*^block*/id)arg1 ;
-(void)enableUnlockWithDevice:(id)arg1 fromKey:(BOOL)arg2 withPasscode:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unlockEnabledWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelStateRequestTimer;
-(void)establishStashBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)establishStashBagWithManifest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unlockStateForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableUnlockWithDevice:(id)arg1 ;
@end

