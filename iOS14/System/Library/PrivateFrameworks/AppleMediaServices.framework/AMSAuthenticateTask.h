/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, AMSAuthenticateTaskDelegate;
@class AMSAuthenticateOptions, NSString, NSNumber, NSUUID;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	id<AMSAuthenticateTaskDelegate> _delegate;
	AMSAuthenticateOptions* _options;
	NSString* _password;
	NSString* _multiUserToken;
	NSString* _rawPassword;
	NSString* _altDSID;
	NSNumber* _DSID;
	NSUUID* _homeIdentifier;
	NSUUID* _homeUserIdentifier;
	NSString* _username;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                                       //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) id<AMSAuthenticateTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * multiUserToken;                                    //@synthesize multiUserToken=_multiUserToken - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                                           //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSNumber * DSID;                                              //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSUUID * homeIdentifier;                                      //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * homeUserIdentifier;                                  //@synthesize homeUserIdentifier=_homeUserIdentifier - In the implementation block
@property (nonatomic,retain) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)_createFallbackBag;
+(BOOL)_loadCreateAppleIDwithClientInfo:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
+(void)_updateAccountPasswordUsingSecondaryAccounts:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(NSNumber *)DSID;
-(id)homeID;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(id<AMSAuthenticateTaskDelegate>)delegate;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(AMSAuthenticateOptions *)options;
-(NSString *)password;
-(id<AMSBagProtocol>)bag;
-(NSString *)username;
-(void)setDelegate:(id<AMSAuthenticateTaskDelegate>)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setPassword:(NSString *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)performAuthentication;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 bag:(id)arg3 ;
-(id)_accountForAuthenticationWithError:(id*)arg1 ;
-(BOOL)_runCreateAccountDialogWithError:(id*)arg1 ;
-(id)_createAuthKitUpdateTaskForAccount:(id)arg1 ;
-(id)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1 ;
-(id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_sanitizeError:(id)arg1 ;
-(id)_accountStoreForAuthentication;
-(NSUUID *)homeIdentifier;
-(void)_updateAccountWithProvidedInformation:(id)arg1 ;
-(id)_runDialogRequest:(id)arg1 ;
-(void)setHomeID:(id)arg1 ;
-(id)_handleDialogFromError:(id)arg1 ;
-(void)setHomeIdentifier:(NSUUID *)arg1 ;
-(NSString *)multiUserToken;
-(NSUUID *)homeUserIdentifier;
-(void)setMultiUserToken:(NSString *)arg1 ;
-(void)setHomeUserIdentifier:(NSUUID *)arg1 ;
-(NSString *)rawPassword;
@end

