/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSAuthenticateOptions, NSString, NSNumber, NSUUID, ACAccount;

@interface AMSAuthenticateTask : AMSTask {

	AMSAuthenticateOptions* _options;
	NSString* _password;
	NSString* _multiUserToken;
	NSString* _rawPassword;
	NSString* _altDSID;
	NSNumber* _DSID;
	NSUUID* _homeIdentifier;
	NSString* _username;
	ACAccount* _authenticatedAccount;

}

@property (nonatomic,retain) ACAccount * authenticatedAccount;                //@synthesize authenticatedAccount=_authenticatedAccount - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * multiUserToken;                       //@synthesize multiUserToken=_multiUserToken - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                          //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                              //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSNumber * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSUUID * homeIdentifier;                         //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
-(id)init;
-(AMSAuthenticateOptions *)options;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)performAuthentication;
-(id)initWithRequest:(id)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSNumber *)DSID;
-(NSString *)rawPassword;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(ACAccount *)authenticatedAccount;
-(id)_accountForAuthentication;
-(id)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1 ;
-(id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1 ;
-(id)_updateAccountWithAuthKit:(id)arg1 error:(id*)arg2 ;
-(id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_accountStoreForAuthentication;
-(void)_updateAccountWithProvidedInformation:(id)arg1 ;
-(NSString *)multiUserToken;
-(void)setMultiUserToken:(NSString *)arg1 ;
-(id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1 ;
-(NSUUID *)homeIdentifier;
-(void)setHomeIdentifier:(NSUUID *)arg1 ;
-(id)homeID;
-(id)homeUserID;
-(void)setHomeID:(id)arg1 ;
-(void)setHomeUserID:(id)arg1 ;
-(void)setAuthenticatedAccount:(ACAccount *)arg1 ;
@end

