/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class ACAccountStore, NSObject, ACAccountType, NSMutableDictionary;

@interface AKAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _accountQueue;
	ACAccountType* _authKitAccountType;
	os_unfair_lock_s _authKitAccountTypeLock;
	ACAccountType* _appleIDAccountType;
	os_unfair_lock_s _appleIDAccountTypeLock;
	ACAccountType* _iCloudAccountType;
	os_unfair_lock_s _iCloudAccountTypeLock;
	os_unfair_lock_s _accountTypeCacheLock;
	NSMutableDictionary* _accountTypeCache;

}

@property (nonatomic,readonly) ACAccountType * appleIDAccountType; 
@property (nonatomic,retain) ACAccountStore * store;                            //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccountType * authKitAccountType; 
@property (nonatomic,readonly) ACAccountType * iCloudAccountType; 
+(BOOL)isAccountsFrameworkAvailable;
+(id)sharedInstance;
+(id)personaIDIfCurrentPersonaIsDataSeparated;
+(void)performWithinPersonaForAccount:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)stringRepresentationForService:(long long)arg1 ;
-(id)forwardingEmailForAccount:(id)arg1 ;
-(id)reachableEmailAddressesForAccount:(id)arg1 ;
-(void)updateUsername:(id)arg1 forAccountsWithAltDSID:(id)arg2 ;
-(void)setAuthenticationMode:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(void)setStore:(ACAccountStore *)arg1 ;
-(id)combinedAliasesAndReachableEmailsForAccount:(id)arg1 ;
-(id)init;
-(id)activeServiceNamesForAccount:(id)arg1 ;
-(void)updateAuthModeTimestampForAccount:(id)arg1 ;
-(ACAccountStore *)store;
-(void)setFamilyName:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)verifiedPrimaryEmailForAccount:(id)arg1 ;
-(void)setDeviceTrustRevoked:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(void)setGivenName:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)authorizationUsedForAccount:(id)arg1 ;
-(void)setPrimaryEmailAddress:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)selectedPrivateEmailForAccount:(id)arg1 ;
-(void)updateSatoriWarmUpTimestampForAccount:(id)arg1 ;
-(id)iCloudAccountForAppleID:(id)arg1 ;
-(id)passwordResetTokenForAccount:(id)arg1 ;
-(void)setAgeOfMajority:(id)arg1 forAccount:(id)arg2 ;
-(void)removeMasterTokenForAccount:(id)arg1 ;
-(id)altDSIDForAccount:(id)arg1 ;
-(unsigned long long)authenticationModeForAccount:(id)arg1 ;
-(void)setPhoneAsAppleID:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)phoneAsAppleIDForAccount:(id)arg1 ;
-(id)primaryEmailAddressForAccount:(id)arg1 ;
-(id)appleIDAccountWithAppleID:(id)arg1 ;
-(ACAccountType *)appleIDAccountType;
-(void)setSelectedAuthorizationEmail:(id)arg1 forAccount:(id)arg2 ;
-(id)accountsUsingService:(long long)arg1 ;
-(id)primaryAuthKitAccount;
-(id)continuationTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(id)appleIDAccountWithAltDSID:(id)arg1 ;
-(id)hearbeatTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(void)setRepairState:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(void)setAliases:(id)arg1 forAccount:(id)arg2 ;
-(void)setDSID:(id)arg1 forAccount:(id)arg2 ;
-(void)setReachableEmailAddresses:(id)arg1 forAccount:(id)arg2 ;
-(void)setAltDSID:(id)arg1 forAccount:(id)arg2 ;
-(id)givenNameForAccount:(id)arg1 ;
-(id)authKitAccountWithDSID:(id)arg1 ;
-(BOOL)demoAccountForAccount:(id)arg1 ;
-(id)accountTypeForTypeIdentifier:(id)arg1 ;
-(void)setVerifiedPrimaryEmail:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)allAuthKitAccounts;
-(BOOL)isPrimaryiCloudAccount:(id)arg1 ;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2 ;
-(id)_accountTypeForServiceType:(long long)arg1 ;
-(BOOL)_setUsername:(id)arg1 forAccount:(id)arg2 ;
-(id)accountEligibleForUpdate;
-(BOOL)isPrimaryiCloudAccountEmailVerified:(id)arg1 ;
-(void)setDemoAccount:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)_matchingServiceAccountForAuthKitAccount:(id)arg1 service:(long long)arg2 ;
-(id)_defaultSecurityUpgradeServiceNames;
-(id)altDSIDforPrimaryiCloudAccount;
-(long long)_serviceTypeForServiceNameString:(id)arg1 ;
-(id)iCloudAccountForAltDSID:(id)arg1 ;
-(id)authKitAccountWithAltDSID:(id)arg1 ;
-(id)masterTokenForAccount:(id)arg1 ;
-(ACAccountType *)iCloudAccountType;
-(id)hearbeatTokenForAccount:(id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAppleID:(id)arg1 ;
-(void)setForwardingEmail:(id)arg1 forAccount:(id)arg2 ;
-(void)setAccount:(id)arg1 inUse:(BOOL)arg2 byService:(long long)arg3 ;
-(id)_aliasesForiCloudAccount:(id)arg1 ;
-(ACAccountType *)authKitAccountType;
-(id)continuationTokenForAccount:(id)arg1 ;
-(id)primaryiCloudAccount;
-(id)selectedAuthorizationEmailForAccount:(id)arg1 ;
-(BOOL)deviceTrustRevokedForAccount:(id)arg1 ;
-(BOOL)_isAccountEligibleForSecurityUpgrade:(id)arg1 ofServiceType:(long long)arg2 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 error:(id*)arg2 ;
-(id)formattedUsernameForAccount:(id)arg1 ;
-(void)setAuthorizationUsed:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)_altDSIDForiCloudAccount:(id)arg1 ;
-(void)updateVerifiedEmail:(BOOL)arg1 forAccountWithAltDSID:(id)arg2 ;
-(BOOL)shouldUpdateAuthModeForAccount:(id)arg1 ;
-(id)transportableAuthKitAccount:(id)arg1 ;
-(id)passwordResetTokenBackupForAccount:(id)arg1 ;
-(id)_serviceTypesForSecurityUpgrade;
-(id)mostRecentlyUsedAuthKitAccount;
-(id)authKitAccountWithAppleID:(id)arg1 ;
-(BOOL)needsRepairForAccount:(id)arg1 ;
-(unsigned long long)repairStateForAccount:(id)arg1 ;
-(id)servicesUsingAccount:(id)arg1 ;
-(void)setSelectedPrivateEmail:(BOOL)arg1 forAccount:(id)arg2 ;
-(void)removeContinuationTokenForAccount:(id)arg1 ;
-(void)setAdditionalInfo:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)shouldPerformSatoriWarmupVerificationForAccount:(id)arg1 ;
-(id)ageOfMajorityForAccount:(id)arg1 ;
-(void)removeUnusedAndDuplicateAuthKitAccountsWithCompletion:(/*^block*/id)arg1 ;
-(id)additionalInfoForAccount:(id)arg1 ;
-(void)_removeTokenKey:(id)arg1 forAccount:(id)arg2 ;
-(void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2 ;
-(void)removeAllPasswordResetTokens;
-(id)passwordResetTokenForAccount:(id)arg1 error:(id*)arg2 ;
-(void)setUserUnderage:(BOOL)arg1 forAccount:(id)arg2 ;
-(id)familyNameForAccount:(id)arg1 ;
-(id)aliasesForAccount:(id)arg1 ;
-(id)DSIDForAccount:(id)arg1 ;
-(BOOL)userUnderAgeForAccount:(id)arg1 ;
-(unsigned long long)securityLevelForAccount:(id)arg1 ;
-(BOOL)hasPrimaryiCloudAccountForAltDSID:(id)arg1 ;
@end

