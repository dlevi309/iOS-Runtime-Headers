/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class SSAuthenticateRequest, NSString;

@interface VUIAuthenticationManager : NSObject {

	BOOL __isObservingAccountStoreChange;
	SSAuthenticateRequest* __authRequest;
	NSString* __accountIdentifier;

}

@property (nonatomic,retain) SSAuthenticateRequest * _authRequest;              //@synthesize _authRequest=__authRequest - In the implementation block
@property (assign,nonatomic) BOOL _isObservingAccountStoreChange;               //@synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange - In the implementation block
@property (nonatomic,retain) NSString * _accountIdentifier;                     //@synthesize _accountIdentifier=__accountIdentifier - In the implementation block
+(id)sharedInstance;
+(id)userFullName;
+(BOOL)allowsAccountModification;
+(BOOL)userHasActiveAccount;
+(void)requestAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_userAccount;
+(void)_performAuthenticationWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)userAccountName;
+(id)userFirstName;
+(id)userLastName;
+(void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)signOutUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(NSString *)_accountIdentifier;
-(BOOL)_isObservingAccountStoreChange;
-(void)set_accountIdentifier:(NSString *)arg1 ;
-(void)set_isObservingAccountStoreChange:(BOOL)arg1 ;
-(SSAuthenticateRequest *)_authRequest;
-(void)set_authRequest:(SSAuthenticateRequest *)arg1 ;
@end

