/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
-(void)dealloc;
@end

