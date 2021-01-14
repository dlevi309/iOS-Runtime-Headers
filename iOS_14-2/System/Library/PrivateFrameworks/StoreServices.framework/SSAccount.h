/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class ACAccount, NSData, NSObject, NSArray, NSString, NSDictionary, NSNumber;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {

	ACAccount* _backingAccount;
	NSData* _bioToken;
	BOOL _didFallbackToPassword;
	NSObject*<OS_dispatch_queue> _backingAccountAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingAccountAccessQueue;              //@synthesize backingAccountAccessQueue=_backingAccountAccessQueue - In the implementation block
@property (assign) long long accountSource; 
@property (nonatomic,copy) NSArray * automaticDownloadKinds; 
@property (nonatomic,readonly) ACAccount * backingAccount; 
@property (getter=isDemoAccount,nonatomic,readonly) BOOL demoAccount; 
@property (nonatomic,copy) NSString * demoAccountRawPassword; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) BOOL hasBrokenDSID; 
@property (getter=isLocalAccount,nonatomic,readonly) BOOL localAccount; 
@property (nonatomic,copy) NSString * secureToken; 
@property (assign) BOOL didFallbackToPassword; 
@property (getter=isActive) BOOL active; 
@property (getter=isActiveLockerAccount) BOOL activeLockerAccount; 
@property (copy) NSString * ITunesPassSerialNumber; 
@property (getter=isNewCustomer) BOOL newCustomer; 
@property (getter=isManagedAppleID) BOOL managedAppleID; 
@property (nonatomic,copy) NSString * passwordEquivalentToken; 
@property (nonatomic,copy) NSString * rawPassword; 
@property (assign) long long accountKind; 
@property (copy) NSString * accountName; 
@property (assign) long long accountScope; 
@property (copy) NSString * altDSID; 
@property (getter=isAuthenticated) BOOL authenticated; 
@property (copy) NSString * creditsString; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSDictionary * privacyAcknowledgement; 
@property (getter=isSocialEnabled) BOOL socialEnabled; 
@property (copy) NSString * storeFrontIdentifier; 
@property (retain) NSNumber * uniqueIdentifier; 
@property (assign) long long availableServiceTypes; 
@property (assign) long long enabledServiceTypes; 
@property (assign) long long freeDownloadsPasswordSetting; 
@property (assign) long long paidPurchasesPasswordSetting; 
@property (readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_countryCodeFromStorefrontIdentifier:(id)arg1 ;
+(BOOL)backingAccountIsDemoAccount:(id)arg1 ;
+(BOOL)backingAccountIsLocalAccount:(id)arg1 ;
+(BOOL)isNewCustomerFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)altDSIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)_lastAttemptForServerPromptKeyWithIdentifier:(id)arg1 ;
+(id)_valueForFirstAvailableKeyPath:(id)arg1 inDictionary:(id)arg2 ;
+(id)DSIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(long long)accountKindFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)secureTokenForIdentifier:(id)arg1 ;
+(id)firstNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)lastNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(BOOL)isManagedAppleIDFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)accountNameFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)creditsStringFromAuthenticationResponseDictionary:(id)arg1 ;
+(id)storeFrontIdentifierFromURLResponse:(id)arg1 ;
+(id)serverValueForAccountPasswordSettingValue:(long long)arg1 ;
+(id)_displayedServerPromptKeyWithIdentifier:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isManagedAppleID;
-(NSArray *)automaticDownloadKinds;
-(void)setActiveLockerAccount:(BOOL)arg1 ;
-(ACAccount *)backingAccount;
-(BOOL)isAuthenticated;
-(void)setUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)firstName;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)localizedName;
-(id)copyXPCEncoding;
-(BOOL)didFallbackToPassword;
-(NSString *)lastName;
-(NSString *)accountName;
-(void)addEnabledServiceTypes:(long long)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(NSString *)passwordEquivalentToken;
-(long long)enabledServiceTypes;
-(void)setDemoAccountRawPassword:(NSString *)arg1 ;
-(id)popBiometricToken;
-(BOOL)hasBrokenDSID;
-(void)setDidFallbackToPassword:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isDirty;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(void)_setBackingAccount:(id)arg1 ;
-(long long)accountSource;
-(id)hashedDescription;
-(NSObject*<OS_dispatch_queue>)backingAccountAccessQueue;
-(void)getTermsAndConditionsWithBlock:(/*^block*/id)arg1 ;
-(void)removeAvailableServiceTypes:(long long)arg1 ;
-(void)addAvailableServiceTypes:(long long)arg1 ;
-(void)setITunesPassSerialNumber:(NSString *)arg1 ;
-(void)setAccountSource:(long long)arg1 ;
-(void)setSocialEnabled:(BOOL)arg1 ;
-(void)_sendBlockingXPCMessage:(id)arg1 ;
-(NSString *)demoAccountRawPassword;
-(void)setAccountKind:(long long)arg1 ;
-(NSString *)secureToken;
-(BOOL)isActive;
-(void)setStoreFrontIdentifier:(id)arg1 forRequest:(id)arg2 response:(id)arg3 ;
-(void)_removeAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2 ;
-(id)copyLockdownRepresentation;
-(void)_addAccountPropertyBitmask:(long long)arg1 forKey:(id)arg2 ;
-(void)setEnabledServiceTypes:(long long)arg1 ;
-(void)setCreditsString:(NSString *)arg1 ;
-(NSNumber *)uniqueIdentifier;
-(long long)accountScope;
-(void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)isLocalAccount;
-(BOOL)isSocialEnabled;
-(void)resetTransientData;
-(BOOL)isActiveLockerAccount;
-(NSDictionary *)privacyAcknowledgement;
-(void)setPaidPurchasesPasswordSetting:(long long)arg1 ;
-(void)setLockdownDictionary:(id)arg1 ;
-(NSString *)description;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)getKeybagSyncDataWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBiometricToken:(id)arg1 ;
-(BOOL)displayedServerPromptWithIdentifier:(id)arg1 ;
-(BOOL)isDuplicate:(id)arg1 ;
-(void)_setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)ITunesPassSerialNumber;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithBackingAccount:(id)arg1 ;
-(long long)availableServiceTypes;
-(void)setAutomaticDownloadKinds:(NSArray *)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setSecureToken:(NSString *)arg1 ;
-(void)setLastAttemptDate:(id)arg1 forServerPromptWithIdentifier:(id)arg2 ;
-(unsigned long long)hash;
-(void)setAvailableServiceTypes:(long long)arg1 ;
-(void)setBackingAccountAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)paidPurchasesPasswordSetting;
-(void)getITunesMatchStatusWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)freeDownloadsPasswordSetting;
-(BOOL)isNewCustomer;
-(long long)accountKind;
-(id)_backingAccount;
-(id)eligibilityForService:(long long)arg1 ;
-(NSString *)rawPassword;
-(BOOL)mergeValuesFromAccount:(id)arg1 ;
-(void)setEligibility:(id)arg1 forServiceType:(long long)arg2 ;
-(void)removeEnabledServiceTypes:(long long)arg1 ;
-(void)getEligibilityForService:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNewCustomer:(BOOL)arg1 ;
-(BOOL)isDemoAccount;
-(void)setPrivacyAcknowledgement:(NSDictionary *)arg1 ;
-(void)getDownloadKindsEligibleForContentRestoreWithBlock:(/*^block*/id)arg1 ;
-(void)setAccountScope:(long long)arg1 ;
-(void)getPurchasedItemsForItems:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateAccountPasswordSettingsWithRequestProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setFreeDownloadsPasswordSetting:(long long)arg1 ;
-(void)setDisplayedServerPrompt:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)updateAccountPasswordSettings:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)lastAttemptDateForServerPromptWithIdentifier:(id)arg1 ;
-(NSString *)creditsString;
@end

