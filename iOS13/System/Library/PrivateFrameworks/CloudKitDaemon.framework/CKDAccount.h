/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL isPrimaryEmailVerified; 
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
@property (nonatomic,readonly) NSURL * privateMetricsServiceURL; 
@property (nonatomic,readonly) NSURL * privateDatabaseRPCServiceURL; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
@property (nonatomic,readonly) NSString * displayedHostname; 
+(id)globalAuthTokenQueue;
-(NSString *)description;
-(id)_init;
-(id)dsid;
-(NSString *)accountIdentifier;
-(NSPersonNameComponents *)fullName;
-(NSString *)username;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)personaIdentifier;
-(NSString *)accountID;
-(id)initWithAccountID:(id)arg1 ;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isUnitTestingAccount;
-(BOOL)accountWantsPushRegistration;
-(BOOL)accountWantsFlowControl;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
-(id)initAnonymousAccount;
-(NSString *)displayedHostname;
-(NSString *)primaryEmail;
-(CKDBackingAccount *)backingAccount;
-(BOOL)isAnonymousAccount;
-(BOOL)isCarryAccount;
-(id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(NSString *)serverPreferredPushEnvironment;
-(NSString *)formattedUsername;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(id)initFakeAccountWithAccountOverrideInfo:(id)arg1 ;
-(id)initPrimaryAccount;
-(BOOL)isPrimaryEmailVerified;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(NSURL *)privateCloudDBURL;
-(NSURL *)privateShareServiceURL;
-(NSURL *)privateDeviceServiceURL;
-(NSURL *)privateCodeServiceURL;
-(NSURL *)privateMetricsServiceURL;
-(NSURL *)privateDatabaseRPCServiceURL;
-(void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 accountAccessProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_userCloudDBURLisInCarryPartition;
-(BOOL)haveWarnedAboutServerPreferredPushEnvironment;
-(void)setHaveWarnedAboutServerPreferredPushEnvironment:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)authTokenQueue;
-(NSObject*<OS_dispatch_queue>)authTokenCallbackQueue;
-(void)setLastFailedCloudKitAuthToken:(NSString *)arg1 ;
-(id)_lockedCloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accountAccessProvider:(id)arg3 tokenFetchBlock:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSString *)lastFailedCloudKitAuthToken;
-(void)setLastFailediCloudAuthToken:(NSString *)arg1 ;
-(id)_lockediCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2 ;
-(NSString *)lastFailediCloudAuthToken;
-(id)sharingURLHostname;
-(BOOL)isiCloudDevEnvironmentAccount;
-(void)setIsAnonymousAccount:(BOOL)arg1 ;
-(void)setAuthTokenCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

