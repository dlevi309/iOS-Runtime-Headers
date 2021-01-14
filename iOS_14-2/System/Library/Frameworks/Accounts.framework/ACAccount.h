/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, ACTrackedSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _accountStore;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _modificationID;
	ACAccount* _parentAccount;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _haveCheckedForClientToken;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _warmingUp;
	BOOL _supportsAuthentication;
	BOOL _visible;
	BOOL _haveCheckedForChildAccounts;
	BOOL _wasProvisionedDataclassesReset;
	BOOL _wasEnabledDataclassesReset;

}

@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;               //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                    //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                   //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                        //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) ACAccountCredential * internalCredential; 
@property (nonatomic,readonly) NSString * modificationID; 
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (assign,getter=isWarmingUp,nonatomic) BOOL warmingUp; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (nonatomic,readonly) NSSet * dirtyAccountProperties; 
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties; 
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                      //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (retain) NSString * managingOwnerIdentifier; 
@property (retain) NSString * managingSourceName; 
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keypathsRequiredForInitialization;
-(NSString *)accountDescription;
-(void)setAuthenticated:(BOOL)arg1 ;
-(ACAccountType *)accountType;
-(BOOL)isAuthenticated;
-(id)_encodeProtobuf;
-(void)refresh;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)personaIdentifier;
-(ACAccountCredential *)credential;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(BOOL)isDirty;
-(id)init;
-(id)accountByCleaningThirdPartyTransformations;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)_installCredentialsChangedObserver;
-(id)_initWithProtobuf:(id)arg1 ;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(BOOL)isWarmingUp;
-(NSString *)clientToken;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_clearDirtyProperties;
-(NSString *)authenticationType;
-(NSSet *)dirtyProperties;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)setChildCardDAVAccountIdentifier:(id)arg1 ;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)portableCopy;
-(BOOL)supportsPush;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)userFullName;
-(void)_setObjectID:(id)arg1 ;
-(NSArray *)childAccounts;
-(ACAccount *)parentAccount;
-(id)propertyForKey:(id)arg1 ;
-(void)setWarmingUp:(BOOL)arg1 ;
-(id)_encodeProtobufData;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)correctPersonaScopedForAccount;
-(BOOL)wasProvisionedDataclassesReset;
-(id)accountPropertiesTransformer;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)markAllPropertiesDirty;
-(void)_applyDirtyStateFromAccount:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)_clearCachedChildAccounts;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(id)childCardDAVAccountIdentifier;
-(id)fullDescription;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)setManagingOwnerIdentifier:(NSString *)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 ;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(id)secCertificates;
-(void)_setAccountStore:(id)arg1 ;
-(NSString *)modificationID;
-(id)qualifiedUsername;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(id)credentialWithError:(id*)arg1 ;
-(NSDictionary *)accountProperties;
-(ACAccount *)displayAccount;
-(NSString *)shortDebugName;
-(void)_markCredentialDirty;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(BOOL)_isDifferentFrom:(id)arg1 ;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)wasEnabledDataclassesReset;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSSet *)dirtyDataclassProperties;
-(void)_loadAllCachedProperties;
-(BOOL)_useParentForCredentials;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(BOOL)authenticated;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(NSURL *)objectID;
-(NSString *)username;
-(BOOL)supportsAuthentication;
-(NSMutableSet *)provisionedDataclasses;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSSet *)dirtyAccountProperties;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(BOOL)isDataSeparatedAccount;
-(void)setManagingSourceName:(NSString *)arg1 ;
-(NSDictionary *)dataclassProperties;
-(void)credentialsChanged:(id)arg1 ;
-(void)setSecCertificates:(id)arg1 ;
-(ACAccountCredential *)internalCredential;
-(NSMutableSet *)enabledDataclasses;
-(id)_initWithProtobufData:(id)arg1 ;
-(NSString *)description;
-(void)_clearCachedCredentials;
-(NSString *)managingSourceName;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(NSString *)managingOwnerIdentifier;
-(NSDate *)creationDate;
-(BOOL)isVisible;
-(void)reload;
-(id)owningBundleID;
-(NSString *)parentAccountIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwningBundleID:(id)arg1 ;
-(NSString *)credentialType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

