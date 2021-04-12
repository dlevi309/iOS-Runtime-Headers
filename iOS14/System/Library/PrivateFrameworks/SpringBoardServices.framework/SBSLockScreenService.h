/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invalidate;
-(id)preventPasscodeLockWithReason:(id)arg1 ;
-(void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)preventSpuriousScreenUndimWithReason:(id)arg1 ;
-(void)dealloc;
@end

