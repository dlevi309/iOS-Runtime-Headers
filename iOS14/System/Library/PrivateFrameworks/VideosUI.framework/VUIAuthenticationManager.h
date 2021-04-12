/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class AMSPromise, AMSBinaryPromise, NSString, SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject {

	BOOL __isObservingAccountStoreChange;
	AMSPromise* __authPromise;
	AMSBinaryPromise* __signoutPromise;
	NSString* __accountIdentifier;
	SSAuthenticateRequest* __authRequest;

}

@property (nonatomic,retain) AMSPromise * _authPromise;                         //@synthesize _authPromise=__authPromise - In the implementation block
@property (nonatomic,retain) AMSBinaryPromise * _signoutPromise;                //@synthesize _signoutPromise=__signoutPromise - In the implementation block
@property (assign,nonatomic) BOOL _isObservingAccountStoreChange;               //@synthesize _isObservingAccountStoreChange=__isObservingAccountStoreChange - In the implementation block
@property (nonatomic,retain) NSString * _accountIdentifier;                     //@synthesize _accountIdentifier=__accountIdentifier - In the implementation block
@property (nonatomic,retain) SSAuthenticateRequest * _authRequest;              //@synthesize _authRequest=__authRequest - In the implementation block
+(id)DSID;
+(id)sharedInstance;
+(id)userFullName;
+(BOOL)allowsAccountModification;
+(id)_ssDSID;
+(id)identifier;
+(id)creditsString;
+(BOOL)userHasActiveAccount;
+(void)requestAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(BOOL)_useStoreServices;
+(BOOL)_userHasActiveSSAccount;
+(id)_userAccount;
+(id)_userSSAccountName;
+(id)_userSSFirstName;
+(id)_userSSLastName;
+(id)_userSSFullName;
+(id)_ssCreditsString;
+(void)_requestSSAuthenticationAlwaysPrompt:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)_performAuthenticationTask:(id)arg1 isSilent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_signInSSUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_signOutSSUserWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_recordLog:(id)arg1 isSignOut:(BOOL)arg2 isSilent:(BOOL)arg3 ;
+(id)_userSSAccount;
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
-(AMSBinaryPromise *)_signoutPromise;
-(void)set_signoutPromise:(AMSBinaryPromise *)arg1 ;
-(AMSPromise *)_authPromise;
-(void)set_authPromise:(AMSPromise *)arg1 ;
-(SSAuthenticateRequest *)_authRequest;
-(void)set_authRequest:(SSAuthenticateRequest *)arg1 ;
@end

