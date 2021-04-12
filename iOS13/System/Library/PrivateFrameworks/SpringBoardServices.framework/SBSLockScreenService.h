/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBSLockScreenServiceConnection, NSString;

@interface SBSLockScreenService : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	SBSLockScreenServiceConnection* _lock_connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
@end

