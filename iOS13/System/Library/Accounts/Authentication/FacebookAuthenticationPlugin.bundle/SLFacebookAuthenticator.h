/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
*/


@class ACAccount, ACAccountStore, NSString;

@interface SLFacebookAuthenticator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _completionHandler;
	NSString* _machineId;
	long long _retryCount;

}
-(id)initWithAccount:(id)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(id)_machineId;
-(void)signInWithCompletion:(/*^block*/id)arg1 ;
-(id)_sanitizeResponseForLogging:(id)arg1 ;
-(void)_processResponseDictionary:(id)arg1 ;
-(BOOL)_isErrorTemporary:(int)arg1 ;
-(BOOL)_isLoginApprovalRequired:(int)arg1 ;
-(id)_machineIdFromResponseDictionary:(id)arg1 ;
-(void)_setMachineId:(id)arg1 ;
-(id)_errorForErrorCode:(int)arg1 ;
-(id)_fetchMeInfoForAccount:(id)arg1 ;
@end

