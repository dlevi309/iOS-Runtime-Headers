/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDAccountInfoProvider.h>

@protocol OS_dispatch_queue;
@class NSString, CKAccountOverrideInfo, ACAccountStore, CKDBackingAccount, NSObject, NSPersonNameComponents, NSURL;

@interface CKDAccount : NSObject <CKDAccountInfoProvider> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _accountWantsFlowControl;
	BOOL _isAnonymousAccount;
	BOOL _haveWarnedAboutServerPreferredPushEnvironment;
	CKAccountOverrideInfo* _fakeAccountInfo;
	ACAccountStore* _accountStore;
	CKDBackingAccount* _backingAccount;
	NSObject*<OS_dispatch_queue> _authTokenCallbackQueue;
	NSString* _lastFailedCloudKitAuthToken;
	NSString* _lastFailediCloudAuthToken;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) CKDBackingAccount * backingAccount;                             //@synthesize backingAccount=_backingAccount - In the implementation block
@property (assign,nonatomic) BOOL isAnonymousAccount;                                          //@synthesize isAnonymousAccount=_isAnonymousAccount - In the implementation block
@property (assign,nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;               //@synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> authTokenQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> authTokenCallbackQueue;              //@synthesize authTokenCallbackQueue=_authTokenCallbackQueue - In the implementation block
@property (nonatomic,copy) NSString * lastFailedCloudKitAuthToken;                             //@synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken - In the implementation block
@property (nonatomic,copy) NSString * lastFailediCloudAuthToken;                               //@synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) NSPersonNameComponents * fullName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * formattedUsername; 
@property (nonatomic,readonly) NSString * personaIdentifier; 
@property (nonatomic,readonly) CKAccountOverrideInfo * fakeAccountInfo;                        //@synthesize fakeAccountInfo=_fakeAccountInfo - In the implementation block
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (assign,nonatomic) BOOL isUnitTestingAccount;                                        //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;                                //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (assign,nonatomic) BOOL accountWantsFlowControl;                                     //@synthesize accountWantsFlowControl=_accountWantsFlowControl - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryEmailVerified; 
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
@property (nonatomic,readonly) NSURL * privateMetricsServiceURL; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
@property (nonatomic,readonly) NSString * displayedHostname; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)globalAuthTokenQueue;
-(NSString *)accountID;
-(CKDBackingAccount *)backingAccount;
-(id)dsid;
-(BOOL)isiCloudDevEnvironmentAccount;
-(BOOL)isAnonymousAccount;
-(NSPersonNameComponents *)fullName;
-(NSString *)personaIdentifier;
-(BOOL)haveWarnedAboutServerPreferredPushEnvironment;
-(NSString *)serverPreferredPushEnvironment;
-(NSURL *)privateShareServiceURL;
-(BOOL)isCarryAccount;
-(void)setHaveWarnedAboutServerPreferredPushEnvironment:(BOOL)arg1 ;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(BOOL)_userCloudDBURLisInCarryPartition;
-(NSString *)accountIdentifier;
-(ACAccountStore *)accountStore;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 accountAccessProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_lockedCloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accountAccessProvider:(id)arg3 tokenFetchBlock:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)accountWantsPushRegistration;
-(id)_lockediCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(NSString *)formattedUsername;
-(NSString *)username;
-(BOOL)isDataclassEnabledForCellular:(id)arg1 ;
-(void)setLastFailedCloudKitAuthToken:(NSString *)arg1 ;
-(id)initFakeAccountWithAccountOverrideInfo:(id)arg1 ;
-(NSURL *)privateDeviceServiceURL;
-(NSString *)description;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)displayedHostname;
-(BOOL)isUnitTestingAccount;
-(NSObject*<OS_dispatch_queue>)authTokenQueue;
-(id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(NSURL *)privateMetricsServiceURL;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(void)setLastFailediCloudAuthToken:(NSString *)arg1 ;
-(void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)primaryEmail;
-(id)_init;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(NSString *)lastFailedCloudKitAuthToken;
-(id)initWithAccountID:(id)arg1 ;
-(BOOL)isFakeAccount;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
-(id)initPrimaryAccount;
-(BOOL)accountWantsFlowControl;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(NSString *)lastFailediCloudAuthToken;
-(void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsAnonymousAccount:(BOOL)arg1 ;
-(NSURL *)privateCodeServiceURL;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)privateCloudDBURL;
-(void)setAuthTokenCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isPrimaryEmailVerified;
-(id)sharingURLHostname;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)authTokenCallbackQueue;
-(id)initAnonymousAccount;
@end

