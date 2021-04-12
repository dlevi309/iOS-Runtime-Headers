/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSPersonNameComponents, NSURL;

@interface CKDBackingAccount : NSObject {

	BOOL _isPrimaryEmailVerified;

}

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
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL isPrimaryEmailVerified;                            //@synthesize isPrimaryEmailVerified=_isPrimaryEmailVerified - In the implementation block
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
@property (nonatomic,readonly) NSURL * privateCodeServiceURL; 
@property (nonatomic,readonly) NSURL * privateMetricsServiceURL; 
@property (nonatomic,readonly) NSURL * privateDatabaseRPCServiceURL; 
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4 ;
+(Class)_platformBackingAccountClass;
+(void)deviceCountForAccount:(id)arg1 ignoreCache:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)accountQueue;
+(BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
+(void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)init;
-(id)_init;
-(NSString *)identifier;
-(NSString *)dsid;
-(NSPersonNameComponents *)fullName;
-(NSString *)username;
-(NSString *)personaIdentifier;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)displayedHostname;
-(NSString *)primaryEmail;
-(NSString *)serverPreferredPushEnvironment;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)isPrimaryEmailVerified;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(NSURL *)privateCloudDBURL;
-(NSURL *)privateShareServiceURL;
-(NSURL *)privateDeviceServiceURL;
-(NSURL *)privateCodeServiceURL;
-(NSURL *)privateMetricsServiceURL;
-(NSURL *)privateDatabaseRPCServiceURL;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canRenew;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(id)privateCodeServiceURLPreferringGateway:(BOOL)arg1 ;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)sharingURLHostname;
-(id)ckAccount;
-(id)parentAppleAccount;
-(id)urlForDataclass:(id)arg1 preferringGateway:(BOOL)arg2 ;
-(id)urlForDataclass:(id)arg1 ;
@end

