/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class BSServiceConnection, NSCountedSet;

@interface SBSLockScreenServiceConnection : NSObject {

	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	NSCountedSet* _lock_preventPasscodeLockReasons;
	NSCountedSet* _lock_preventSpuriousScreenUndimReasons;

}
-(id)init;
-(void)dealloc;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
@end

