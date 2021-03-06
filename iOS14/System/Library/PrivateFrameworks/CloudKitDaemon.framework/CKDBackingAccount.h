/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class ACAccountStore, ACAccount, NSString, NSPersonNameComponents, NSURL;

@interface CKDBackingAccount : NSObject {

	BOOL _iCloudDriveAllowsCellularAccess;
	ACAccountStore* _accountStore;
	ACAccount* _appleAccount;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * ckAccount; 
@property (nonatomic,retain) ACAccount * appleAccount;                                 //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) NSPersonNameComponents * fullName; 
@property (nonatomic,readonly) NSString * displayedHostname; 
@property (nonatomic,readonly) NSString * sharingURLHostname; 
@property (nonatomic,readonly) NSString * personaIdentifier; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess;                   //@synthesize iCloudDriveAllowsCellularAccess=_iCloudDriveAllowsCellularAccess - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryEmailVerified; 
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
@property (nonatomic,readonly) NSURL * privateMetricsServiceURL; 
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)primaryAccountInStore:(id)arg1 ;
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5 ;
+(void)deviceCountForAccount:(id)arg1 ignoreCache:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)accountQueue;
+(BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
+(void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
-(NSString *)dsid;
-(NSPersonNameComponents *)fullName;
-(NSString *)personaIdentifier;
-(id)init;
-(NSString *)serverPreferredPushEnvironment;
-(NSURL *)privateShareServiceURL;
-(ACAccountStore *)accountStore;
-(NSString *)username;
-(BOOL)isDataclassEnabledForCellular:(id)arg1 ;
-(NSURL *)privateDeviceServiceURL;
-(NSString *)displayedHostname;
-(NSURL *)privateMetricsServiceURL;
-(ACAccount *)appleAccount;
-(NSString *)primaryEmail;
-(NSString *)identifier;
-(BOOL)isFakeAccount;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(NSURL *)privateCodeServiceURL;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)privateCloudDBURL;
-(BOOL)isPrimaryEmailVerified;
-(NSString *)sharingURLHostname;
-(void)setAppleAccount:(ACAccount *)arg1 ;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canRenew;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_initWithAccountStore:(id)arg1 ;
-(ACAccount *)ckAccount;
-(void)_setOverridesOnVettingContext:(id)arg1 ;
-(id)_accountCredentialForAccount:(id)arg1 withError:(id*)arg2 ;
-(id)urlForDataclass:(id)arg1 preferringGateway:(BOOL)arg2 ;
-(id)urlForDataclass:(id)arg1 ;
-(id)privateCodeServiceURLPreferringGateway:(BOOL)arg1 ;
-(BOOL)iCloudDriveAllowsCellularAccess;
@end

