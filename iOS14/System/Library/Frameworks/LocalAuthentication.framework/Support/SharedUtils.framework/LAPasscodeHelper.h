/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@class NSMutableDictionary;

@interface LAPasscodeHelper : NSObject {

	NSMutableDictionary* _failedAttemptsDictionary;
	NSMutableDictionary* _backoffEndTimeDictionary;

}
+(id)sharedInstance;
-(id)init;
-(long long)failedAttemptsForUserID:(id)arg1 ;
-(unsigned)_keybagHandleForUserId:(id)arg1 ;
-(long long)maxUnlockAttemptsForUserID:(id)arg1 ;
-(BOOL)_isSecureBootCapableSystem;
-(void)_resetFailedAttemptCountForUserID:(id)arg1 ;
-(double)backoffTimeIntervalForUserID:(id)arg1 ;
-(id)_currentUserID;
-(BOOL)accountBlockedForUserID:(id)arg1 ;
-(long long)createStash:(id)arg1 mode:(int)arg2 manifest:(id)arg3 ;
-(id)_passwordPolicyStatusForUserID:(id)arg1 ;
-(long long)verifyPasswordUsingPAM:(id)arg1 userID:(id)arg2 pamService:(id)arg3 pamUser:(id)arg4 pamToken:(id)arg5 ;
-(BOOL)isPasscodeSetWithError:(id*)arg1 ;
-(long long)passcodeScreenStyleWithPolicy:(long long)arg1 options:(id)arg2 darkInterface:(BOOL)arg3 ;
-(void)_increaseFailedAttemptCountForUserID:(id)arg1 ;
-(long long)verifyPasswordUsingAKS:(id)arg1 acmContext:(id)arg2 userId:(id)arg3 policy:(long long)arg4 options:(id)arg5 ;
@end

