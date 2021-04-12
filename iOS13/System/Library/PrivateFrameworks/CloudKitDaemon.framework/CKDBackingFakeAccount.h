/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject;

@interface CKDBackingFakeAccount : CKDBackingAccount {

	NSString* _dsid;
	NSString* _altDsid;
	NSString* _identifier;
	NSString* _primaryEmail;
	NSString* _password;
	NSDictionary* _accountBag;
	NSDictionary* _propertyOverrides;
	NSObject*<OS_dispatch_queue> _fakeAccountInfoQueue;
	NSDictionary* _overridesByDataclass;

}

@property (nonatomic,retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                                        //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * dsid;                                                //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * altDsid;                                             //@synthesize altDsid=_altDsid - In the implementation block
@property (nonatomic,retain) NSDictionary * accountBag;                                      //@synthesize accountBag=_accountBag - In the implementation block
@property (nonatomic,retain) NSDictionary * propertyOverrides;                               //@synthesize propertyOverrides=_propertyOverrides - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fakeAccountInfoQueue;              //@synthesize fakeAccountInfoQueue=_fakeAccountInfoQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * overridesByDataclass;                            //@synthesize overridesByDataclass=_overridesByDataclass - In the implementation block
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4 ;
+(Class)_platformBackingAccountClass;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)password;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)fullName;
-(id)username;
-(id)personaIdentifier;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)overridesByDataclass;
-(void)setOverridesByDataclass:(NSDictionary *)arg1 ;
-(id)displayedHostname;
-(NSString *)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)isPrimaryEmailVerified;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)accountBag;
-(void)setAltDsid:(NSString *)arg1 ;
-(void)setAccountBag:(NSDictionary *)arg1 ;
-(void)_checkAndLogIfAccountError;
-(NSObject*<OS_dispatch_queue>)fakeAccountInfoQueue;
-(id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
-(void)setPropertyOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)propertyOverrides;
-(id)ckAccount;
-(NSString *)altDsid;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(void)setFakeAccountInfoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

