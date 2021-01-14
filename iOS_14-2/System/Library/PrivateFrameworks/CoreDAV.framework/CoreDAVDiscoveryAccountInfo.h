/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVAccountInfoProvider.h>

@protocol CoreDAVAccountInfoProvider;
@class NSString, NSData, NSURL, NSDictionary, NSSet, NSError;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {

	NSString* _scheme;
	NSString* _host;
	NSString* _serverRoot;
	long long _port;
	NSString* _user;
	NSString* _password;
	NSData* _identityPersist;
	NSURL* _principalURL;
	NSString* _accountID;
	NSDictionary* _serverHeaders;
	NSSet* _serverComplianceClasses;
	NSString* _userAgentHeader;
	BOOL _shouldFailAllTasks;
	BOOL _started;
	BOOL _success;
	NSError* _error;
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;

}

@property (nonatomic,retain) NSString * host;                                                        //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * serverRoot;                                                  //@synthesize serverRoot=_serverRoot - In the implementation block
@property (nonatomic,retain) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * user;                                                        //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) long long port;                                                         //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSData * identityPersist;                                               //@synthesize identityPersist=_identityPersist - In the implementation block
@property (nonatomic,retain) NSString * scheme;                                                      //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                                   //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSDictionary * serverHeaders;                                           //@synthesize serverHeaders=_serverHeaders - In the implementation block
@property (nonatomic,retain) NSSet * serverComplianceClasses;                                        //@synthesize serverComplianceClasses=_serverComplianceClasses - In the implementation block
@property (nonatomic,retain) NSString * userAgentHeader;                                             //@synthesize userAgentHeader=_userAgentHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldFailAllTasks;                                                //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL success;                                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;              //@synthesize backingAccountInfoProvider=_backingAccountInfoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPort:(long long)arg1 ;
-(NSString *)accountID;
-(BOOL)success;
-(void)setScheme:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(long long)port;
-(NSString *)scheme;
-(NSString *)host;
-(void)setUser:(NSString *)arg1 ;
-(NSString *)userAgentHeader;
-(id)clientToken;
-(BOOL)started;
-(NSData *)identityPersist;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)clientCertificateInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2 ;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2 ;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1 ;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)renewCredential;
-(CFURLStorageSessionRef)copyStorageSession;
-(void)clientTokenRequestedByServer;
-(NSString *)serverRoot;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)oauthInfoProvider;
-(NSURL *)principalURL;
-(void)setError:(NSError *)arg1 ;
-(NSString *)password;
-(id)url;
-(NSError *)error;
-(BOOL)shouldFailAllTasks;
-(BOOL)shouldUseOpportunisticSockets;
-(NSDictionary *)serverHeaders;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(NSString *)description;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)shouldTryRenewingCredential;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)user;
-(id)initWithAccountInfoProvider:(id)arg1 ;
-(id)getAppleIDSession;
-(void)setStarted:(BOOL)arg1 ;
-(void)setServerComplianceClasses:(NSSet *)arg1 ;
-(void)setServerRoot:(NSString *)arg1 ;
-(void)setUserAgentHeader:(NSString *)arg1 ;
-(void)setBackingAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(void)setShouldFailAllTasks:(BOOL)arg1 ;
-(void)setIdentityPersist:(NSData *)arg1 ;
-(id<CoreDAVAccountInfoProvider>)backingAccountInfoProvider;
-(void)setServerHeaders:(NSDictionary *)arg1 ;
@end

