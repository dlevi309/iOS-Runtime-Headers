/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccount, NSString, NSArray, NSDictionary, NSSet;

@interface AAAccount : NSObject {

	ACAccount* _account;
	NSString* _fmipToken;
	NSArray* _appleIDAliases;
	NSString* _protocolVersion;

}

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSString * fmipToken;                                     //@synthesize fmipToken=_fmipToken - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSArray * appleIDAliases;                             //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
@property (assign,nonatomic) BOOL primaryAccount; 
@property (nonatomic,readonly) BOOL primaryEmailVerified; 
@property (nonatomic,readonly) BOOL needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL needsRegistration; 
@property (nonatomic,readonly) BOOL serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSSet * provisionedDataclasses; 
@property (nonatomic,readonly) NSSet * enabledDataclasses; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * accountFooterText; 
@property (nonatomic,readonly) NSDictionary * accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * accountFirstDisplayAlert; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@property (assign,nonatomic) BOOL needsToVerifyTerms; 
@property (nonatomic,readonly) NSArray * supportedDataclasses; 
@property (nonatomic,readonly) int accountServiceType; 
+(id)accountTypeString;
-(NSString *)accountDescription;
-(void)setAuthToken:(NSString *)arg1 ;
-(BOOL)needsRegistration;
-(id)account;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)authToken;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(NSArray *)supportedDataclasses;
-(NSString *)protocolVersion;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(NSString *)password;
-(id)_childAccounts;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(NSString *)username;
-(NSSet *)provisionedDataclasses;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSDictionary *)dataclassProperties;
-(NSSet *)enabledDataclasses;
-(id)propertiesForDataclass:(id)arg1 ;
-(id)_mailChildAccount;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(int)accountServiceType;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSString *)accountFooterText;
-(NSDictionary *)accountFooterButton;
-(NSDictionary *)accountFirstDisplayAlert;
-(void)updateAccountWithProvisioningResponse:(id)arg1 ;
-(void)setFmipToken:(NSString *)arg1 ;
-(BOOL)serviceUnavailable;
-(NSDictionary *)serviceUnavailableInfo;
-(BOOL)useCellularForDataclass:(id)arg1 ;
-(void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)needsEmailConfiguration;
-(int)mobileMeAccountStatus;
-(NSString *)syncStoreIdentifier;
-(BOOL)primaryAccount;
-(void)notifyUserOfQuotaDepletion;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 ;
-(void)saveTokensInKeychain;
-(void)savePasswordInKeychain;
-(void)saveFMIPTokenInKeychain;
-(void)removeTokensFromKeychain;
-(void)removePasswordFromKeychain;
-(void)flushCachedTokens;
-(void)flushCachedPassword;
-(void)updateAccountPropertiesWithHandler:(/*^block*/id)arg1 ;
-(BOOL)needsToVerifyTerms;
-(void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2 ;
-(void)renewCredentialsForAppleIDWithHandler:(/*^block*/id)arg1 ;
-(void)setNeedsToVerifyTerms:(BOOL)arg1 ;
-(NSString *)personID;
-(NSString *)primaryEmail;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSArray *)appleIDAliases;
-(void)setPrimaryAccount:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)authenticateWithHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)fmipToken;
-(BOOL)primaryEmailVerified;
@end

