/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol OS_dispatch_source;
@class NSDate, STCoreUser, NSObject;

@interface STPINController : NSObject {

	NSDate* _timeoutEndDate;
	STCoreUser* _user;
	NSObject*<OS_dispatch_source> _backoffTimer;

}

@property (nonatomic,readonly) STCoreUser * user;                           //@synthesize user=_user - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> backoffTimer;              //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (copy) NSDate * timeoutEndDate;                                   //@synthesize timeoutEndDate=_timeoutEndDate - In the implementation block
@property (readonly) BOOL canRecoveryAuthenticate; 
+(unsigned long long)pinLength;
-(STCoreUser *)user;
-(id)initWithUser:(id)arg1 ;
-(void)_beginTimeoutUntilDate:(id)arg1 ;
-(NSDate *)timeoutEndDate;
-(void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 recoveryAppleIDPrompt:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isPINValid:(id)arg1 ;
-(BOOL)_setPasscode:(id)arg1 recoveryAppleID:(id)arg2 forUser:(id)arg3 error:(id*)arg4 ;
-(BOOL)_saveChangesForUser:(id)arg1 error:(id*)arg2 ;
-(BOOL)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 allowPasscodeRecovery:(BOOL)arg3 error:(id*)arg4 ;
-(void)authenticateWithPIN:(id)arg1 allowPasscodeRecovery:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canRecoveryAuthenticate;
-(id)_timeoutEndDateForAttemptNumber:(long long)arg1 ;
-(void)setTimeoutEndDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)backoffTimer;
-(void)setBackoffTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPIN:(id)arg1 withRecoveryAppleIDPrompt:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatePIN:(id)arg1 toPIN:(id)arg2 withRecoveryAppleIDPrompt:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removePIN:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)authenticateWithPIN:(id)arg1 error:(id*)arg2 ;
-(void)authenticateWithPIN:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

