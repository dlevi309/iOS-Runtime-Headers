/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <libobjc.A.dylib/ACMonitoredAccountStoreDelegateProtocol.h>
#import <FTServices/FTPasswordManager.h>

@protocol FTPasswordManager <NSObject>
@required
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 failIfNotSilent:(BOOL)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 forceRenewal:(BOOL)arg6 failIfNotSilent:(BOOL)arg7 outRequestID:(id*)arg8 completionBlock:(/*^block*/id)arg9;
-(id)profileIDForACAccount:(id)arg1;
-(void)cleanUpAccountsBasedOnInUseUsernamesBlock:(/*^block*/id)arg1 profileIDBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)performCleanUpWithCompletion:(/*^block*/id)arg1;
-(void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5;
-(void)updatePreviousUsername:(id)arg1 toNewUsername:(id)arg2;
-(BOOL)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;
-(void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg1 username:(id)arg2;
-(id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8;
-(void)setAccountStatus:(id)arg1 forProfileID:(id)arg2 username:(id)arg3 service:(id)arg4;
-(void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6;
-(void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4;
-(void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;
-(void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7;

@end


@class NSMutableSet, ACAccountStore, IMUserNotificationCenter, _FTPasswordManagerCachedAuthTokenInfo, NSString;

@interface FTPasswordManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager> {

	NSMutableSet* _runningQueries;
	ACAccountStore* _accountStore;
	IMUserNotificationCenter* _userNotificationCenter;
	_FTPasswordManagerCachedAuthTokenInfo* _cachedAuthTokenInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(BOOL)arg3 showForgetPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 ;
-(id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 failIfNotSilent:(BOOL)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 forceRenewal:(BOOL)arg6 failIfNotSilent:(BOOL)arg7 outRequestID:(id*)arg8 completionBlock:(/*^block*/id)arg9 ;
-(id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2 ;
-(void)_updateStatus:(id)arg1 onAccount:(id)arg2 ;
-(BOOL)_shouldForceSilentOnlyAuthForUsername:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)init;
-(void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(void)accountCredentialChanged:(id)arg1 ;
-(id)_findIDSAccountsInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
-(id)profileIDForACAccount:(id)arg1 ;
-(void)cleanUpAccountsBasedOnInUseUsernamesBlock:(/*^block*/id)arg1 profileIDBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2 ;
-(id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2 shouldFailIfNotSilent:(BOOL)arg3 ;
-(void)performCleanUpWithCompletion:(/*^block*/id)arg1 ;
-(id)_accountWithUsername:(id)arg1 inStore:(id)arg2 ;
-(void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)updatePreviousUsername:(id)arg1 toNewUsername:(id)arg2 ;
-(id)_findIDSAccountInStore:(id)arg1 withCriteria:(/*^block*/id)arg2 ;
-(id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3 ;
-(double)authTokenGracePeriod;
-(BOOL)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2 ;
-(BOOL)supportsAuthTokenRequests;
-(void)_renewCredentialsIfPossibleForAccount:(id)arg1 username:(id)arg2 inServiceIdentifier:(id)arg3 originalInServiceIdentifier:(id)arg4 serviceName:(id)arg5 failIfNotSilent:(BOOL)arg6 renewHandler:(/*^block*/id)arg7 shortCircuitCompletionBlock:(/*^block*/id)arg8 ;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg1 username:(id)arg2 ;
-(void)accountWasRemoved:(id)arg1 ;
-(id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3 ;
-(id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3 ;
-(void)setAccountStatus:(id)arg1 forProfileID:(id)arg2 username:(id)arg3 service:(id)arg4 ;
-(void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2 ;
-(void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4 ;
-(void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(BOOL)_usernameHasCorrespondingIdMSAccount:(id)arg1 ;
-(id)_profileIDForUsername:(id)arg1 inStore:(id)arg2 ;
-(void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

