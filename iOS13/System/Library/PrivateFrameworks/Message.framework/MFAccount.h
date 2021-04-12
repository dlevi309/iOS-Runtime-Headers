/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/EDAccount.h>
#import <libobjc.A.dylib/ECAuthenticatableAccount.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString, ACAccount, NSMutableDictionary, NSArray, ECAccount, NSDictionary, ECAuthenticationScheme;

@interface MFAccount : NSObject <EDAccount, ECAuthenticatableAccount, EFPubliclyDescribable> {

	ACAccount* _persistentAccount;
	os_unfair_lock_s _persistentAccountLock;
	NSMutableDictionary* _unsavedAccountProperties;
	NSArray* emailAddressStrings;
	ECAccount* _baseAccount;
	NSString* _sourceApplicationBundleIdentifier;

}

@property (readonly) ACAccount * accountForRenewingCredentials; 
@property (readonly) ACAccount * persistentAccount; 
@property (readonly) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) ECAccount * baseAccount;                                 //@synthesize baseAccount=_baseAccount - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed; 
@property (readonly) NSDictionary * properties; 
@property (readonly) NSString * uniqueID; 
@property (copy,readonly) NSString * identifier; 
@property (readonly) NSString * syncStoreIdentifier; 
@property (readonly) NSString * managedTag; 
@property (readonly) NSString * type; 
@property (retain) NSString * username; 
@property (nonatomic,copy) NSString * hostname; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain,readonly) NSString * oauth2Token; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * domain; 
@property (nonatomic,retain) ECAuthenticationScheme * preferredAuthScheme; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * emailAddressStrings; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy,readonly) ACAccount * systemAccount; 
@property (nonatomic,copy,readonly) NSString * statisticsKind; 
@property (nonatomic,readonly) BOOL primaryiCloudAccount; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)hostname;
+(id)supportedDataclasses;
+(id)accountTypeString;
+(id)accountTypeIdentifier;
+(BOOL)shouldHealAccounts;
+(id)accountWithProperties:(id)arg1 ;
+(id)_accountClass;
+(id)_newPersistentAccount;
+(id)releaseAllConnectionsScheduler;
+(id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2 ;
+(BOOL)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3 ;
+(id)displayedAccountTypeString;
+(id)excludedAccountPropertyKeys;
+(BOOL)usesSSL;
+(unsigned)defaultSecurePortNumber;
+(unsigned)defaultPortNumber;
+(id)predefinedValueForKey:(id)arg1 ;
+(void)setShouldHealAccounts:(BOOL)arg1 ;
+(id)newAccountWithDictionary:(id)arg1 ;
+(id)authSchemesForAccountClass;
+(id)accountWithPersistentAccount:(id)arg1 ;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(BOOL)isPredefinedAccountType;
+(id)propertiesWhichRequireValidation;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(BOOL)isCommonPortNumber:(unsigned)arg1 ;
+(BOOL)isSSLEditable;
+(id)saslProfileName;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(NSString *)password;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setPassword:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(id)serviceName;
-(NSDictionary *)properties;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)hostname;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)_password;
-(ACAccount *)parentAccount;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)enabledDataclasses;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSString *)parentAccountIdentifier;
-(id)_credential;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)syncStoreIdentifier;
-(BOOL)primaryiCloudAccount;
-(BOOL)requiresAuthentication;
-(NSArray *)emailAddressStrings;
-(BOOL)isManaged;
-(id)initWithPersistentAccount:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(void)setPersistentAccount:(ACAccount *)arg1 ;
-(void)releaseAllConnections;
-(ECAccount *)baseAccount;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(ACAccount *)systemAccount;
-(id)_objectForAccountInfoKey:(id)arg1 ;
-(id)_privacySafeDescription;
-(ACAccount *)persistentAccount;
-(void)accountInfoDidChange;
-(void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2 ;
-(void)_queueAccountInfoDidChange;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(BOOL)usesSSL;
-(BOOL)_boolForAccountInfoKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(NSString *)ef_publicDescription;
-(ECAuthenticationScheme *)preferredAuthScheme;
-(id)_passwordWithError:(id*)arg1 ;
-(ACAccount *)accountForRenewingCredentials;
-(BOOL)_renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)authenticatedConnection;
-(unsigned)defaultSecurePortNumber;
-(unsigned)defaultPortNumber;
-(unsigned)portNumber;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)_newConnection;
-(BOOL)_connectAndAuthenticate:(id)arg1 ;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(void)setTryDirectSSL:(BOOL)arg1 ;
-(id)secureServiceName;
-(CFStringRef)connectionServiceType;
-(BOOL)allowsTrustPrompt;
-(id)networkAccountIdentifier;
-(id)defaultConnectionSettings;
-(unsigned long long)credentialAccessibility;
-(id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(id)missingPasswordErrorWithTitle:(id)arg1 ;
-(BOOL)canAuthenticateWithCurrentCredentials;
-(BOOL)hasPasswordCredential;
-(void)savePersistentAccount;
-(NSString *)statisticsKind;
-(void)setMissingPasswordError;
-(NSString *)oauth2Token;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(void)removePersistentAccount;
-(id)accountClass;
-(void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2 ;
-(void)removeValueInAccountPropertiesForKey:(id)arg1 ;
-(id)valueInAccountPropertiesForKey:(id)arg1 ;
-(BOOL)canGoOffline;
-(BOOL)supportsMailDrop;
-(id)_credentialCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)renewCredentialsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)managedTag;
-(BOOL)fetchTokensIfNecessary:(id*)arg1 ;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(ECAuthenticationScheme *)arg1 ;
-(void)applySettingsAsDefault:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(id)nameForMailboxUid:(id)arg1 ;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(BOOL)enableAccount;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(id)inaccessiblePasswordErrorWithTitle:(id)arg1 ;
-(id)loginDisabledErrorWithTitle:(id)arg1 ;
-(BOOL)isSyncingNotes;
-(id)copyDiagnosticInformation;
@end

